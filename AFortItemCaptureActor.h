// Class /Script/FortniteGame.FortItemCaptureActor
// Size: 0x298
class AFortItemCaptureActor : public AActor
{
	class UFortItemDefinition* ItemDefinition; // 0x288 (0x8)
	struct TWeakObjectPtr<class UFortItemThumbnailRenderer> Renderer; // 0x290 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortItemCaptureActor.OnSetupCapture (Has no native function)
	void OnSetupCapture(class UFortItemThumbnailRenderer*& InRenderer, class UFortItemDefinition*& InItemDefinition); // (Event | Protected | BlueprintEvent)
};

