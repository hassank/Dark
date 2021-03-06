﻿using UnityEngine;
using System.Collections;

public class IntroLightSequence : MonoBehaviour {
	public Light light;
	public Light light1;
	public Light light2;
	public Light light3;

	public AudioClip transitionClip;

	private AudioSource transitionSrc;

	void OnEnable() 
	{
		TimeEventManager.GameStarted += LightsOut;	
	}

	void OnDisable()
	{
		TimeEventManager.GameStarted -= LightsOut;	
	}

	void Awake()
	{
		transitionSrc = UtilityScript.AddAudio (gameObject, transitionClip, false, false, 1.0f);
	}

	// Use this for initialization
	void Start () {
	}

	// Update is called once per frame
	void Update () {
		
	}

	void LightsOut()
	{
		GameObject.Find ("GameStates").GetComponent<AudioSource> ().Stop ();
		transitionSrc.Play ();
		StartCoroutine (KillLights ());
	}

	IEnumerator KillLights() 
	{
		light.enabled = false;

		yield return new WaitForSeconds (0.4f);
		light1.enabled = false;
		yield return new WaitForSeconds (0.3f);
		light2.enabled = false;
		light3.enabled = false;

		GameObject.Find ("LampLight").GetComponent<LampFlicker> ().runFlickerSequence ();
	}
}
