// Class /Script/FortniteUI.AthenaEventMatchScoreboardScreenBase
// Size: 0x568
class UAthenaEventMatchScoreboardScreenBase : public UAthenaEventScreenBase
{
	struct FUIActionTag SortByElimsAction; // 0x518 (0x4)
	unsigned char unreflected_51c[0x4]; // 0x51c (0x4) 
	struct FUIActionTag SortByPlaceAction; // 0x520 (0x4)
	unsigned char unreflected_524[0x4]; // 0x524 (0x4) 
	struct FDataTableRowHandle SortByEliminationsActionRowHandle; // 0x528 (0x10)
	struct FDataTableRowHandle SortByPlaceActionRowHandle; // 0x538 (0x10)
	struct TArray<class UAthenaRemoteSquadViewData*> SquadDataArray; // 0x548 (0x10)
	unsigned char unreflected_558[0x8]; // 0x558 (0x8) 
	class UCommonListView* ScoreboardListView; // 0x560 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchScoreboardScreenBase.SetSquadIdsVisible_BP (Has no native function)
	void SetSquadIdsVisibleBP(bool& bSquadIdsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchScoreboardScreenBase.HandleSquadKillScoreChanged (Underlying native function: HandleSquadKillScoreChanged 0x25f795c)
	void HandleSquadKillScoreChanged(class UAthenaRemoteSquadViewData*& InSquadData, int& InKillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaEventMatchScoreboardScreenBase.HandleSquadEliminated (Underlying native function: HandleSquadEliminated 0x2916cd4)
	void HandleSquadEliminated(class UAthenaRemoteSquadViewData*& InSquadData); // (Final | Native | Private)
};

