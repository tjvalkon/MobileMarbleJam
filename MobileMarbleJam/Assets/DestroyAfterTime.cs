using UnityEngine;
using System.Collections;

public class DestroyAfterTime : MonoBehaviour {

    public float destroyDelay;

	// Use this for initialization

	
	// Update is called once per frame
	void Start () {
        Destroy(gameObject,destroyDelay);

	}
}
