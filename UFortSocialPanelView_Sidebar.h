// Class /Script/FortniteUI.FortSocialPanelView_Sidebar
// Size: 0x5d8
class UFortSocialPanelView_Sidebar : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0xd8]; // 0x3a8 (0xd8) 
	class UFortSidebarButtons* PanelSidebarButtons; // 0x480 (0x8)
	class UCommonVisibilitySwitcher* SwitcherUserLists; // 0x488 (0x8)
	unsigned char unreflected_490[0x28]; // 0x490 (0x28) 
	class UCommonActivatableWidget* PanelPartyUp; // 0x4b8 (0x8)
	class UFortSidebarPanelFindFriends* PanelFindFriends; // 0x4c0 (0x8)
	class UCommonActivatableWidget* PanelVoiceChat; // 0x4c8 (0x8)
	class UCommonActivatableWidget* PanelSettings; // 0x4d0 (0x8)
	class UCommonActivatableWidget* PanelYourProfile; // 0x4d8 (0x8)
	class UCommonActivatableWidget* PanelTags; // 0x4e0 (0x8)
	class UCommonActivatableWidget* PanelRebootRally; // 0x4e8 (0x8)
	class UCommonActivatableWidget* PanelExit; // 0x4f0 (0x8)
	class UFortSidebarExitPopup* PopupExit; // 0x4f8 (0x8)
	class UCommonActivatableWidget* PanelEditProfile; // 0x500 (0x8)
	struct TArray<class UCommonActivatableWidget*> ExtensionPanels; // 0x508 (0x10)
	class UFortSidebarOnboardTooltipWidget* SidebarOnboardingTagsEditTooltip; // 0x518 (0x8)
	class UFortSidebarOnboardTooltipWidget* SidebarOnboardingLookingForParty; // 0x520 (0x8)
	class UFortSidebarOnboardTooltipWidget* SidebarOnboardingLikeIsland; // 0x528 (0x8)
	class UFortSidebarOnboardTooltipWidget* SiderbarSupervisedSettingsTooltip; // 0x530 (0x8)
	class UWidget* OnboardingTooltipInputBlocker; // 0x538 (0x8)
	unsigned char unreflected_540[0x8]; // 0x540 (0x8) 
	class USocialActionMenu* ActiveActionMenu; // 0x548 (0x8)
	struct TMap<class UClass*, class USocialActionMenu*> MapCachedActionMenuPool; // 0x550 (0x50)
	unsigned char unreflected_5a0[0x8]; // 0x5a0 (0x8) 
	class UClass* CollectionScreenEditTagsClass; // 0x5a8 (0x8)
	unsigned char unreflected_5b0[0x8]; // 0x5b0 (0x8) 
	class UClass* RebootRallyQRModalClass; // 0x5b8 (0x8)
	unsigned char padding_5c0[0x18]; // 0x5c0 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FortSocialPanelView_Sidebar.TryNavigateToNewPanel (Underlying native function: TryNavigateToNewPanel 0xa775c80)
	class UWidget* TryNavigateToNewPanel(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortSocialPanelView_Sidebar.HandleSidebarUserListPanelNavigateLeft (Underlying native function: HandleSidebarUserListPanelNavigateLeft 0xa775ab4)
	class UWidget* HandleSidebarUserListPanelNavigateLeft(enum EUINavigation& InNavigation); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortSocialPanelView_Sidebar.HandleSidebarTabButtonNavigateRight (Underlying native function: HandleSidebarTabButtonNavigateRight 0xa775a24)
	class UWidget* HandleSidebarTabButtonNavigateRight(enum EUINavigation& InNavigation); // (Final | Native | Private)
};

