using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CreateTile : MonoBehaviour {

    public GameObject[] tile;
    int selectedTile;
    public enum TileType { Empty, ConcreteWall, ConcreteFloor, Sand, Magma, Grass, Water, Start, Exit };
    SelectionManager selectionManager;
    GameManager gameManager;
    public bool startTilePlaced;
    public bool exitTilePlaced;
    bool startButtonActivated;
 
    // Use this for initialization
    void Start () {
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
		}

    public void SetTileType(TileType tileType)
    {
        //Debug.Log(tileType);
        if (tileType == TileType.Empty)
        { selectedTile = 0; }
        if (tileType == TileType.ConcreteWall)
        { selectedTile = 1; }
        if (tileType == TileType.ConcreteFloor)
        { selectedTile = 2; }
        if (tileType == TileType.Sand)
        { selectedTile = 3; }
        if (tileType == TileType.Magma)
        { selectedTile = 4; }
        if (tileType == TileType.Grass)
        { selectedTile = 5; }
        if (tileType == TileType.Water)
        { selectedTile = 6; }
        if (tileType == TileType.Start)
        { selectedTile = 7; }
        if (tileType == TileType.Exit)
        { selectedTile = 8; }
    }

    public void CreateTileOnPosition(Collider2D hit)
    {
        if (selectedTile == 7 && !startTilePlaced)
        {
            if (hit.gameObject.tag == ("TileExit"))
            {
                exitTilePlaced = false;
            }
            Destroy(hit.gameObject);
            startTilePlaced = true;
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;
        }
        if (selectedTile == 8 && !exitTilePlaced)
        {
            if (hit.gameObject.tag == ("TileStart"))
            {
                startTilePlaced = false;
            }
            Destroy(hit.gameObject);
            exitTilePlaced = true;
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;   
        }
        if (selectedTile != 8 && selectedTile != 7)
        {
            if (hit.gameObject.tag == ("TileStart"))
            {
                startTilePlaced = false;
            }
            if (hit.gameObject.tag == ("TileExit"))
            {
                exitTilePlaced = false;
            }
            Destroy(hit.gameObject);
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;
        }
    }
	
	// Update is called once per frame
	void Update () {

        if (!startButtonActivated && startTilePlaced && exitTilePlaced)
        {
            startButtonActivated = true;
            gameManager.SetStartGameButtonActive();
        }
        if (startButtonActivated && !startTilePlaced || !exitTilePlaced)
        {
            startButtonActivated = false;
            gameManager.SetStartGameButtonInactive();
        }

    }
}
