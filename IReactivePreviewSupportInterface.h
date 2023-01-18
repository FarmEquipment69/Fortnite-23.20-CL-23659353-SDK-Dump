// Class /Script/FortniteGame.ReactivePreviewSupportInterface
// Size: 0x28
class IReactivePreviewSupportInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.ReactivePreviewSupportInterface.StopPreviewReactiveResponse (Has no native function)
	void StopPreviewReactiveResponse(struct FCosmeticVariantInfo*& ChannelAndVariant, class AFortCosmeticReactivePreview*& Preview); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.ReactivePreviewSupportInterface.StartPreviewReactiveResponse (Has no native function)
	void StartPreviewReactiveResponse(struct FCosmeticVariantInfo*& ChannelAndVariant, class AFortCosmeticReactivePreview*& Preview); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.ReactivePreviewSupportInterface.PreviewReactiveSteppedUpdate (Has no native function)
	void PreviewReactiveSteppedUpdate(int& CurrentValue, struct FCosmeticVariantInfo*& ChannelAndVariant, class AFortCosmeticReactivePreview*& Preview); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.ReactivePreviewSupportInterface.PreviewReactiveSmoothUpdate (Has no native function)
	void PreviewReactiveSmoothUpdate(float& CurrentValue, struct FCosmeticVariantInfo*& ChannelAndVariant, class AFortCosmeticReactivePreview*& Preview); // (Event | Public | HasOutParms | BlueprintEvent)
};

