// Class /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase
// Size: 0x520
class UAthenaProfileStatsRecentMatchesBase : public UCommonActivatablePanelLegacy
{
	struct TArray<class UAthenaMatchStatView*> RecentMatches; // 0x4e0 (0x10)
	unsigned char padding_4f0[0x30]; // 0x4f0 (0x30)

	/* Functions */

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.Setup (Underlying native function: Setup 0xa5bde48)
	void Setup(struct FUniqueNetIdRepl& InUniqueId); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.OnStartFetchingData (Has no native function)
	void OnStartFetchingData(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.OnRecentMatcheChanged (Has no native function)
	void OnRecentMatcheChanged(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.OnProfileLoaded (Underlying native function: OnProfileLoaded 0xa5bbd30)
	void OnProfileLoaded(class UFortMcpProfileAthenaStats*& ProfileAthenaStats); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.OnNoData (Has no native function)
	void OnNoData(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.OnDataRecieved (Has no native function)
	void OnDataRecieved(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.GetUniqueID (Underlying native function: GetUniqueID 0xa5b9704)
	struct FUniqueNetIdRepl GetUniqueID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaProfileStatsRecentMatchesBase.GetRecentMatches (Underlying native function: GetRecentMatches 0xa5b923c)
	struct TArray<class UAthenaMatchStatView*> GetRecentMatches(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

