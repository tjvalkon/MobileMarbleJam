using UnityEngine;
using System.Collections;

public class StartGameButton : MonoBehaviour {

    bool buttonSelected;
    GameManager gameManager;
    public Color selectedColor;
    SpriteRenderer spriteRenderer;
    Color defaultColor;

    // Use this for initialization
    void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        spriteRenderer = GetComponent<SpriteRenderer>();
        defaultColor = spriteRenderer.color;
        buttonSelected = false;
	}

    public void TouchButton()
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

    public void SelectButton()
    {
        buttonSelected = true;
        //spriteRenderer.color = selectedColor;
        gameManager.StartGame();
    }

    public void DeSelectButton()
    {
        buttonSelected = false;
        //spriteRenderer.color = defaultColor;
    }

    // Update is called once per frame
    void Update () {
	
	}
}
