// Class /Script/FortniteUI.ItemPreviewScene
// Size: 0x358
class AItemPreviewScene : public AActor
{
	class UChildActorComponent* FocusCameraTargetComponent; // 0x288 (0x8)
	class AFortCameraTargetPedestal* FocusCameraTargetPedestal; // 0x290 (0x8)
	struct TArray<class AFortCameraTargetPedestal*> BackgroundCameraTargetPedestals; // 0x298 (0x10)
	unsigned char unreflected_2a8[0x20]; // 0x2a8 (0x20) 
	struct FFortItemViewSettings ItemViewSettings; // 0x2c8 (0x50)
	struct TArray<struct TWeakObjectPtr<class AFortCameraTargetPedestal>> PedestalsLoading; // 0x318 (0x10)
	unsigned char padding_328[0x30]; // 0x328 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.ItemPreviewScene.HandleItemShown (Underlying native function: HandleItemShown 0xa73cba8)
	void HandleItemShown(class UFortAccountItemDefinition*& ItemViewed, class AFortCameraTargetPedestal*& Pedestal); // (Final | Native | Private)
};

