using UnityEngine;
using System.Collections;

public class TouchControl : MonoBehaviour {

    Vector2 target;
    Vector3 position;
    public float speed = 2f;
    Collider2D hit;
    SelectionManager selectionManager;
    CreateTile createTile;

    // Use this for initialization
    void Start () {
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
        createTile = GameObject.Find("CreateTile").GetComponent<CreateTile>();
        target = transform.position;
        position = target;
    }

    void Move(Vector2 position)
    {
        transform.position = position;
    }

    public Vector2 TouchPosition()
    {
        return position;
    }

    void Update () {

        //Mouse control
        if (Input.GetKeyDown(KeyCode.Mouse0))
        {
            target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            //position = target;
            //Move(position);

            hit = Physics2D.OverlapPoint(target);

            //jos osutaan nappiin
            if (hit != null && hit.GetComponent<ButtonTile>() != null)
            {
                hit.GetComponent<ButtonTile>().TouchButton();
            }
            // jos osutaan johonkin muuhun kuin nappiin
            else if (hit != null && hit.GetComponent<ButtonTile>() == null && hit.gameObject.tag != "Boundary")
            {
                if (selectionManager.GetButtonTile() != null)
                {
                    Destroy(hit.gameObject);
                    createTile.CreateTileOnPosition(hit.transform.position);
                }
                else if (selectionManager.GetButtonTile() == null)
                {
                    Destroy(hit.gameObject);
                    createTile.CreateTileOnPosition(hit.transform.position);
                }
            }
        }

        //Touch control
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            target = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            //position = target;
            //Move(position);
            hit = Physics2D.OverlapPoint(target);

            //jos osutaan nappiin
            if (hit != null && hit.GetComponent<ButtonTile>() != null)
            {
                hit.GetComponent<ButtonTile>().TouchButton();
            }
            // jos osutaan johonkin muuhun kuin nappiin
            else if (hit != null && hit.GetComponent<ButtonTile>() == null && hit.gameObject.tag != "Boundary")
            {
                if (selectionManager.GetButtonTile() != null)
                {
                    Destroy(hit.gameObject);
                    createTile.CreateTileOnPosition(hit.transform.position);
                }
                else if (selectionManager.GetButtonTile() == null)
                {
                    Destroy(hit.gameObject);
                    createTile.CreateTileOnPosition(hit.transform.position);
                }
            }
        }
        /*
        if (Input.touchCount > 0 && Input.GetTouch(0).phase == TouchPhase.Began)
        {
            target = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            position = target;
            Move(position);
            hit = Physics2D.OverlapPoint(transform.position);
            if (hit != null && Input.touchCount > 0 && hit.GetComponent<ButtonTile>() != null)
            {
                hit.GetComponent<ButtonTile>().TouchButton();
            }
        }
        */

    }
        
}
