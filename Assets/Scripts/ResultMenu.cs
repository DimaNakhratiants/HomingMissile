using System.Collections;
using System.Collections.Generic;
using System.Net.Mime;
using UnityEngine;
using UnityEngine.UI;

public class ResultMenu: MonoBehaviour
{
	public static float points;
	public Text resultText;

	// Use this for initialization
	void Start ()
	{
		resultText.text = "YOUR SCORE: " + ((int) points).ToString();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	
	
}
