// Class /Script/FortniteUI.TeamPlacementWidget
// Size: 0x340
class UTeamPlacementWidget : public ULTMWidgetBase
{
	struct TWeakObjectPtr<class AFortAthenaMutator_TeamPlacement> TeamPlacementMutator; // 0x328 (0x8)
	struct TWeakObjectPtr<class AFortPlayerStateAthena> CurrentPlayerState; // 0x330 (0x8)
	unsigned char padding_338[0x8]; // 0x338 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.TeamPlacementWidget.OnPlayerScoringUpdate (Has no native function)
	void OnPlayerScoringUpdate(int& CurrentPlayerTeamScore, int& PreviousPlayerTeamScore, int& CurrentPlayerTeamPlacement, int& PreviousPlayerTeamPlacement, int& GoalScore, struct TArray<int>& SortedTeamScores); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteUI.TeamPlacementWidget.OnGamePhaseStepChanged (Underlying native function: OnGamePhaseStepChanged 0xa5a3abc)
	void OnGamePhaseStepChanged(struct TScriptInterface<class IFortSafeZoneInterface>& SafeZoneInterface, enum EAthenaGamePhaseStep& GamePhaseStep); // (Native | Protected | HasOutParms)
};

