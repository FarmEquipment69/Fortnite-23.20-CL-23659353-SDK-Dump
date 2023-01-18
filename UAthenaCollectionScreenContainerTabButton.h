// Class /Script/FortniteUI.AthenaCollectionScreenContainerTabButton
// Size: 0x1480
class UAthenaCollectionScreenContainerTabButton : public UCommonButtonLegacy
{
	class UCommonLazyImage* LazyImageIcon; // 0x1430 (0x8)
	struct FString CollectionType; // 0x1438 (0x10)
	struct FVector2D ImageSizeMobile; // 0x1448 (0x10)
	struct FText TabTitle; // 0x1458 (0x18)
	struct FGameplayTag CategoryTag; // 0x1470 (0x4)
	unsigned char padding_1474[0xc]; // 0x1474 (0xc)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionScreenContainerTabButton.SetIcon (Underlying native function: SetIcon 0xa470be0)
	void SetIcon(struct TWeakObjectPtr<class UObject>& LazyObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCollectionScreenContainerTabButton.BP_ShowBang (Has no native function)
	void BPShowBang(bool& bShow); // (Event | Public | BlueprintEvent)
};

