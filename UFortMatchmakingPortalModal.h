// Class /Script/MatchmakingPortalUI.FortMatchmakingPortalModal
// Size: 0x7b0
class UFortMatchmakingPortalModal : public UFortActivityView
{
	struct FTimerHandle* MatchmakingStartTimerHandle; // 0x3f8 (0x8)
	unsigned char unreflected_400[0x340]; // 0x400 (0x340) 
	struct TArray<struct FString> XpTagMnemonicWhitelist; // 0x740 (0x10)
	class UCommonRichTextBlock* TextActivityOrigin; // 0x750 (0x8)
	class UCommonRichTextBlock* TextLinkCode; // 0x758 (0x8)
	class UCommonTextBlock* TextActivityName; // 0x760 (0x8)
	class UCommonTextBlock* TextActivityDescription; // 0x768 (0x8)
	class UScrollBox* ScrollBoxActivityDescription; // 0x770 (0x8)
	class UDynamicEntryBox* EntryBoxActivityTags; // 0x778 (0x8)
	class UFortSimpleMaterialProgressBar* ProgressBarContentDownload; // 0x780 (0x8)
	class UCommonButtonBase* ButtonAcceptPublic; // 0x788 (0x8)
	class UCommonButtonBase* ButtonAcceptPrivate; // 0x790 (0x8)
	class UCommonButtonBase* ButtonFavorite; // 0x798 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x7a0 (0x8)
	class UFortModalBackground* ModalBackground; // 0x7a8 (0x8)

	/* Functions */

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingTimer (Has no native function)
	void SetMatchmakingTimer(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SetMatchmakingStateText (Has no native function)
	void SetMatchmakingStateText(struct FText& MatchmakingStateText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.SendLinkCodeToParty (Underlying native function: SendLinkCodeToParty 0x74912a4)
	void SendLinkCodeToParty(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStopped (Has no native function)
	void OnMatchmakingStopped(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnMatchmakingStarted (Has no native function)
	void OnMatchmakingStarted(struct FText& MatchmakingState); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.OnAdditionalContentUpdate (Has no native function)
	void OnAdditionalContentUpdate(struct FText& MatchmakingState, float& Progress, bool& bShowProgressBar); // (Event | Protected | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.IsDownloadRequired (Underlying native function: IsDownloadRequired 0x749126c)
	bool IsDownloadRequired(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.HandleOnMatchmakingError (Has no native function)
	void HandleOnMatchmakingError(); // (Event | Protected | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetInvalidActivityReason (Underlying native function: GetInvalidActivityReason 0x7490f34)
	enum EFortInvalidActivityReason GetInvalidActivityReason(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetCreatorTextFormat (Has no native function)
	struct FText GetCreatorTextFormat(struct FText& CreatorName); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetContentWarningStrings (Underlying native function: GetContentWarningStrings 0x7490eb0)
	struct TArray<struct FString> GetContentWarningStrings(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MatchmakingPortalUI.FortMatchmakingPortalModal.GetCodeTextFormat (Has no native function)
	struct FText GetCodeTextFormat(struct FText& IslandCode); // (Event | Protected | HasOutParms | BlueprintEvent)
};

