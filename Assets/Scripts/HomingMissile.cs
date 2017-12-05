using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class HomingMissile : MonoBehaviour
{

	public float speed = 5;
	public float rotationSpeed = 200;
	private GameObject target;
	public GameObject explosion;
	private Rigidbody2D rb;
	
	// Use this for initialization
	private void Awake()
	{
		target = GameObject.FindGameObjectWithTag("Player");
		
		Vector2 pointToTarget = (Vector2) transform.position - (Vector2) target.transform.position;
		pointToTarget.Normalize();
		rb = GetComponent<Rigidbody2D>();
		transform.localRotation = target.transform.localRotation;
	}


	private void FixedUpdate()
	{
		
		print(target.transform.position);
		
		Vector2 pointToTarget = (Vector2) transform.position - (Vector2) target.transform.position;
		pointToTarget.Normalize();
		float value = Vector3.Cross(pointToTarget, transform.right).z;

		if (value >= 0)
		{
			rb.angularVelocity = rotationSpeed;
		}else if (value < 0)
		{
			rb.angularVelocity = -rotationSpeed;
		}

		rb.angularVelocity = rotationSpeed * value;
		rb.velocity = transform.right * speed;

	}
	
	void OnCollisionEnter2D (Collision2D col)
	{
		if(col.gameObject.tag == "Player")
		{
			SceneManager.LoadScene("Result");
		}
		if(col.gameObject.tag == "Deadly")
		{
			Instantiate(explosion, transform.position, Quaternion.identity);
			Destroy(col.gameObject);
			Destroy(this);
		}
	}
}
