using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Movement : MonoBehaviour
{
	public float walkSpeed = 0.15f;                 // Default walk speed.
	public float runSpeed = 1.0f;                   // Default run speed.
	public float sprintSpeed = 2.0f;                // Default sprint speed.
	public float speedDampTime = 0.1f;              // Default damp time to change the animations based on current speed.
	public string jumpButton = "Jump";              // Default jump button.
	public float jumpHeight = 1.5f;                 // Default jump height.
	public float jumpIntertialForce = 10f;          // Default horizontal inertial force when jumping.

	private float speed, speedSeeker;               // Moving speed.
	private int jumpBool;                           // Animator variable related to jumping.
	private int groundedBool;                       // Animator variable related to whether or not the player is on ground.
	private bool jump;                              // Boolean to determine whether or not the player started a jump.
	private bool isColliding;                       // Boolean to determine if the player has collided with an obstacle.

	// Start is called before the first frame update
	void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

	void Move(float horizontal, float vertical)
	{
		//// On ground, obey gravity.
		//if (behaviourManager.IsGrounded())
		//	behaviourManager.GetRigidBody.useGravity = true;

		//// Avoid takeoff when reached a slope end.
		//else if (!behaviourManager.GetAnim.GetBool(jumpBool) && behaviourManager.GetRigidBody.velocity.y > 0)
		//{
		//	RemoveVerticalVelocity();
		//}

		//// Call function that deals with player orientation.
		//Rotating(horizontal, vertical);

		//// Set proper speed.
		//Vector2 dir = new Vector2(horizontal, vertical);
		//speed = Vector2.ClampMagnitude(dir, 1f).magnitude;
		//// This is for PC only, gamepads control speed via analog stick.
		//speedSeeker += Input.GetAxis("Mouse ScrollWheel");
		//speedSeeker = Mathf.Clamp(speedSeeker, walkSpeed, runSpeed);
		//speed *= speedSeeker;
		//if (behaviourManager.IsSprinting())
		//{
		//	speed = sprintSpeed;
		//}

		//behaviourManager.GetAnim.SetFloat(speedFloat, speed, speedDampTime, Time.deltaTime);
	}
}
