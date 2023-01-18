// Class /Script/FortniteGame.FortControllerComponent_Swinging
// Size: 0xb0
class UFortControllerComponent_Swinging : public UFortControllerComponent
{
	bool bCanSwingJump; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct TWeakObjectPtr<class AActor> AttachedActor; // 0xa4 (0x8)
	unsigned char padding_ac[0x4]; // 0xac (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.SwingDetached (Underlying native function: SwingDetached 0x8289fb0)
	void SwingDetached(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.SwingAttached (Underlying native function: SwingAttached 0x8289d80)
	void SwingAttached(class AActor*& NewAttachedActor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.StartSwingingUnattached (Underlying native function: StartSwingingUnattached 0x8289d24)
	void StartSwingingUnattached(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.LaunchEnterSwinging (Underlying native function: LaunchEnterSwinging 0x8288ae8)
	void LaunchEnterSwinging(struct FVector& InVelocity); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.JumpPressed (Underlying native function: JumpPressed 0x8288a7c)
	void JumpPressed(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.JumpAndImpulse (Underlying native function: JumpAndImpulse 0x828898c)
	void JumpAndImpulse(struct FVector& JumpImpulse); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.IsSwingingGrounded (Underlying native function: IsSwingingGrounded 0x8288940)
	bool IsSwingingGrounded(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.IsSwingAttached (Underlying native function: IsSwingAttached 0x8288904)
	bool IsSwingAttached(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.IsInSwingingMovement (Underlying native function: IsInSwingingMovement 0x82888b0)
	bool IsInSwingingMovement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_Swinging.EndSwingingMovement (Underlying native function: EndSwingingMovement 0x8287e04)
	void EndSwingingMovement(); // (Final | Native | Public | BlueprintCallable)
};

