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

				if (currentTouch.phase == TouchPhase.Began) {
					Vector2 v2 = new Vector2 (Camera.main.ScreenToWorldPoint (currentTouch.position).x, Camera.main.ScreenToWorldPoint (currentTouch.position).y);
					Collider2D hit = Physics2D.OverlapPoint (v2, layerMask);

					if (hit != null && hit.GetComponent<ButtonTile> () != null) {
						hit.GetComponent<ButtonTile> ().TouchButton ();
					}
					if (hit != null && hit.GetComponent<StartGameButton> () != null) {
						hit.GetComponent<StartGameButton> ().TouchButton ();
					}
                

					// jos osutaan johonkin muuhun kuin nappiin tai reunaan
					if (hit != null && hit.GetComponent<ButtonTile> () == null && GetComponent<StartGameButton> () == null && hit.gameObject.tag != "Boundary") {
						//Destroy(hit.gameObject);
						createTile.CreateTileOnPosition (hit);
					}
					
				}
			}

		}
	/*
        //Touch control


		if (Input.touchCount > 0) {
			Touch touch = Input.GetTouch (0);

			switch (touch.phase) {
			//alku kosketus
			case TouchPhase.Began:
				startPos = touch.position;
				directionChosen = false;
				//target = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
				hit = Physics2D.OverlapPoint(touch.position);
				break;
			// liikutus
			case TouchPhase.Moved:
				direction = touch.position - startPos;
				directionChosen = false;
				hit = Physics2D.OverlapPoint(touch.position);
				break;	
			//irrotus
			case TouchPhase.Ended:
				directionChosen = true;
				break;
			}
			if (hit != null && hit.GetComponent<ButtonTile>() != null)
			{
				hit.GetComponent<ButtonTile>().TouchButton();
			}
			// jos osutaan johonkin muuhun kuin nappiin tai reunaan
			else if (hit != null && hit.GetComponent<ButtonTile>() == null && hit.gameObject.tag != "Boundary")
			{
				//if (selectionManager.GetButtonTile() != null)
				//{
					Destroy(hit.gameObject);
					createTile.CreateTileOnPosition(hit.transform.position);
				//}
				//else if (selectionManager.GetButtonTile() == null)
				//{
				//	Destroy(hit.gameObject);
				//	createTile.CreateTileOnPosition(hit.transform.position);
				//}
			}

		}

			if ( Input.GetTouch(0).phase == TouchPhase.Began)
            target = Camera.main.ScreenToWorldPoint(Input.GetTouch(0).position);
            //position = target;
            //Move(position);
            hit = Physics2D.OverlapPoint(target);

            //jos osutaan nappiin
            
        }

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
