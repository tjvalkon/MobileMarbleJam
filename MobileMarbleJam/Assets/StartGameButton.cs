using UnityEngine;
using System.Collections;

public class StartGameButton : MonoBehaviour {

    bool buttonSelected;

	// Use this for initialization
	void Start () {

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
    }

    public void DeSelectButton()
    {
        buttonSelected = false;
    }

    // Update is called once per frame
    void Update () {
	
	}
}
