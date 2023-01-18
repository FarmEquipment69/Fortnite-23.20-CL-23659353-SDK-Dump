// Class /Script/FortniteGame.FortAthenaMutator_Chrome
// Size: 0x720
class AFortAthenaMutator_Chrome : public AFortAthenaMutator_GameModeBase
{
	struct FText TeleportingPlayersText; // 0x450 (0x18)
	class UClass* TraversePointClass; // 0x468 (0x8)
	struct TArray<struct FPrimaryAssetId*> ChromeVehicleAssetIds; // 0x470 (0x10)
	struct FFortSquadStartSearchParamData VehicleStartSearchParam; // 0x480 (0xc0)
	class UClass* FuelSettingGE; // 0x540 (0x8)
	struct FScalableFloat ScoreToWin; // 0x548 (0x28)
	struct FScalableFloat bUseOverridingSpawnTransforms; // 0x570 (0x28)
	struct TArray<struct FTransform> OverridingSpawnTransforms; // 0x598 (0x10)
	struct TArray<struct FChromeRoute> Routes; // 0x5a8 (0x10)
	struct FScalableFloat CountdownDuration; // 0x5b8 (0x28)
	struct FScalableFloat NumOfTeamsToFinishBeforeFinalizeWinner; // 0x5e0 (0x28)
	struct FAthenaGameMessageData GameMsgChromeInfoMessage; // 0x608 (0x50)
	struct TArray<struct FAthenaGameMessageData> GameMsgRaceCountdownMessage; // 0x658 (0x10)
	struct FAthenaGameMessageData GameMsgFinishPointReached; // 0x668 (0x50)
	unsigned char unreflected_6b8[0x8]; // 0x6b8 (0x8) 
	struct TArray<class AFortSquadStart*> ChromeSquadStarts; // 0x6c0 (0x10)
	struct TArray<class AFortPlayerStateAthena*> FinishedPlayerStates; // 0x6d0 (0x10)
	class AFortAthenaMutator_SynchronizedTeleport* TeleportMutator; // 0x6e0 (0x8)
	class AAthenaChromeTraversePoint* FinishTraversePoint; // 0x6e8 (0x8)
	unsigned char unreflected_6f0[0x28]; // 0x6f0 (0x28) 
	bool bRaceStarted; // 0x718 (0x1)
	unsigned char padding_719[0x7]; // 0x719 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator_Chrome.OnTraversePointTouched (Underlying native function: OnTraversePointTouched 0x848a43c)
	void OnTraversePointTouched(class AAthenaTraversePoint*& PointActor, class AFortPlayerStateAthena*& TouchingPlayer); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Chrome.OnRep_RaceStarted (Underlying native function: OnRep_RaceStarted 0x848a11c)
	void OnRepRaceStarted(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Chrome.OnRep_FinishTraversePoint (Underlying native function: OnRep_FinishTraversePoint 0x848a06c)
	void OnRepFinishTraversePoint(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAthenaMutator_Chrome.HandleTeleportComplete (Underlying native function: HandleTeleportComplete 0x26daa0c)
	void HandleTeleportComplete(); // (Final | Native | Private)
};

