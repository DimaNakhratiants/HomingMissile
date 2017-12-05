using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class VirtualJoystick : MonoBehaviour, IDragHandler, IPointerUpHandler, IPointerDownHandler{


	private Image joystickBackground;
	private Image joystick;
	private Vector2 inputVector;

	// Use this for initialization
	void Start () {
		this.joystickBackground = GetComponent<Image>();
		this.joystick = transform.GetChild (0).GetComponent<Image>();
	}

	// Update is called once per frame
	void Update () {
	}

	public virtual void OnPointerDown (PointerEventData eventData){
		OnDrag (eventData);
	}

	public virtual void OnPointerUp (PointerEventData eventData){


		inputVector = Vector2.zero;
		joystick.rectTransform.anchoredPosition = Vector2.zero ;
	}

	public virtual void OnDrag (PointerEventData eventData){

		Vector2 position;
		if (RectTransformUtility.ScreenPointToLocalPointInRectangle(joystickBackground.rectTransform,
			eventData.position,
			eventData.pressEventCamera,
			out position)){
			position.x = (position.x / joystickBackground.rectTransform.sizeDelta.y)*2;
			position.y = (position.y / joystickBackground.rectTransform.sizeDelta.y)*2;


			inputVector = position;

			if (inputVector.magnitude > 1.0f){
				inputVector.Normalize();
			}

			joystick.rectTransform.anchoredPosition = new Vector2 (inputVector.x * joystickBackground.rectTransform.sizeDelta.x/2.5f,
				inputVector.y * joystickBackground.rectTransform.sizeDelta.y/2.5f);
		}
	}

	public float Horizontal(){
		return inputVector.x;
	}
		
	public float Vertical(){
		return inputVector.y;
	}

}
