// Class /Script/FortniteUI.FortLocalUserEntry
// Size: 0x1480
class UFortLocalUserEntry : public UCommonButtonLegacy
{
	class UClass* LocalUserSettingsMenuClass; // 0x1430 (0x8)
	class UFortLocalUserSettingsMenu* LocalUserSettingsMenu; // 0x1438 (0x8)
	unsigned char unreflected_1440[0x18]; // 0x1440 (0x18) 
	class UFortSocialAvatarIcon* SocialAvatarIcon; // 0x1458 (0x8)
	class UImage* ImageCrown; // 0x1460 (0x8)
	class UTextBlock* TextUserName; // 0x1468 (0x8)
	class UTextBlock* TextVoiceChannel; // 0x1470 (0x8)
	class UMenuAnchor* MenuAnchorLocalUserSettingMenu; // 0x1478 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLocalUserEntry.OnOnlineStatusChanged (Has no native function)
	void OnOnlineStatusChanged(enum ELocalUserOnlineStatus& OnlineStatus); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortLocalUserEntry.HandleMenuOpenChanged (Underlying native function: HandleMenuOpenChanged 0xa759bfc)
	void HandleMenuOpenChanged(bool& bIsOpen); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLocalUserEntry.HandleGetMenuContent (Underlying native function: HandleGetMenuContent 0x71819bc)
	class UUserWidget* HandleGetMenuContent(); // (Final | Native | Protected)
};

