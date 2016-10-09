using UnityEngine;
using System.Collections;

public class ButtonTile : MonoBehaviour {

    public CreateTile.TileType tileType;
    public Color selectedColor;
    SpriteRenderer spriteRenderer;
    Color defaultColor;
    bool buttonSelected;
    SelectionManager selectionManager;
    TouchControl touchControl;
    CreateTile createTile;


    // Use this for initialization
    void Start () {
        touchControl = GameObject.Find("TouchControls").GetComponent<TouchControl>();
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        defaultColor = spriteRenderer.color;
        createTile = GameObject.Find("CreateTile").GetComponent<CreateTile>();
    }
	
	// Update is called once per frame
	void Update () {

    }
 
    public void TouchButton()
    {
        if (!buttonSelected)
        {
            selectionManager.SetSelected(this);
            SelectButton();

        }
        else if (buttonSelected)
        {
            selectionManager.SetSelected(null);
            createTile.SetTileType(0);
            DeSelectButton();
        }
    }

    public void SelectButton()
    {
        buttonSelected = true; 
        spriteRenderer.color = selectedColor;
        createTile.SetTileType(tileType);
    }

    public void DeSelectButton()
    {
        buttonSelected = false;
        spriteRenderer.color = defaultColor;
    }

}
