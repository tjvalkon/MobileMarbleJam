using UnityEngine;
using System.Collections;

public class StartGameButton : MonoBehaviour {

    //bool buttonSelected;
    GameManager gameManager;
    public enum buttonType { StartGame, NewGameArea }
    public buttonType selectedButtonType;

    // Use this for initialization
    void Start () {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();

	}

    public void TouchButton()
    {
        if (selectedButtonType == buttonType.StartGame) {
            gameManager.StartGame();
        } else if (selectedButtonType == buttonType.NewGameArea)
        {
            gameManager.NewGameArea();
        }
    }

}
