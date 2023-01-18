// Class /Script/FortniteUI.AthenaCollectionItemToast
// Size: 0x350
class UAthenaCollectionItemToast : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x28]; // 0x2d0 (0x28) 
	float OpenCollectionScreenInputHoldTime; // 0x2f8 (0x4)
	unsigned char unreflected_2fc[0x4]; // 0x2fc (0x4) 
	struct TArray<struct FName> BoundActions; // 0x300 (0x10)
	class UCommonTextBlock* TextItemNumber; // 0x310 (0x8)
	class UCommonTextBlock* TextItemName; // 0x318 (0x8)
	class UCommonLazyImage* LazyImageItemImage; // 0x320 (0x8)
	class UButton* ButtonMobileClickCatcher; // 0x328 (0x8)
	unsigned char padding_330[0x20]; // 0x330 (0x20)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCollectionItemToast.ResetToast (Underlying native function: ResetToast 0x70dbbc0)
	void ResetToast(); // (Native | Protected)

	// Function /Script/FortniteUI.AthenaCollectionItemToast.HandleMobileClick (Underlying native function: HandleMobileClick 0xa509e90)
	void HandleMobileClick(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaCollectionItemToast.BPCallableIsDesignTime (Underlying native function: BPCallableIsDesignTime 0x2486284)
	bool BPCallableIsDesignTime(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaCollectionItemToast.BP_OnToastUpdated (Has no native function)
	void BPOnToastUpdated(enum EFortCollectedState& CollectedState, int& NumCollected); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionItemToast.BP_OnToastReset (Has no native function)
	void BPOnToastReset(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCollectionItemToast.BP_OnDisplayToast (Has no native function)
	void BPOnDisplayToast(); // (Event | Protected | BlueprintEvent)
};

