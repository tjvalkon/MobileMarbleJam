using UnityEngine;
using UnityEngine.UI;
using System.Collections;

public class GameManager : MonoBehaviour {

    GameObject ballBlue;
    GameObject startGameButton;
    GameObject newGameAreaButton;
    GameObject tileButtons;
    TouchControl touchControl;
    public Text currentTimeText;
    float currentTime;
    public Text bestTimeText;
    float bestTime;
    const string timerFormat = "F2";
    bool gameRunning;
    bool stageClear;

    // Use this for initialization
    void Start () {
        touchControl = GameObject.Find("TouchControls").GetComponent<TouchControl>();
        startGameButton = GameObject.Find("StartGameButton");
        tileButtons = GameObject.Find("TileButtons");
        newGameAreaButton = GameObject.Find("NewGameAreaButton");
        ballBlue = GameObject.Find("BallBlue");

        NewGameArea();
        ClearTimerTexts();
        gameRunning = false;
        ballBlue.SetActive(false);
        startGameButton.SetActive(false);
    }

    public void stopTime(bool status)
    {
        gameRunning = false;
        stageClear = status;
    }

    void ClearTimerTexts()
    {
        bestTimeText.text = "";
        currentTimeText.text = "";
    }

    public void NewGameArea()
    {     
        ClearTimerTexts();
        tileButtons.SetActive(true);
        newGameAreaButton.SetActive(false);

        currentTime = 0;
        bestTime = 10000;
    }

    public void EndGame()
    {
        ballBlue.GetComponent<BallBehaviour>().ResetBall();
        ballBlue.SetActive(false);
        if (currentTime < bestTime && stageClear)
        {
            bestTime = currentTime;
        } else if (!stageClear)
        {
            currentTimeText.text = "Not qualified!";
        }
        bestTimeText.text = "" + bestTime.ToString(timerFormat);
        SetStartGameButtonActive();
        newGameAreaButton.SetActive(true);
    }

    public void SetStartGameButtonActive()
    {
        startGameButton.SetActive(true);
    }
    public void SetStartGameButtonInactive()
    {
        startGameButton.SetActive(false);
    }

    void UpdateTimer()
    {
        currentTimeText.text = "" + currentTime.ToString(timerFormat);
    }

    void ResetBall()
    {
        var startPosition = GameObject.FindGameObjectWithTag("TileStart").GetComponent<Transform>().position;
        ballBlue.SetActive(true);
        ballBlue.GetComponent<BallBehaviour>().ResetBall();
        ballBlue.transform.position = startPosition;
    }

    public void StartGame()
    {
        newGameAreaButton.SetActive(false);
        tileButtons.SetActive(false);
        currentTime = 0;
        ResetBall();
        SetStartGameButtonInactive();
        gameRunning = true;
    }

    void Update()
    {
        if (gameRunning) {
            currentTime += Time.deltaTime;
            UpdateTimer();
        }
    }

}
