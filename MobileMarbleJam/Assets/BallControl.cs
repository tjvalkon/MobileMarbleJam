using UnityEngine;
using System.Collections;

public class BallControl : MonoBehaviour {

    public float force = 1f;
    Rigidbody2D rb;
    Vector2 dir;

	// Use this for initialization
	void Start () {
        rb = GetComponent<Rigidbody2D>();

    }

    void MoveBall(Vector2 dir)
    {
        rb.AddForce(dir*force);
    }

	// Update is called once per frame
	void Update () {

        dir = new Vector2 (Input.GetAxis("Horizontal"), Input.GetAxis("Vertical"));

        if (Input.GetAxis("Horizontal") !=0 || Input.GetAxis("Vertical") != 0)
        {
            MoveBall(dir);
        }
    }
}
