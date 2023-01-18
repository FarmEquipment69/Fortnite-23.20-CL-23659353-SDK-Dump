// Class /Script/FortniteUI.AthenaEventMatchActiveGridScreenBase
// Size: 0x540
class UAthenaEventMatchActiveGridScreenBase : public UAthenaEventScreenBase
{
	class UClass* TeamWidgetClass; // 0x518 (0x8)
	struct TArray<class UAthenaEventMatchTeamWidgetBase*> ActiveTeams; // 0x520 (0x10)
	int MaxNumColumns; // 0x530 (0x4)
	int MaxTeamCount; // 0x534 (0x4)
	int MaxTeamSize; // 0x538 (0x4)
	unsigned char padding_53c[0x4]; // 0x53c (0x4)

	/* Functions */

	// Function /Script/FortniteUI.AthenaEventMatchActiveGridScreenBase.OnTeamEliminated_BP (Has no native function)
	void OnTeamEliminatedBP(); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaEventMatchActiveGridScreenBase.OnTeamEliminated (Underlying native function: OnTeamEliminated 0xa5bc338)
	void OnTeamEliminated(int& InSquadId); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaEventMatchActiveGridScreenBase.OnTeamChanged_BP (Has no native function)
	void OnTeamChangedBP(); // (Event | Protected | BlueprintCallable | BlueprintEvent)
};

