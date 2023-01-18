// Class /Script/SaveTheWorldUI.FortSquadStatsWidgetBase
// Size: 0x2c8
class UFortSquadStatsWidgetBase : public UCommonUserWidget
{
	struct TArray<class UFortAttributeListItem_NUI*> OverviewStats; // 0x290 (0x10)
	class UFortAttributeList_NUI* DetailedStats; // 0x2a0 (0x8)
	unsigned char padding_2a8[0x20]; // 0x2a8 (0x20)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestStatsUpdate (Underlying native function: RequestStatsUpdate 0x75c13f0)
	void RequestStatsUpdate(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.RequestShowPreviewStats (Underlying native function: RequestShowPreviewStats 0x75c13dc)
	void RequestShowPreviewStats(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandleSquadSlottingPreviewStateChanged (Has no native function)
	void HandleSquadSlottingPreviewStateChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.HandlePowerRatingChanged_BP (Has no native function)
	void HandlePowerRatingChangedBP(bool& bHasTeamMebers); // (Event | Public | BlueprintEvent)

	// Function /Script/SaveTheWorldUI.FortSquadStatsWidgetBase.GetLocalPlayerId (Underlying native function: GetLocalPlayerId 0x75bf410)
	struct FUniqueNetIdRepl GetLocalPlayerId(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

