using UnityEngine;
using System.Collections;

public class TouchControl : MonoBehaviour {

    Vector2 target;
    Vector2 position;
    public float speed = 2f;
    Collider2D hit;
    SelectionManager selectionManager;
    CreateTile createTile;

	//public Vector2 startPos;
	//public Vector2 direction;
	//public bool directionChosen;

    int layerMask = 1 << 12 | 1 << 10;

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

    void FixedUpdate () {

        //Mouse control
        if (Input.GetKey(KeyCode.Mouse0))
        {
            target = Camera.main.ScreenToWorldPoint(Input.mousePosition);
            //position = target;
            //Move(position);

            hit = Physics2D.OverlapPoint(target, layerMask);

            //jos osutaan nappiin
            if (Input.GetKeyDown(KeyCode.Mouse0)) { 
            if (hit != null && hit.GetComponent<ButtonTile>() != null)
            {
                hit.GetComponent<ButtonTile>().TouchButton();
            }
            if (hit != null && hit.GetComponent<StartGameButton>() != null)
            {
                hit.GetComponent<StartGameButton>().TouchButton();
            }
            }
            // jos osutaan johonkin muuhun kuin nappiin
            if (hit != null && hit.GetComponent<ButtonTile>() == null && hit.GetComponent<StartGameButton>() == null && hit.gameObject.tag != "Boundary")
            {
                    //Destroy(hit.gameObject);
                    createTile.CreateTileOnPosition(hit);
            }
        }

		if (Input.touchCount > 0) {
			for (int i = 0; i < Input.touchCount; i++) {	
				Touch currentTouch = Input.GetTouch (i);

                Vector2 v2 = new Vector2(Camera.main.ScreenToWorldPoint(currentTouch.position).x, Camera.main.ScreenToWorldPoint(currentTouch.position).y);
                Collider2D hit = Physics2D.OverlapPoint(v2, layerMask);

                if (currentTouch.phase == TouchPhase.Began)
                {
                    if (hit != null && hit.GetComponent<ButtonTile>() != null)
                    {
                        hit.GetComponent<ButtonTile>().TouchButton();
                    }
                    else if (hit != null && hit.GetComponent<StartGameButton>() != null)
                    {
                        hit.GetComponent<StartGameButton>().TouchButton();
                    }
                }
                if (currentTouch.phase == TouchPhase.Moved || currentTouch.phase == TouchPhase.Began)
                {
                    if (hit != null && hit.GetComponent<ButtonTile>() == null && GetComponent<StartGameButton>() == null && hit.gameObject.tag != "Boundary")
                    {
                        createTile.CreateTileOnPosition(hit);
                    }
                }
					
			}

		}


    }
        
}
