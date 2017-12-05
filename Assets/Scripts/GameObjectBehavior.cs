using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameObjectBehavior : MonoBehaviour {

	public VirtualJoystick joystick; 
	public float speed = 5f;
	public float rotationSpeed = 400;

	private Rigidbody2D rb;

	// Use this for initialization
	void Start () {
		rb = gameObject.GetComponent<Rigidbody2D> ();
	}
	
	// Update is called once per frame
	void Update () {
		
		Vector2 pointToTarget = new Vector2 (-joystick.Horizontal (), -joystick.Vertical ());
		
		pointToTarget.Normalize();
				
		float value = Vector3.Cross(pointToTarget, transform.right).z;

		if (value > 0)
		{
			rb.angularVelocity = +rotationSpeed;
		}else if (value < 0)
		{
			rb.angularVelocity = -rotationSpeed;
		}


		rb.angularVelocity = rotationSpeed * value;
		rb.velocity = transform.right * speed;
	}
	
	
}
