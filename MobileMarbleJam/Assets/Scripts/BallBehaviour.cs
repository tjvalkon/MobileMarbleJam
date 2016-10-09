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

    // Use this for initialization
    void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        ballControl = GetComponent<BallControl>();
        spriteRenderer = GetComponent<SpriteRenderer>();
    }

    public void ResetBall()
    {
        ballDropped = false;
        stageClear = false;
        spriteRenderer.sortingLayerName = ("Ball");
        gameObject.GetComponent<Collider2D>().enabled = true;
        transform.localScale = new Vector3(0.5f, 0.5f, 0.5f);
    }
	/*
    void OnTriggerEnter2D(Collider2D col)
    {
        if (col.gameObject.tag == ("TileExit"))
        {
            gameManager.EndGame();
        }
        if (col.gameObject.tag == ("TileEmpty"))
        {
            gameManager.EndGame();
        }

    }
    */
    
    // Update is called once per frame
	void FixedUpdate () {

        if (!ballDropped) { 
        Vector2 position = new Vector2(transform.position.x, transform.position.y); 
        Collider2D hit = Physics2D.OverlapPoint(position, layerMask);

        //Debug.Log(hit);
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
