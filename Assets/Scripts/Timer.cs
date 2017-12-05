using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Timer : MonoBehaviour
{
 	float generalTime;

	public Text pointText;
	
	public float maxTimeDelta = 5;
	public float offsetDistance = 15;
	public float timeDeltaMultiplier = 0.95f;
	public const float minTimeDelta = 0.5f;
	
	public GameObject target;
	private GameObject player;
	
 	float timer;
	
	void Start ()
	{
		
		InstantiateMissile();
	}

	private void Awake()
	{
		generalTime = 0;
		timer = maxTimeDelta;
		player = GameObject.FindWithTag("Player");
	}

	void Update ()
	{
		generalTime += Time.deltaTime;
		ResultMenu.points = generalTime;
		if (timer > 0)
		{
			timer -= Time.deltaTime;
		}
		else
		{
			timer = maxTimeDelta;
			InstantiateMissile();
			if (maxTimeDelta > minTimeDelta)
			{
				maxTimeDelta *= timeDeltaMultiplier;
			}
			print(maxTimeDelta);
		}
		pointText.text = ((int) generalTime).ToString();
	}

	private void InstantiateMissile()
	{
		Vector3 offset = player.transform.right * offsetDistance;
		Instantiate(target, player.transform.position - offset, player.transform.localRotation);
	}
}
