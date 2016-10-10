using UnityEngine;
using System.Collections;

public class GameManager : MonoBehaviour {

    GameObject ballBlue;
    GameObject startGameButton;

	// Use this for initialization
	void Start () {
        ballBlue = GameObject.Find("BallBlue");
        ballBlue.SetActive(false);
        startGameButton = GameObject.Find("StartGameButton");
        startGameButton.SetActive(false);
    }

    public void EndGame()
    {
        ballBlue.SetActive(false);
        SetStartGameButtonActive();
    }

    public void SetStartGameButtonActive()
    {
        startGameButton.SetActive(true);
    }
    public void SetStartGameButtonInactive()
    {
        startGameButton.SetActive(false);
    }


    public void StartGame()
    {
        var startPosition = GameObject.FindGameObjectWithTag("TileStart").GetComponent<Transform>().position;
        ballBlue.SetActive(true);
        ballBlue.GetComponent<BallBehaviour>().ResetBall();
        //ballBlue.GetComponent<BallControl>().ResetBall(); 
        ballBlue.transform.position = startPosition;
        SetStartGameButtonInactive();
    }

}
