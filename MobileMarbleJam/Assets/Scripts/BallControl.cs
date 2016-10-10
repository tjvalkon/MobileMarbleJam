using UnityEngine;
using System.Collections;

public class BallControl : MonoBehaviour {

    public bool useKeyboard;
    public float force = 1f;
    //public float fallSpeed = 0.9f;
    Rigidbody2D rb;
    Vector2 dir;
    BallBehaviour.ballStatus currentBallStatus;

    //bool ballDropped;

	// Use this for initialization
	void Start () {
        rb = GetComponent<Rigidbody2D>();
    }

    void MoveBall(Vector2 dir)
    {
        rb.AddForce(dir*force);
    }

    public void ResetBall()
    {
        currentBallStatus = BallBehaviour.ballStatus.ok;
        //ballDropped = false;
    }

    public void BallDropped()
    {
        currentBallStatus = BallBehaviour.ballStatus.dropped;
        //ballDropped = true;
    }

    public void BallBurned()
    {
        currentBallStatus = BallBehaviour.ballStatus.burned;
        //ballDropped = true;
    }

    // Update is called once per frame
    void FixedUpdate () {

        if (!useKeyboard && currentBallStatus == BallBehaviour.ballStatus.ok)
        {
            dir = new Vector2 (Input.acceleration.x, Input.acceleration.y);
            if (Input.acceleration.x != 0 || Input.acceleration.y != 0)
            {
                MoveBall(dir);
            }
        }
        if (useKeyboard && currentBallStatus == BallBehaviour.ballStatus.ok) { 
        dir = new Vector2(Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));
            if (Input.GetAxis("Horizontal") !=0 || Input.GetAxis("Vertical") != 0)
            {
                MoveBall(dir);
            }
        }
        
        if (currentBallStatus == BallBehaviour.ballStatus.dropped)
        {
            rb.AddForce(-dir*force/2);
        }
        if (currentBallStatus == BallBehaviour.ballStatus.burned)
        {
            rb.velocity = new Vector2 (0,0);
        }

    }
}
