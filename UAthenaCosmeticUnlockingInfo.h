// Class /Script/FortniteUI.AthenaCosmeticUnlockingInfo
// Size: 0x2e8
class UAthenaCosmeticUnlockingInfo : public UCommonUserWidget
{
	class UCommonRichTextBlock* RichTextStaticUnlockingText; // 0x290 (0x8)
	class UCommonRichTextBlock* RichTextUnlockingText; // 0x298 (0x8)
	class UProgressBar* ProgressBarStepsCompleted; // 0x2a0 (0x8)
	class UCommonRichTextBlock* RichTextProgressCompletion; // 0x2a8 (0x8)
	struct FString EmphasisStyle; // 0x2b0 (0x10)
	struct FString ProgressCompletionNumericStyle; // 0x2c0 (0x10)
	class UAthenaCosmeticItemDefinition* CosmeticItemDef; // 0x2d0 (0x8)
	unsigned char padding_2d8[0x10]; // 0x2d8 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.ShowUnlockingInfoForCosmeticVariant (Underlying native function: ShowUnlockingInfoForCosmeticVariant 0xa4719f0)
	void ShowUnlockingInfoForCosmeticVariant(class UAthenaCosmeticItemDefinition*& InCosmeticItemDef, struct FGameplayTag& InVariantChannel, struct FGameplayTag& InVariant); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.ShowUnlockingInfoForCosmetic (Underlying native function: ShowUnlockingInfoForCosmetic 0xa471960)
	void ShowUnlockingInfoForCosmetic(class UAthenaCosmeticItemDefinition*& InCosmeticItemDef); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.ShowUnlockingInfo (Underlying native function: ShowUnlockingInfo 0xa471870)
	void ShowUnlockingInfo(class UAthenaCosmeticItemDefinition*& UnlockItem, class UFortItemDefinition*& UnlockSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.ShowSeasonUnlockingInfo (Underlying native function: ShowSeasonUnlockingInfo 0xa471104)
	void ShowSeasonUnlockingInfo(int& SeasonNumber, int& TierNumber); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.RequestUpdateAnim (Has no native function)
	void RequestUpdateAnim(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.RequestOutroAnim (Has no native function)
	void RequestOutroAnim(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.RequestIntroAnim (Has no native function)
	void RequestIntroAnim(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.OutroAnimFinished (Underlying native function: OutroAnimFinished 0xa470784)
	void OutroAnimFinished(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.OnUnlockingInfoSet (Has no native function)
	void OnUnlockingInfoSet(bool& bShowProgression); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaCosmeticUnlockingInfo.HideUnlockingInfo (Underlying native function: HideUnlockingInfo 0xa4706b4)
	void HideUnlockingInfo(); // (Final | Native | Public | BlueprintCallable)
};

