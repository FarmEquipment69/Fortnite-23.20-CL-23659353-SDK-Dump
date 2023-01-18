// Class /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal
// Size: 0x418
class UFortActivityModeSetSelectionModal : public UCommonActivatableWidget
{
	class UCommonTextBlock* TextActivityName; // 0x3a8 (0x8)
	unsigned char unreflected_3b0[0x40]; // 0x3b0 (0x40) 
	class UCommonButtonBase* ButtonBack; // 0x3f0 (0x8)
	class UCommonButtonBase* ButtonBackBoard; // 0x3f8 (0x8)
	class UFortActivityModeSetSelection* ListSubModeList; // 0x400 (0x8)
	class UFortActivitySquadFillButton* ButtonActivitySquadFill; // 0x408 (0x8)
	class UFortActivityPrivacyButton* ButtonActivityPrivacy; // 0x410 (0x8)

	/* Functions */

	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.SaveSelectionAndClose (Underlying native function: SaveSelectionAndClose 0x74215cc)
	void SaveSelectionAndClose(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelectionChanged (Has no native function)
	void OnSubModeSelectionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnSubModeSelected (Has no native function)
	void OnSubModeSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/DiscoveryBrowserUI.FortActivityModeSetSelectionModal.OnActivityChanged (Has no native function)
	void OnActivityChanged(class UFortGameActivity*& GameActivity, struct FString& StartingSelectedMnemonic); // (Event | Protected | BlueprintEvent)
};

