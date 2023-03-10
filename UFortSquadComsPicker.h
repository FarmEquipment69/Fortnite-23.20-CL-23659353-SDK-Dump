// Class /Script/FortniteUI.FortSquadComsPicker
// Size: 0x5e8
class UFortSquadComsPicker : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UAthenaQuickChatBank* RequestOptionsBank; // 0x3b0 (0x8)
	struct TArray<struct FSquadComsNPCCommandEntry> NPCCommandOptions; // 0x3b8 (0x10)
	struct TArray<struct FSquadComsQuickChatEntry> QuickChatOptions; // 0x3c8 (0x10)
	class USoundBase* DefaultConfirmSound; // 0x3d8 (0x8)
	struct FText DefaultMultiCompanionText; // 0x3e0 (0x18)
	enum EFortRarity DefaultMultiCompanionRarity; // 0x3f8 (0x1)
	unsigned char unreflected_3f9[0x7]; // 0x3f9 (0x7) 
	struct TWeakObjectPtr<class UTexture2D> DefaultMultiCompanionPreviewImage; // 0x400 (0x28)
	enum PingCommandType PingCommandSelected; // 0x428 (0x1)
	enum EFortWorldMarkerType WorldMarkerSelected; // 0x429 (0x1)
	unsigned char unreflected_42a[0x16]; // 0x42a (0x16) 
	struct TMap<struct FGameplayTag, struct TWeakObjectPtr<class UTexture2D>> CategoryIcons; // 0x440 (0x50)
	struct TArray<struct FFortSquadComsPickerSubCategoryIdentifier> SubCategoryIdentifiers; // 0x490 (0x10)
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class AFortPlayerState* AllyNPCPlayerState; // 0x4a8 (0x8)
	bool bShowSquadComsInSolo; // 0x4b0 (0x1)
	unsigned char unreflected_4b1[0x7]; // 0x4b1 (0x7) 
	struct TArray<enum PingCommandType> BlockedPingCommandTypes; // 0x4b8 (0x10)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x4c8 (0x3)
	unsigned char unreflected_4cb[0x5]; // 0x4cb (0x5) 
	struct TArray<struct FDataTableRowHandle> QuickSelectBindings; // 0x4d0 (0x10)
	struct FDataTableRowHandle PreviousWheelInputAction; // 0x4e0 (0x10)
	struct FDataTableRowHandle NextWheelInputAction; // 0x4f0 (0x10)
	struct FDataTableRowHandle PreviousCategoryInputAction; // 0x500 (0x10)
	struct FDataTableRowHandle NextCategoryInputAction; // 0x510 (0x10)
	class UCommonButtonLegacy* ButtonPreviousWheel; // 0x520 (0x8)
	class UCommonButtonLegacy* ButtonNextWheel; // 0x528 (0x8)
	class UFortTextButton* ButtonCategoryMinusOne; // 0x530 (0x8)
	class UFortTextButton* ButtonCategoryPlusOne; // 0x538 (0x8)
	class UCommonTextBlock* TextItemName; // 0x540 (0x8)
	class UCommonTextBlock* TextWheelLabel; // 0x548 (0x8)
	class UFortKeybindWidget* KeybindConfirm; // 0x550 (0x8)
	class UCommonButtonLegacy* ButtonCancel; // 0x558 (0x8)
	class UWidget* OverlayInGameChatBinding; // 0x560 (0x8)
	class UFortPickerOverlay* PickerOverlaySquadComs; // 0x568 (0x8)
	class UCommonVisibilitySwitcher* VisibilitySwitcherPagination; // 0x570 (0x8)
	class UFortDottedPagination* DottedPaginationCategory; // 0x578 (0x8)
	class UCommonTextBlock* TextPagination; // 0x580 (0x8)
	class UCommonLazyImage* ImageNPCIcon; // 0x588 (0x8)
	class UCommonTextBlock* TextNPCName; // 0x590 (0x8)
	class UWidget* OverlayPagesTutorial; // 0x598 (0x8)
	class UWidget* OverlayDismissWarning; // 0x5a0 (0x8)
	struct FGameplayTag PagesTutorialTag; // 0x5a8 (0x4)
	unsigned char unreflected_5ac[0x4]; // 0x5ac (0x4) 
	class UFortAutoRunNotificationWidget* WidgetAutoRunNotification; // 0x5b0 (0x8)
	struct TArray<enum ECardinalPoint> OrderingRequest; // 0x5b8 (0x10)
	struct TArray<enum ECardinalPoint> OrderingNPCCommands; // 0x5c8 (0x10)
	struct TArray<enum ECardinalPoint> OrderingSquadComs; // 0x5d8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSquadComsPicker.PlaySelectionAnimation (Has no native function)
	void PlaySelectionAnimation(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSquadComsPicker.OnUpdateWarningVisibility (Has no native function)
	void OnUpdateWarningVisibility(bool& bIsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSquadComsPicker.BP_PageChanged (Has no native function)
	void BPPageChanged(int& Direction); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSquadComsPicker.BP_CategoryChanged (Has no native function)
	void BPCategoryChanged(int& Direction); // (Event | Protected | BlueprintEvent)
};

