// Class /Script/FortniteUI.AthenaProfileStatsBase
// Size: 0x540
class UAthenaProfileStatsBase : public UCommonActivatablePanelLegacy
{
	class UAthenaProfileStatBox* ProfileStatBox; // 0x4e0 (0x8)
	struct TArray<class UAthenaSeasonStats*> StatSets; // 0x4e8 (0x10)
	class UAthenaSeasonStats* CurrentViewedStatSet; // 0x4f8 (0x8)
	class UAthenaMatchStatView* CurrentStatView; // 0x500 (0x8)
	struct FName CurrentPlaylist; // 0x508 (0x4)
	unsigned char padding_50c[0x34]; // 0x50c (0x34)

	/* Functions */

	// Function /Script/FortniteUI.AthenaProfileStatsBase.Setup (Underlying native function: Setup 0xa5bdd74)
	void Setup(struct FUniqueNetIdRepl& InUniqueId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.PrevStatSet (Underlying native function: PrevStatSet 0xa5bccb4)
	void PrevStatSet(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.OnStatSetChanged (Has no native function)
	void OnStatSetChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.OnStartFetchingData (Has no native function)
	void OnStartFetchingData(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.OnProfileLoaded (Underlying native function: OnProfileLoaded 0xa5bbc9c)
	void OnProfileLoaded(class UFortMcpProfileAthenaStats*& ProfileAthenaStats); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.OnNoData (Has no native function)
	void OnNoData(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.OnDataRecieved (Has no native function)
	void OnDataRecieved(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.NumStatSets (Underlying native function: NumStatSets 0x26bfce8)
	int NumStatSets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.NextStatSet (Underlying native function: NextStatSet 0xa5bb574)
	void NextStatSet(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.NextPlaylist (Underlying native function: NextPlaylist 0xa5bb560)
	void NextPlaylist(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.GetUniqueID (Underlying native function: GetUniqueID 0xa5b96a4)
	struct FUniqueNetIdRepl GetUniqueID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.GetCurrentStatSet (Underlying native function: GetCurrentStatSet 0xa5b8c20)
	class UAthenaSeasonStats* GetCurrentStatSet(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaProfileStatsBase.GetCurrentPlaylistName (Underlying native function: GetCurrentPlaylistName 0xa5b8b60)
	struct FText GetCurrentPlaylistName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

