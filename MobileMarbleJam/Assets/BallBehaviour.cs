using UnityEngine;
using System.Collections;

public class BallBehaviour : MonoBehaviour {

    GameManager gameManager;

	// Use this for initialization
	void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
	}
	
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

    
    // Update is called once per frame
	void FixedUpdate () {
        /*
        Vector2 position = new Vector2(transform.position.x, transform.position.y); 
        Collider2D hit = Physics2D.OverlapPoint(position);

        Debug.Log(hit);

        if(hit != null && hit.gameObject.tag == ("TileExit"))
        {
            gameManager.EndGame();
        }
        if (hit != null && hit.gameObject.tag == ("TileEmpty"))
        {
            gameManager.EndGame();
        }
        */
    }
}
