// Class /Script/FortniteUI.AthenaRemoteSquadViewData
// Size: 0xd0
class UAthenaRemoteSquadViewData : public UObject
{
	struct FMulticastInlineDelegate OnPlayerAdded; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnSquadIdChanged; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnSquadKillscoreChanged; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnSquadPlaceChanged; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnSquadColorChanged; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnSquadEliminated; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnSquadSessionRankChanged; // 0x88 (0x10)
	struct TArray<class UAthenaRemotePlayerViewData*> PlayerDataArray; // 0x98 (0x10)
	unsigned char padding_a8[0x28]; // 0xa8 (0x28)

	/* Functions */

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.UInt8Delegate__DelegateSignature (Has no native function)
	void UInt8DelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, unsigned char& IntParam); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.PlayerDelegate__DelegateSignature (Has no native function)
	void PlayerDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, class UAthenaRemotePlayerViewData*& PlayerData); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.LinearColorDelegate__DelegateSignature (Has no native function)
	void LinearColorDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, struct FLinearColor& ColorParam); // (MulticastDelegate | Public | Delegate | HasDefaults)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.IntDelegate__DelegateSignature (Has no native function)
	void IntDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData, int& IntParam); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandleSessionRankChanged (Underlying native function: HandleSessionRankChanged 0x11862b0)
	void HandleSessionRankChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InSessionRank); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerPlaceChanged (Underlying native function: HandlePlayerPlaceChanged 0x1bb833c)
	void HandlePlayerPlaceChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InPlace); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerKillscoreChanged (Underlying native function: HandlePlayerKillscoreChanged 0x25dea80)
	void HandlePlayerKillscoreChanged(class UAthenaRemotePlayerViewData*& InPlayerData, int& InKillScore); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.HandlePlayerDeadStateChanged (Underlying native function: HandlePlayerDeadStateChanged 0x24c264c)
	void HandlePlayerDeadStateChanged(class UAthenaRemotePlayerViewData*& InPlayerData, bool& InEliminated); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadSessionRank (Underlying native function: GetSquadSessionRank 0x86b5958)
	int GetSquadSessionRank(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadID (Underlying native function: GetSquadID 0x71cfd1c)
	int GetSquadID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetSquadColor (Underlying native function: GetSquadColor 0xa5b94dc)
	struct FLinearColor GetSquadColor(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetPlayerDatas (Underlying native function: GetPlayerDatas 0x22243f8)
	struct TArray<class UAthenaRemotePlayerViewData*> GetPlayerDatas(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetPlace (Underlying native function: GetPlace 0x2d00ea0)
	int GetPlace(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetMinigameTeamID (Underlying native function: GetMinigameTeamID 0x280abc0)
	class UFortMinigameTeamIdentification* GetMinigameTeamID(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetKillScore (Underlying native function: GetKillScore 0x2b41e84)
	int GetKillScore(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.AthenaRemoteSquadViewData.GetIsEliminated (Underlying native function: GetIsEliminated 0xa5b8fb4)
	bool GetIsEliminated(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteUI.AthenaRemoteSquadViewData.EventDelegate__DelegateSignature (Has no native function)
	void EventDelegateDelegateSignature(class UAthenaRemoteSquadViewData*& SquadData); // (MulticastDelegate | Public | Delegate)
};

