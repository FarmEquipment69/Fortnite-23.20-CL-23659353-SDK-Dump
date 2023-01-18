// Class /Script/FortniteUI.FortActivityDetailsModal
// Size: 0x4b8
class UFortActivityDetailsModal : public UFortActivityView
{
	bool bIsCreatorPageAccessEnabled; // 0x3f8 (0x1)
	bool bShouldForceCreatorPageFirstTimeTooltip; // 0x3f9 (0x1)
	unsigned char unreflected_3fa[0x6]; // 0x3fa (0x6) 
	class UCommonTextBlock* TextLinkCode; // 0x400 (0x8)
	class UCommonTextBlock* TextLinkCodeVersion; // 0x408 (0x8)
	class UCommonTextBlock* TextVersionSubmode; // 0x410 (0x8)
	class UFortActivityDetailsDisplay* DetailsDisplaySelectedActivity; // 0x418 (0x8)
	class UCommonButtonBase* ButtonMobileClose; // 0x420 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x428 (0x8)
	class UCommonButtonBase* ButtonBackBoard; // 0x430 (0x8)
	class UFortActivityVideoCycle* ActivityVideoCycle; // 0x438 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x440 (0x8)
	class UFortActivityModeSetSelection* ListSubModeList; // 0x448 (0x8)
	class UFortActivitySquadFillButton* ButtonSquadFillButton; // 0x450 (0x8)
	class UFortActivityPrivacyButton* ButtonPrivacyButton; // 0x458 (0x8)
	class UCommonButtonBase* ButtonCreatorPage; // 0x460 (0x8)
	class UCommonActivatableWidget* ActivityDetailsModalCreatorPageTooltip; // 0x468 (0x8)
	unsigned char padding_470[0x48]; // 0x470 (0x48)

	/* Functions */

	// Function /Script/FortniteUI.FortActivityDetailsModal.OnSubModeSelectionChanged (Has no native function)
	void OnSubModeSelectionChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsModal.OnShowSubModeFirstTimeNotification (Has no native function)
	void OnShowSubModeFirstTimeNotification(struct FText& ActivityAndSettingText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsModal.OnSelectedSubModeTextChanged (Has no native function)
	void OnSelectedSubModeTextChanged(struct FText& ActivityText, struct FText& SettingText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsModal.OnPreviewImageChanged (Has no native function)
	void OnPreviewImageChanged(bool& bIsLoading, class UTexture*& Texture); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsModal.OnIsFavoriteChanged (Has no native function)
	void OnIsFavoriteChanged(bool& bIsFavorite); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsModal.IsModeSetActivity (Underlying native function: IsModeSetActivity 0xa692e10)
	bool IsModeSetActivity(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsModal.IsLocalPlayerPartyLeader (Underlying native function: IsLocalPlayerPartyLeader 0xa692d90)
	bool IsLocalPlayerPartyLeader(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsModal.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0xa691a2c)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

