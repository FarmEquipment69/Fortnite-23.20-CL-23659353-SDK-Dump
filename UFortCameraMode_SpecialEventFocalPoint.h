// Class /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint
// Size: 0x1b30
class UFortCameraMode_SpecialEventFocalPoint : public UFortCameraMode_FocalPoint
{
	float OverrideTransitionTime; // 0x1b20 (0x4)
	unsigned char padding_1b24[0xc]; // 0x1b24 (0xc)

	/* Functions */

	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.UpdateCameraBP (Has no native function)
	void UpdateCameraBP(class AActor*& ViewTarget, float& DeltaTime, struct FTViewTarget& OutVT); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.SetOverrideTransitionTime (Underlying native function: SetOverrideTransitionTime 0x76c771c)
	void SetOverrideTransitionTime(float& InTransitionTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeInactiveBP (Has no native function)
	void OnBecomeInactiveBP(class AActor*& ViewTarget); // (Event | Protected | BlueprintEvent)

	// Function /Script/SpecialEventGameplayRuntime.FortCameraMode_SpecialEventFocalPoint.OnBecomeActiveBP (Has no native function)
	void OnBecomeActiveBP(class AActor*& ViewTarget); // (Event | Protected | BlueprintEvent)
};

