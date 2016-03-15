﻿using UnityEngine;
using System.Collections;

public class KillSequenceScript : MonoBehaviour {

	public GameObject objectInfo;
	public AudioClip killSound;
	public Light spotlight;
	private AudioSource audio;

	// Use this for initialization
	void Start () {
		audio = GetComponent<AudioSource>();
		if (!audio) {
			audio = gameObject.AddComponent<AudioSource> ();
		}
		audio.clip = killSound;
		spotlight.enabled = false;
		Animator animator = gameObject.GetComponent<Animator> ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}

	// Invoke kill sequence for given haunted object
	public void Kill() {
		Animator animator = gameObject.GetComponent<Animator> ();
		gameObject.transform.position = objectInfo.transform.position;
		gameObject.transform.rotation = objectInfo.transform.rotation;
		if (killSound) {
			audio.Play ();
		}
		spotlight.enabled = true;
	}
}