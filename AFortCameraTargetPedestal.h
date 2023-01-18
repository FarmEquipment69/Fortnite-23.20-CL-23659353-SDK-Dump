// Class /Script/FortniteUI.FortCameraTargetPedestal
// Size: 0x4f0
class AFortCameraTargetPedestal : public AActor
{
	struct FGameplayTag CameraTargetTag; // 0x288 (0x4)
	unsigned char unreflected_28c[0x4]; // 0x28c (0x4) 
	class UChildActorComponent* PedestalBaseComponent; // 0x290 (0x8)
	class UFortItem* CurrentPrimaryItem; // 0x298 (0x8)
	class AFortItemPreviewActor* ItemPreviewActor; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x248]; // 0x2a8 (0x248)

	/* Functions */

	// Function /Script/FortniteUI.FortCameraTargetPedestal.OnItemPreviewCleared (Has no native function)
	void OnItemPreviewCleared(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortCameraTargetPedestal.OnItemDisplayed (Has no native function)
	void OnItemDisplayed(enum EFortItemType& ItemType); // (Event | Protected | BlueprintEvent)
};

