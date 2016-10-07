using UnityEngine;
using System.Collections;

public class ButtonTile : MonoBehaviour {

    public enum TileType { ConcreteWall, ConcreteFloor, Sand, Grass };
    public TileType tileType;
    public Color selectedColor;
    SpriteRenderer spriteRenderer;
    Color defaultColor;
    bool buttonSelected;
    SelectionManager selectionManager;
    TouchControl touchControl;
    CreateTile createTile;
    Vector2 touchPosition;

    // Use this for initialization
    void Start () {
        touchControl = GameObject.Find("TouchControls").GetComponent<TouchControl>();
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        defaultColor = spriteRenderer.color;
        createTile = GameObject.Find("TouchControls").GetComponent<CreateTile>();
    }
	
	// Update is called once per frame
	void Update () {

        touchPosition = touchControl.TouchPosition();
        //Debug.Log(touchPosition);

        Collider2D hit = Physics2D.OverlapPoint(touchPosition);

        if (hit != null && Input.GetKey(KeyCode.Mouse0))

        {
            if (!buttonSelected)
            {
                SelectButton();
            }
            else if (buttonSelected)
            {
                DeSelectButton();
            }
        }

    }
    /*
    void OnTriggerEnter2D()
    {
        if (!buttonSelected)
        {
        SelectButton();

        } else if (buttonSelected)
        {
            DeSelectButton();
        }
    }
    */
    public void SelectButton()
    {
        buttonSelected = true; 
        spriteRenderer.color = selectedColor;
        selectionManager.SetSelected(this);
        //createTile.SetTile(tileType);
    }

    public void DeSelectButton()
    {
        buttonSelected = false;
        spriteRenderer.color = defaultColor;
    }

}
