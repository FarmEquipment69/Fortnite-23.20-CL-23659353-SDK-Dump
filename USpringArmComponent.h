// Class /Script/Engine.SpringArmComponent
// Size: 0x3a0
class USpringArmComponent : public USceneComponent
{
	float TargetArmLength; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x4]; // 0x2a4 (0x4) 
	struct FVector SocketOffset; // 0x2a8 (0x18)
	struct FVector TargetOffset; // 0x2c0 (0x18)
	float ProbeSize; // 0x2d8 (0x4)
	struct TEnumAsByte<ECollisionChannel> ProbeChannel; // 0x2dc (0x1)
	unsigned char unreflected_2dd[0x3]; // 0x2dd (0x3) 
	unsigned char bDoCollisionTest; // 0x2e0 (0x1)
	unsigned char bUsePawnControlRotation; // 0x2e0 (0x1)
	unsigned char bInheritPitch; // 0x2e0 (0x1)
	unsigned char bInheritYaw; // 0x2e0 (0x1)
	unsigned char bInheritRoll; // 0x2e0 (0x1)
	unsigned char bEnableCameraLag; // 0x2e0 (0x1)
	unsigned char bEnableCameraRotationLag; // 0x2e0 (0x1)
	unsigned char bUseCameraLagSubstepping; // 0x2e0 (0x1)
	unsigned char bDrawDebugLagMarkers; // 0x2e1 (0x1)
	unsigned char unreflected_2e2[0x2]; // 0x2e2 (0x2) 
	float CameraLagSpeed; // 0x2e4 (0x4)
	float CameraRotationLagSpeed; // 0x2e8 (0x4)
	float CameraLagMaxTimeStep; // 0x2ec (0x4)
	float CameraLagMaxDistance; // 0x2f0 (0x4)
	unsigned char bClampToMaxPhysicsDeltaTime; // 0x2f4 (0x1)
	unsigned char padding_2f5[0xab]; // 0x2f5 (0xab)

	/* Functions */

	// Function /Script/Engine.SpringArmComponent.IsCollisionFixApplied (Underlying native function: IsCollisionFixApplied 0x9d7b048)
	bool IsCollisionFixApplied(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SpringArmComponent.GetUnfixedCameraPosition (Underlying native function: GetUnfixedCameraPosition 0x9d7aec0)
	struct FVector GetUnfixedCameraPosition(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SpringArmComponent.GetTargetRotation (Underlying native function: GetTargetRotation 0x9d7ae30)
	struct FRotator GetTargetRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

