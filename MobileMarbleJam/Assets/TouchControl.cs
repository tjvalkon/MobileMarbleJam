using UnityEngine;
using System.Collections;

public class TouchControl : MonoBehaviour {

    Vector3 target;
    Vector3 position;
    public float speed = 2f;
    Collider2D buttonCollider;

    // Use this for initialization
    void Start () {
        target = transform.position;
        position = target;
        //buttonCollider = GetComponent<Collider2D>();
        //buttonCollider.enabled = false;
    }

    void Move(Vector2 position)
    {
        transform.position = position;
    }

    /*
    void DisableButtonCollider()
    {
        buttonCollider.enabled = false;
    }
    */

    public Vector2 TouchPosition()
    {
        return position;
    }

    void Update () {

        if (Input.GetKey(KeyCode.Mouse0))
        {
            //buttonCollider.enabled = true;
            target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            position = target;
            Move(position);
            Debug.Log(position);
        }

        Ray2D ray = 
        RaycastHit hit;
        /*
        if (position == target)
        {
            Invoke("DisableButtonCollider", 0.1f);
            //buttonCollider.enabled = false;
        }

        position = Vector2.Lerp(position, target, speed * Time.deltaTime);

        if (position != target)
        {
            Move(position);
        }
        
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            Ray ray = Camera.main.ScreenPointToRay(Input.GetTouch(0).position);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Move(hit.point);
                //transform.position = hit.point;
            }
        }
        */
    }

}
