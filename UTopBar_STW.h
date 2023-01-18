// Class /Script/SaveTheWorldUI.TopBar_STW
// Size: 0x440
class UTopBar_STW : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	class UDataTable* PhoenixSeasonDisplayInfoMap; // 0x3b8 (0x8)
	struct TMap<enum EFortUIFeatureStateReason, struct FText> ReasonDescriptions; // 0x3c0 (0x50)
	class UCommonButtonLegacy* ButtonMainMenu; // 0x410 (0x8)
	class UMainMenu_STW* MainMenu; // 0x418 (0x8)
	class UImage* ImageActiveInvitesNotification; // 0x420 (0x8)
	class UCommonButtonLegacy* ButtonSocial; // 0x428 (0x8)
	unsigned char padding_430[0x10]; // 0x430 (0x10)

	/* Functions */

	// Function /Script/SaveTheWorldUI.TopBar_STW.SetOnlineFriendsCount (Has no native function)
	void SetOnlineFriendsCount(int& NewOnlineFriendsCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.TopBar_STW.OnSocialMenuOpened (Has no native function)
	void OnSocialMenuOpened(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.TopBar_STW.OnShouldShowPhoenixDisplay (Has no native function)
	void OnShouldShowPhoenixDisplay(bool& bShow, class UFortPhoenixSeasonDisplayInfo*& PhoenixDisplayInfo); // (Event | Protected | BlueprintEvent)
};

