// Class /Script/FortniteUI.AthenaGiftReceivedPrompt
// Size: 0x428
class UAthenaGiftReceivedPrompt : public UCommonActivatableWidget
{
	class UClass* ItemPresentationScreenClass; // 0x3a8 (0x8)
	struct TWeakObjectPtr<class UMaterialInterface> GiftMaterial; // 0x3b0 (0x28)
	class UFortGiftBoxItem* GiftBoxItem; // 0x3d8 (0x8)
	class UFortItemReceivedHeaderBase* WidgetHeaderInfo; // 0x3e0 (0x8)
	class UCommonButtonLegacy* ButtonOpen; // 0x3e8 (0x8)
	class UCommonLazyImage* ImageGiftBox; // 0x3f0 (0x8)
	unsigned char padding_3f8[0x30]; // 0x3f8 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaGiftReceivedPrompt.OnGiftInfoPopulated (Has no native function)
	void OnGiftInfoPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGiftReceivedPrompt.OnCloseButtonClicked (Has no native function)
	void OnCloseButtonClicked(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaGiftReceivedPrompt.HandleMessageTextFiltered (Underlying native function: HandleMessageTextFiltered 0xa7e6f58)
	void HandleMessageTextFiltered(bool& bSuccess, struct FString& SanitizedMessage); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaGiftReceivedPrompt.DismissPrompt (Underlying native function: DismissPrompt 0xa7e4dd0)
	void DismissPrompt(); // (Final | Native | Protected | BlueprintCallable)
};

