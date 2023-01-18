// Class /Script/FortniteUI.FortSidebarPanelVoiceChat
// Size: 0x418
class UFortSidebarPanelVoiceChat : public UFortSidebarPanelWithTree
{
	class UFortSocialUserTreeView* UserTreeVoiceChat; // 0x3d8 (0x8)
	class UCommonVisibilitySwitcher* VoiceChannelPanelSwitcher; // 0x3e0 (0x8)
	class USocialListEntryEmptyPanelBase* VoiceChatDisabledPanel; // 0x3e8 (0x8)
	class UWidget* VoiceChatEnabledPanel; // 0x3f0 (0x8)
	class UFortVoiceSettingsDisplay* SidebarVoiceChannelSettingsPanel; // 0x3f8 (0x8)
	class UTexture2D* VoiceChatDisabledIcon; // 0x400 (0x8)
	class UMaterialInstance* VoiceChatDisabledMaterial; // 0x408 (0x8)
	class UFortSidebarOnboardTooltipWidget* SidebarVoiceChatPanelSupervisedSettingsTooltip; // 0x410 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSidebarPanelVoiceChat.OpenParentalControls (Has no native function)
	void OpenParentalControls(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortSidebarPanelVoiceChat.HandleNavigateUpFromSettings (Underlying native function: HandleNavigateUpFromSettings 0xa759d34)
	class UWidget* HandleNavigateUpFromSettings(enum EUINavigation& InNavigation); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSidebarPanelVoiceChat.HandleNavigateFromUserTree (Underlying native function: HandleNavigateFromUserTree 0xa759c7c)
	class UWidget* HandleNavigateFromUserTree(enum EUINavigation& InNavigation); // (Final | Native | Private)
};

