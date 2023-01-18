// Class /Script/FortniteUI.ItemPreviewSwapper
// Size: 0x3c8
class AItemPreviewSwapper : public AFortItemPreviewSceneChanger
{
	class UCurveFloat* CameraTransitionCurve; // 0x3b8 (0x8)
	float CameraTransitionLerpDuration; // 0x3c0 (0x4)
	unsigned char padding_3c4[0x4]; // 0x3c4 (0x4)

	/* Functions */

	// Function /Script/FortniteUI.ItemPreviewSwapper.UpdatePreviousSceneTransform (Underlying native function: UpdatePreviousSceneTransform 0xa73e154)
	void UpdatePreviousSceneTransform(struct FTransform& RelativeTransform); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.ItemPreviewSwapper.UpdateNewSceneTransform (Underlying native function: UpdateNewSceneTransform 0xa73e028)
	void UpdateNewSceneTransform(struct FTransform& RelativeTransform); // (Final | Native | Protected | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteUI.ItemPreviewSwapper.SwapComplete (Underlying native function: SwapComplete 0xa73df6c)
	void SwapComplete(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.ItemPreviewSwapper.OnReadyToSwap (Has no native function)
	void OnReadyToSwap(class UFortAccountItemDefinition*& PrimaryRequestedItem, struct FSceneTransitionOptions& Options); // (Event | Protected | HasOutParms | BlueprintEvent)
};

