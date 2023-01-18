// Class /Script/FortniteUI.FortPrivacyBase
// Size: 0x588
class UFortPrivacyBase : public UFortActivatablePanel
{
	class UCommonButtonLegacy* AllowFriendsOfFriendsButton; // 0x518 (0x8)
	class UPanelWidget* AllowFriendsOfFriendsContainer; // 0x520 (0x8)
	class UCommonButtonGroupLegacy* ButtonGroup; // 0x528 (0x8)
	struct TMap<class UCommonButtonLegacy*, enum EPartyType> PrivacyButtonMap; // 0x530 (0x50)
	unsigned char padding_580[0x8]; // 0x580 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPrivacyBase.HandlePrivacyButtonSelected (Underlying native function: HandlePrivacyButtonSelected 0xa87314c)
	void HandlePrivacyButtonSelected(class UCommonButtonLegacy*& SelectedPrivacyButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortPrivacyBase.ApplyPrivacySetting (Underlying native function: ApplyPrivacySetting 0xa872b2c)
	void ApplyPrivacySetting(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortPrivacyBase.AddPrivacyButton (Underlying native function: AddPrivacyButton 0xa8729c4)
	void AddPrivacyButton(class UCommonButtonLegacy*& PrivacyButton, enum EPartyType& PartyType); // (Final | Native | Public | BlueprintCallable)
};

