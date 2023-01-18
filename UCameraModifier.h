// Class /Script/Engine.CameraModifier
// Size: 0x48
class UCameraModifier : public UObject
{
	unsigned char bDebug; // 0x28 (0x1)
	unsigned char bExclusive; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	unsigned char Priority; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	class APlayerCameraManager* CameraOwner; // 0x30 (0x8)
	float AlphaInTime; // 0x38 (0x4)
	float AlphaOutTime; // 0x3c (0x4)
	float Alpha; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)

	/* Functions */

	// Function /Script/Engine.CameraModifier.OnCameraOwnerDestroyed (Underlying native function: OnCameraOwnerDestroyed 0x27424e4)
	void OnCameraOwnerDestroyed(class AActor*& InOwner); // (Final | Native | Protected)

	// Function /Script/Engine.CameraModifier.IsDisabled (Underlying native function: IsDisabled 0x8a64d0c)
	bool IsDisabled(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CameraModifier.GetViewTarget (Underlying native function: GetViewTarget 0x2da7550)
	class AActor* GetViewTarget(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.CameraModifier.EnableModifier (Underlying native function: EnableModifier 0x6b14184)
	void EnableModifier(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraModifier.DisableModifier (Underlying native function: DisableModifier 0x9c9b7f0)
	void DisableModifier(bool& bImmediate); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.CameraModifier.BlueprintModifyPostProcess (Has no native function)
	void BlueprintModifyPostProcess(float& DeltaTime, float& PostProcessBlendWeight, struct FPostProcessSettings& PostProcessSettings); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/Engine.CameraModifier.BlueprintModifyCamera (Has no native function)
	void BlueprintModifyCamera(float& DeltaTime, struct FVector& ViewLocation, struct FRotator& ViewRotation, float& FOV, struct FVector& NewViewLocation, struct FRotator& NewViewRotation, float& NewFOV); // (BlueprintCosmetic | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)
};

