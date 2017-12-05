using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Explosion : MonoBehaviour
{

	public float time = 1f;
	private float timer = 0;

	// Use this for initialization
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update ()
	{
		timer += Time.deltaTime;
		if (timer > time )
		{
			Destroy(gameObject);
		}
	}
}
