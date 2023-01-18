// Class /Script/FortniteUI.DeimosSurvivalWidgetBase
// Size: 0x330
class UDeimosSurvivalWidgetBase : public UFortHUDElementWidget
{
	struct TArray<struct FSurvivalObjectiveText> SurvivalStateDefaultText; // 0x2d0 (0x10)
	struct FGameplayTag ObjectiveTag; // 0x2e0 (0x4)
	unsigned char padding_2e4[0x4c]; // 0x2e4 (0x4c)

	/* Functions */

	// Function /Script/FortniteUI.DeimosSurvivalWidgetBase.OnUpdateStateText (Has no native function)
	void OnUpdateStateText(struct FText& StateText); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.DeimosSurvivalWidgetBase.OnUpdateObjectiveIcon (Has no native function)
	void OnUpdateObjectiveIcon(struct FSurvivalObjectiveIconData& ObjectiveIconData); // (Event | Public | HasOutParms | BlueprintEvent)
};

