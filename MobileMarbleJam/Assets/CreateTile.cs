using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CreateTile : MonoBehaviour {

    public GameObject[] tile;
    int selectedTile;
    public enum TileType { Empty, ConcreteWall, ConcreteFloor, Sand, Magma, Grass, Water, Start, Exit };
    SelectionManager selectionManager;
    bool startTilePlaced;
    bool exitTilePlaced;
 
    // Use this for initialization
    void Start () {
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
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
        Destroy(hit.gameObject);

        if (selectedTile == 7 && !startTilePlaced)
        {
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;
            startTilePlaced = true;
        }
        if (selectedTile == 8 && !exitTilePlaced)
        {
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;
            exitTilePlaced = true;
        }
        if (selectedTile != 8 && selectedTile != 7)
        {
            var newTile = Instantiate(tile[selectedTile]);
            newTile.transform.position = hit.transform.position;
        }
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
