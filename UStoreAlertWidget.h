// Class /Script/FortniteUI.StoreAlertWidget
// Size: 0x2a8
class UStoreAlertWidget : public UCommonUserWidget
{
	class UStoreToastRequest* StoreUpdatedRequest; // 0x290 (0x8)
	class UCatalogMessaging* CatalogMessaging; // 0x298 (0x8)
	unsigned char padding_2a0[0x8]; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.StoreAlertWidget.SetupRequest (Underlying native function: SetupRequest 0xa5a45dc)
	void SetupRequest(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.StoreAlertWidget.DisplayStoreUpdated (Has no native function)
	void DisplayStoreUpdated(class UStoreToastRequest*& NewStoreUpdatedRequest); // (Event | Public | BlueprintEvent)
};

