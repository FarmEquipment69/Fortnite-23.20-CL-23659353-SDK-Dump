// Class /Script/FortniteUI.FortLocalUserSettingsMenu
// Size: 0x3e0
class UFortLocalUserSettingsMenu : public UCommonActivatableWidget
{
	struct FColor SettingTextColor; // 0x3a8 (0x4)
	unsigned char unreflected_3ac[0x4]; // 0x3ac (0x4) 
	class UMenuAnchor* OwningMenuAnchor; // 0x3b0 (0x8)
	class UFortLocalUserSettingsSection* SectionOnlineStatus; // 0x3b8 (0x8)
	class UFortLocalUserSettingsSection* SectionPrivacy; // 0x3c0 (0x8)
	class UFortLocalUserSettingsSection* SectionParticipation; // 0x3c8 (0x8)
	class UFortLocalUserSettingsSection* SectionVoiceChannel; // 0x3d0 (0x8)
	unsigned char padding_3d8[0x8]; // 0x3d8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLocalUserSettingsMenu.OnFocused (Has no native function)
	void OnFocused(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortLocalUserSettingsMenu.HandleMenuAnchorOpenChanged (Underlying native function: HandleMenuAnchorOpenChanged 0xa759b80)
	void HandleMenuAnchorOpenChanged(bool& bIsOpen); // (Final | Native | Private)
};

