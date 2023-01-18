// Class /Script/FortniteUI.AthenaSpectatorPlayersLeftBase
// Size: 0x290
class UAthenaSpectatorPlayersLeftBase : public UCommonUserWidget
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.UpdateTotalTeams (Has no native function)
	void UpdateTotalTeams(int& InTotalTeams); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.UpdateTotalPlayers (Has no native function)
	void UpdateTotalPlayers(int& InTotalPlayers); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.UpdateTeamsLeft (Has no native function)
	void UpdateTeamsLeft(int& InTeamsLeft); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.UpdatePlayersLeft (Has no native function)
	void UpdatePlayersLeft(int& InPlayersLeft); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.UpdateMaxSquadSize (Has no native function)
	void UpdateMaxSquadSize(int& MaxSquadSize); // (Event | Protected | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.OnGameStateSet (Underlying native function: OnGameStateSet 0xa5bb8f4)
	void OnGameStateSet(class AFortGameState*& InGameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaSpectatorPlayersLeftBase.OnBroadcastSpectatorInfoReplicated (Underlying native function: OnBroadcastSpectatorInfoReplicated 0xa5bb67c)
	void OnBroadcastSpectatorInfoReplicated(class AFortBroadcastSpectatorInfo*& BroadcastSpectatorInfo); // (Final | Native | Private)
};

