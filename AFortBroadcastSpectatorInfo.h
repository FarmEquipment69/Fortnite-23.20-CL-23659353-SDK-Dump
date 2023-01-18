// Class /Script/FortniteGame.FortBroadcastSpectatorInfo
// Size: 0x2f8
class AFortBroadcastSpectatorInfo : public AInfo
{
	int TotalNumPlayers; // 0x288 (0x4)
	int TotalNumTeams; // 0x28c (0x4)
	struct TArray<class AFortTeamPrivateInfo*> TeamPrivateInfos; // 0x290 (0x10)
	struct TArray<struct FFortBroadcastInfoPerPlayer> PerPlayerInfo; // 0x2a0 (0x10)
	unsigned char padding_2b0[0x48]; // 0x2b0 (0x48)

	/* Functions */

	// Function /Script/FortniteGame.FortBroadcastSpectatorInfo.OnRep_TotalNumTeams (Underlying native function: OnRep_TotalNumTeams 0x8e7fda4)
	void OnRepTotalNumTeams(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastSpectatorInfo.OnRep_TotalNumPlayers (Underlying native function: OnRep_TotalNumPlayers 0x8e7fd80)
	void OnRepTotalNumPlayers(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastSpectatorInfo.OnRep_PerPlayerInfo (Underlying native function: OnRep_PerPlayerInfo 0x8e7fb1c)
	void OnRepPerPlayerInfo(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortBroadcastSpectatorInfo.HandleTeamInfosSet (Underlying native function: HandleTeamInfosSet 0x8e7f1f0)
	void HandleTeamInfosSet(); // (Final | Native | Private)
};

