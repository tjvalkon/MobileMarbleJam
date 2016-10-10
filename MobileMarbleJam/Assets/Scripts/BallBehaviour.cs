using UnityEngine;
using System.Collections;

public class BallBehaviour : MonoBehaviour {

    GameManager gameManager;
    BallControl ballControl;
    SpriteRenderer spriteRenderer;
    public float fallSpeed = 0.9f;
    //Collider2D collider2D;
    bool ballDropped;
    bool stageClear;
    int layerMask = 1 << 10 | 1 << 13;

    bool onConcrete;
    public string ballRollingSwitch;
    //public string ballRollingOnConcreteStop;

    // Use this for initialization
    void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        ballControl = GetComponent<BallControl>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    public void ResetBall()
    {
        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.PlaySound, "BallRollingOnConcrete");
        ballDropped = false;
        stageClear = false;
        spriteRenderer.sortingLayerName = ("Ball");
        gameObject.GetComponent<Collider2D>().enabled = true;
        transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
    }
    
    // Update is called once per frame
	void FixedUpdate () {

        var ballVelosity = gameObject.GetComponent<Rigidbody2D>().velocity;
        var audioVolume = (Mathf.Abs(ballVelosity.x) + Mathf.Abs(ballVelosity.y)) / 2;
        audioVolume = Mathf.Clamp(audioVolume, 0f, 5f) / 5;
        //var audioPitch = audioVolume

        Fabric.EventManager.Instance.PostEvent(ballRollingSwitch, Fabric.EventAction.SetVolume, audioVolume);
        Debug.Log(audioVolume);

        if (!ballDropped) { 
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
            if (hit != null && hit.gameObject.tag == ("ExitCircle"))
            {
                stageClear = true;
            }
            if (hit != null && hit.gameObject.tag == ("TileEmpty"))
            {
                ballDropped = true;
            }
        }

        if (ballDropped)
        {
            ballControl.BallDropped();
            spriteRenderer.sortingLayerName = ("BehindGameTiles");
            gameObject.GetComponent<Collider2D>().enabled = false;
            transform.localScale = transform.localScale * fallSpeed;
            if (transform.localScale.x < 0.001f)
            {
                gameManager.EndGame();
            }

        }
        if (stageClear)
        {
            ballControl.BallDropped();
            //spriteRenderer.sortingLayerName = ("BehindGameTiles");
            gameObject.GetComponent<Collider2D>().enabled = false;
            transform.localScale = transform.localScale * fallSpeed;
            if (transform.localScale.x < 0.001f)
            {
                gameManager.EndGame();
            }

        }

    }
}
