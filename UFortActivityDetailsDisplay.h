// Class /Script/FortniteUI.FortActivityDetailsDisplay
// Size: 0x368
class UFortActivityDetailsDisplay : public UCommonUserWidget
{
	unsigned char unreflected_290[0x68]; // 0x290 (0x68) 
	struct TArray<struct FString> XpTagMnemonicWhitelist; // 0x2f8 (0x10)
	float IntroDelay; // 0x308 (0x4)
	float DetailsScrollStartDelay; // 0x30c (0x4)
	float DetailsScrollSpeed; // 0x310 (0x4)
	float DetailsScrollEndDelay; // 0x314 (0x4)
	class UCommonRichTextBlock* TextActivityOrigin; // 0x318 (0x8)
	class UCommonTextBlock* TextActivityName; // 0x320 (0x8)
	class UCommonTextBlock* TextActivityDescription; // 0x328 (0x8)
	class UScrollBox* ScrollBoxActivityDescription; // 0x330 (0x8)
	class UDynamicEntryBox* EntryBoxActivityTags; // 0x338 (0x8)
	class UWidgetAnimation* DetailsIntro; // 0x340 (0x8)
	class UWidgetAnimation* DetailsOutro; // 0x348 (0x8)
	class UCommonButtonBase* ButtonAccept; // 0x350 (0x8)
	class UCommonButtonBase* ButtonDetails; // 0x358 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x360 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.UpdateLinkCode (Has no native function)
	void UpdateLinkCode(struct FText& LinkCode, bool& bIsCreativeActivity); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.ToggleFavorite (Underlying native function: ToggleFavorite 0xa693c58)
	void ToggleFavorite(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.ResetWidgetState (Has no native function)
	void ResetWidgetState(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnPartySizeChanged (Has no native function)
	void OnPartySizeChanged(int& PartySize); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnParentActivated (Has no native function)
	void OnParentActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnOutroAnimationFinished (Underlying native function: OnOutroAnimationFinished 0xa692ffc)
	void OnOutroAnimationFinished(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnLocalPlayerPromotedToLeader (Has no native function)
	void OnLocalPlayerPromotedToLeader(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnLocalPlayerDemoted (Has no native function)
	void OnLocalPlayerDemoted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnIsFavoriteChanged (Has no native function)
	void OnIsFavoriteChanged(bool& bIsFavorite, bool& bPlayAnimation); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnDetailsUpdated (Has no native function)
	void OnDetailsUpdated(bool& bIsDetailsValid, bool& bIsFavoritable); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.OnDescriptionScrollRestarted (Has no native function)
	void OnDescriptionScrollRestarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.IsDownloadRequired (Underlying native function: IsDownloadRequired 0xa692d6c)
	bool IsDownloadRequired(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.IsDisplayingCategory (Underlying native function: IsDisplayingCategory 0xa692d54)
	bool IsDisplayingCategory(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.IsActivityEpicOriginal (Underlying native function: IsActivityEpicOriginal 0xa692d30)
	bool IsActivityEpicOriginal(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0xa691a08)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.GetCreatorTextFormat (Underlying native function: GetCreatorTextFormat 0xa6917a4)
	struct FText GetCreatorTextFormat(struct FText& CreatorName); // (Native | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.GetContentWarningStrings (Underlying native function: GetContentWarningStrings 0xa6916f4)
	struct TArray<struct FString> GetContentWarningStrings(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortActivityDetailsDisplay.AcceptActivity (Underlying native function: AcceptActivity 0xa4e28dc)
	void AcceptActivity(); // (Final | Native | Protected | BlueprintCallable)
};

