using UnityEngine;
using System.Collections;

public class BallBehaviour : MonoBehaviour {

    public GameObject BurnParticles;
    public GameObject WaterParticles;
    GameManager gameManager;
    BallControl ballControl;
    SpriteRenderer spriteRenderer;
    public Color disappear;
    Color originalColor;
    public float fallSpeed = 0.9f;
    //Collider2D collider2D;
    public enum ballStatus { dropped, burned, water, disappeared, stageClear, ok}
    ballStatus curretBallStatus;
    //bool ballDropped;
    //bool stageClear;
    int layerMask = 1 << 10 | 1 << 13;
    Vector2 ballVelosity;
    float audioVolume;

    public float endTime = 5f;

    //bool onConcrete;
    public string ballRollingSwitch;
    //public string ballRollingOnConcreteStop;

    // Use this for initialization
    void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        ballControl = GetComponent<BallControl>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        originalColor = spriteRenderer.color;
    }

    void OnCollision2DEnter()
    {
        //Fabric.EventManager.Instance.PostEvent("Ball/Hit/Wall/", Fabric.EventAction.SetVolume, 0.5f);
        Fabric.EventManager.Instance.PostEvent("Ball/Hit/Wall/", Fabric.EventAction.PlaySound);
    }

    public void ResetBall()
    {
        audioVolume = 0f;
        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, audioVolume);
        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.PlaySound);
        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallRollingOnConcrete");
        gameObject.GetComponent<Collider2D>().enabled = true;
        curretBallStatus = ballStatus.ok;
        spriteRenderer.color = originalColor;
        spriteRenderer.sortingLayerName = ("Ball");    
        transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
        ballControl.ResetBall();
    }

    void EndGame()
    {
        gameManager.EndGame();
    }
    
    // Update is called once per frame
	void FixedUpdate () {
        if (curretBallStatus == ballStatus.ok)
        {
        //Audio volume
        ballVelosity = gameObject.GetComponent<Rigidbody2D>().velocity;
        audioVolume = (Mathf.Abs(ballVelosity.x) + Mathf.Abs(ballVelosity.y)) / 2;
        audioVolume = Mathf.Clamp(audioVolume, 0f, 5f) / 5;
        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, audioVolume);

       
        //Check overlapping
        Vector2 position = new Vector2(transform.position.x, transform.position.y); 
        Collider2D hit = Physics2D.OverlapPoint(position, layerMask);

            //Debug.Log(hit);
            if (hit != null && hit.gameObject.tag == ("TileConcrete"))
            {
                Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallRollingOnConcrete");
            }
            if (hit != null && hit.gameObject.tag == ("TileGravel"))
            {
                Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallRollingOnGravel");
            }
            if (hit != null && hit.gameObject.tag == ("TileGrass"))
            {
                Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallRollingOnGrass");
            }
            if (hit != null && hit.gameObject.tag == ("ExitCircle"))
            {
                curretBallStatus = ballStatus.stageClear;
            }
            if (hit != null && hit.gameObject.tag == ("TileEmpty"))
            {
                curretBallStatus = ballStatus.dropped;
            }
            if (hit != null && hit.gameObject.tag == ("TileMagma"))
            {
                curretBallStatus = ballStatus.burned;
            }
            if (hit != null && hit.gameObject.tag == ("TileWater"))
            {
                curretBallStatus = ballStatus.water;
            }
        }

        if (curretBallStatus == ballStatus.dropped)
        {
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, 0.7f);
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallFall");
            ballControl.BallDropped();
            spriteRenderer.sortingLayerName = ("BehindGameTiles");
            gameObject.GetComponent<Collider2D>().enabled = false;
            transform.localScale = transform.localScale * fallSpeed;
            gameManager.stopTime(false);
            Invoke("EndGame", endTime);
        }
        if (curretBallStatus == ballStatus.burned)
        {
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, 0.7f);
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallBurn");
            Instantiate(BurnParticles,transform.position, Quaternion.identity);
            ballControl.BallBurned();
            spriteRenderer.color = disappear;
            curretBallStatus = ballStatus.disappeared;
            gameManager.stopTime(false);
            Invoke("EndGame", endTime);
        }
        if (curretBallStatus == ballStatus.water)
        {
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, 1f);
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallWater");
            Instantiate(WaterParticles, transform.position, Quaternion.identity);
            ballControl.BallBurned();
            spriteRenderer.color = disappear;
            curretBallStatus = ballStatus.disappeared;
            gameManager.stopTime(false);
            Invoke("EndGame", endTime);
        }
        if (curretBallStatus == ballStatus.stageClear)
        {
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, 0.7f);
            Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetSwitch, "BallFall");
            ballControl.BallBurned();
            spriteRenderer.color = disappear;
            gameObject.GetComponent<Collider2D>().enabled = false;
            transform.localScale = transform.localScale * fallSpeed;
            curretBallStatus = ballStatus.disappeared;
            gameManager.stopTime(true);
            Invoke("EndGame", endTime);
        }

    }
}
