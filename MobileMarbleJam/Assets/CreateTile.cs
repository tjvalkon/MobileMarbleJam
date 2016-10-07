using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class CreateTile : MonoBehaviour {

    public GameObject[] tile;
    int SelectedTile;
    public enum TileType { Empty, ConcreteWall, ConcreteFloor, Sand, Grass };
    SelectionManager selectionManager;
 
    // Use this for initialization
    void Start () {
        selectionManager = GameObject.Find("SelectionManager").GetComponent<SelectionManager>();
		}

    public void SetTileType(TileType tileType)
    {
        //Debug.Log(tileType);
        if (tileType == TileType.Empty)
        { SelectedTile = 0; }
        if (tileType == TileType.ConcreteWall)
        { SelectedTile = 1; }
        if (tileType == TileType.ConcreteFloor)
        { SelectedTile = 2; }
        if (tileType == TileType.Sand)
        { SelectedTile = 3; }
        if (tileType == TileType.Grass)
        { SelectedTile = 4; }
    }

    public void CreateTileOnPosition(Vector2 position)
    {
        var newTile = Instantiate(tile[SelectedTile]);
        newTile.transform.position = position;
    }
	
	// Update is called once per frame
	void Update () {
	
	}
}
