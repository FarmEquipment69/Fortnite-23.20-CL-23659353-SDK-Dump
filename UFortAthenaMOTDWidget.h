// Class /Script/FortniteUI.FortAthenaMOTDWidget
// Size: 0x520
class UFortAthenaMOTDWidget : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonButtonGroupLegacy* MOTDButtonGroup; // 0x3b0 (0x8)
	class UClass* MOTDTileClass; // 0x3b8 (0x8)
	class UClass* NewVideoPlayerClass; // 0x3c0 (0x8)
	enum EFrontEndCamera ActivationFrontendCamera; // 0x3c8 (0x1)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x3c9 (0x3)
	struct FGameplayTag BattlepassScreenTag; // 0x3cc (0x4)
	struct FDataTableRowHandle NavigateLeftInputAction; // 0x3d0 (0x10)
	unsigned char unreflected_3e0[0x8]; // 0x3e0 (0x8) 
	struct FDataTableRowHandle NavigateRightInputAction; // 0x3e8 (0x10)
	unsigned char unreflected_3f8[0x68]; // 0x3f8 (0x68) 
	struct TArray<class UFortStoreFrontOfferInfo*> OfferInfoOwnershipArray; // 0x460 (0x10)
	unsigned char unreflected_470[0x10]; // 0x470 (0x10) 
	class UCommonButtonBase* ButtonSpecialAction; // 0x480 (0x8)
	class UCommonButtonBase* ButtonSecondarySpecialAction; // 0x488 (0x8)
	class UCommonButtonBase* ButtonNormalAction; // 0x490 (0x8)
	class UCommonButtonBase* ButtonSecondaryNormalAction; // 0x498 (0x8)
	class UTextBlock* TextMatchmakingNotice; // 0x4a0 (0x8)
	class UEpicCMSImage* CMSImageSelectedNewsImage; // 0x4a8 (0x8)
	class UEpicCMSImage* CMSImageSelectedNewsImageBlurred; // 0x4b0 (0x8)
	class URichTextBlock* RichTextBlockSelectedNewsTitle; // 0x4b8 (0x8)
	class URichTextBlock* RichTextBlockSelectedNewsBody; // 0x4c0 (0x8)
	class UCommonButtonBase* ButtonClose; // 0x4c8 (0x8)
	class UFortDynamicEntryBox* EntryBoxMOTDEntries; // 0x4d0 (0x8)
	class UFortGameActivityProvider* ActivityProvider; // 0x4d8 (0x8)
	unsigned char padding_4e0[0x40]; // 0x4e0 (0x40)

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.StartSTWUpsell (Has no native function)
	void StartSTWUpsell(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SetSpecialButtonText (Has no native function)
	void SetSpecialButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SetSecondarySpecialButtonText (Has no native function)
	void SetSecondarySpecialButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SetSecondaryNormalButtonText (Has no native function)
	void SetSecondaryNormalButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SetNormalButtonText (Has no native function)
	void SetNormalButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SetDefaultImage (Has no native function)
	void SetDefaultImage(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.SelectNewsByIndex (Underlying native function: SelectNewsByIndex 0xa873750)
	void SelectNewsByIndex(int& Index); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.ResetViewConfiguration (Has no native function)
	void ResetViewConfiguration(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.PlayIntroAnimation (Has no native function)
	void PlayIntroAnimation(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.PlayFirstAutoPlayVideo (Underlying native function: PlayFirstAutoPlayVideo 0xa873490)
	bool PlayFirstAutoPlayVideo(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.OnSelectedNews (Has no native function)
	void OnSelectedNews(struct FAthenaMOTDBase& NewsEntry); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.OnPlayIntroAnim (Has no native function)
	void OnPlayIntroAnim(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.OnNewsPopulated (Has no native function)
	void OnNewsPopulated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.OnIsActivityLoadingChanged (Has no native function)
	void OnIsActivityLoadingChanged(bool& bIsLoading); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.NavigateToRightNews (Underlying native function: NavigateToRightNews 0xa8733fc)
	void NavigateToRightNews(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.NavigateToLeftNews (Underlying native function: NavigateToLeftNews 0xa8733e8)
	void NavigateToLeftNews(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.HandleSelectedButtonChanged (Underlying native function: HandleSelectedButtonChanged 0x2610c60)
	void HandleSelectedButtonChanged(class UCommonButtonLegacy*& SelectedButton, int& ButtonIndex); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.HandleImageLoaded (Underlying native function: HandleImageLoaded 0x2dcc4e0)
	void HandleImageLoaded(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.GetNewsCount (Underlying native function: GetNewsCount 0xa872e94)
	int GetNewsCount(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.GetNewsByIndex (Underlying native function: GetNewsByIndex 0xa872da8)
	struct FAthenaMOTDBase GetNewsByIndex(int& Index); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.BP_GetSelectedNews (Underlying native function: BP_GetSelectedNews 0xa872b84)
	struct FAthenaMOTDBase BPGetSelectedNews(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaMOTDWidget.AutoPlayedVideo (Underlying native function: AutoPlayedVideo 0x8a46bf4)
	bool AutoPlayedVideo(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)
};

