// Class /Script/FortniteUI.AthenaEventMatchEliminatedGridScreenBase
// Size: 0x540
class UAthenaEventMatchEliminatedGridScreenBase : public UAthenaEventScreenBase
{
	class UClass* TeamWidgetClass; // 0x518 (0x8)
	struct TArray<class UAthenaEventMatchTeamWidgetBase*> EliminatedTeams; // 0x520 (0x10)
	int MaxNumColumns; // 0x530 (0x4)
	int MaxTeamCount; // 0x534 (0x4)
	int MaxTeamSize; // 0x538 (0x4)
	unsigned char padding_53c[0x4]; // 0x53c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchEliminatedGridScreenBase.OnTeamEliminated_BP (Has no native function)
	void OnTeamEliminatedBP(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchEliminatedGridScreenBase.OnPlayerEliminatedStateChanged (Underlying native function: OnPlayerEliminatedStateChanged 0x70dc11c)
	void OnPlayerEliminatedStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& bInIsEliminated); // (Final | Native | Private)
};

