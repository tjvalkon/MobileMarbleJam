using UnityEngine;
using System.Collections;

public class SelectionManager : MonoBehaviour {
    ButtonTile selected = null;

    public void SetSelected(ButtonTile button)
    {
        if (selected != null && selected != button)
        {
            selected.DeSelectButton();
        }
        selected = button;
    }

}