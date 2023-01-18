// Class /Script/FortniteUI.ItemPreviewRotator
// Size: 0x3c0
class AItemPreviewRotator : public AFortItemPreviewSceneChanger
{
	float CameraTransitionLerpDuration; // 0x3b8 (0x4)
	unsigned char padding_3bc[0x4]; // 0x3bc (0x4)

	/* Functions */

	// Function /Script/FortniteUI.ItemPreviewRotator.OnCameraTransitionReady (Has no native function)
	void OnCameraTransitionReady(bool& bPrimaryToSecondary, class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.ItemPreviewRotator.GetInterpolatedTransitionCameraPosition (Underlying native function: GetInterpolatedTransitionCameraPosition 0x2606d24)
	struct FInterpolatedTransitionCamera GetInterpolatedTransitionCameraPosition(struct FTransform& TransitionCameraTransform, float& TransitionCameraFieldOfView, float& ProgressThroughTransitionSecs, float& TransitionDurationSecs); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.ItemPreviewRotator.CameraTransitionComplete (Underlying native function: CameraTransitionComplete 0x1bb233c)
	void CameraTransitionComplete(); // (Final | Native | Protected | BlueprintCallable)
};

