// Class /Script/FortniteUI.FortPlatformPurchaseErrorCodeModal
// Size: 0x3c8
class UFortPlatformPurchaseErrorCodeModal : public UCommonActivatableWidget
{
	class UCommonButtonBase* ButtonBack; // 0x3a8 (0x8)
	class UCommonButtonBase* ButtonCloseMobile; // 0x3b0 (0x8)
	class UCommonTextBlock* TextTitle; // 0x3b8 (0x8)
	class UDynamicEntryBox* EntryBoxDescriptions; // 0x3c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlatformPurchaseErrorCodeModal.OnModalBackout (Has no native function)
	void OnModalBackout(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlatformPurchaseErrorCodeModal.ExitModal (Underlying native function: ExitModal 0x1d01d9c)
	void ExitModal(); // (Native | Protected | BlueprintCallable)
};

