// Class /Script/FortniteUI.AthenaSpatialCustomizationSelection
// Size: 0x4b8
class UAthenaSpatialCustomizationSelection : public UAthenaSpatialCustomizationSubscreenBase
{
	class UWidgetAnimation* IntroChoice; // 0x3c8 (0x8)
	class UCommonTextBlock* TextCategoryTitle; // 0x3d0 (0x8)
	class UCommonTextBlock* TextCategoryDescription; // 0x3d8 (0x8)
	class UCommonTextBlock* TextSelectedChoiceName; // 0x3e0 (0x8)
	class UCommonRichTextBlock* RichTextLockedReason; // 0x3e8 (0x8)
	class UAthenaQuestProgression* QuestProgressChallengeProgression; // 0x3f0 (0x8)
	class UCommonButtonLegacy* ButtonPurchaseBattlepass; // 0x3f8 (0x8)
	class UFortColorPicker* ColorPicker; // 0x400 (0x8)
	class UCommonButtonLegacy* ButtonFinalizeChoice; // 0x408 (0x8)
	class UCommonButtonLegacy* ButtonPreviousCategory; // 0x410 (0x8)
	class UCommonButtonLegacy* ButtonNextCategory; // 0x418 (0x8)
	class UCommonButtonLegacy* ButtonPreviousChoice; // 0x420 (0x8)
	class UCommonButtonLegacy* ButtonNextChoice; // 0x428 (0x8)
	class UAthenaSpatialCustomizationChoice* ChoiceSelectedChoice; // 0x430 (0x8)
	class UAthenaSpatialCustomizationChoice* ChoiceCustomizationChoicePrevious; // 0x438 (0x8)
	class UAthenaSpatialCustomizationChoice* ChoiceCustomizationChoiceNext; // 0x440 (0x8)
	class UAthenaSpatialCustomizationChoice* ChoiceUnlockUsed; // 0x448 (0x8)
	struct TArray<class UAthenaSpatialCustomizationCategoryEntry*> Categories; // 0x450 (0x10)
	class UFortGameStateComponent_EventLevel* EventGameStateComponent; // 0x460 (0x8)
	unsigned char padding_468[0x50]; // 0x468 (0x50)

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpatialCustomizationSelection.OnUpdateFinalizedText (Has no native function)
	void OnUpdateFinalizedText(struct FText& InFinalizedChoiceText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationSelection.OnFinalizeChoiceStarted (Has no native function)
	void OnFinalizeChoiceStarted(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationSelection.OnFinalizeChoiceFinished (Has no native function)
	void OnFinalizeChoiceFinished(bool& bSucceeded); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationSelection.OnChoiceCountUpdated (Has no native function)
	void OnChoiceCountUpdated(int& ChoiceNum, int& TotalCount); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpatialCustomizationSelection.OnCategoryUpdated (Has no native function)
	void OnCategoryUpdated(enum ESpatialCustomizationCategoryState& CategoryState, struct FLinearColor& Color, bool& bUseColorPicker); // (Event | Protected | HasDefaults | BlueprintEvent)
};

