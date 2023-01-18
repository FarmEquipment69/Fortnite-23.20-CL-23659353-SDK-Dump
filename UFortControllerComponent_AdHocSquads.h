// Class /Script/FortniteGame.FortControllerComponent_AdHocSquads
// Size: 0x168
class UFortControllerComponent_AdHocSquads : public UFortControllerComponent
{
	struct FMulticastInlineDelegate DelegateOwningPlayerJoinedSquad; // 0xa0 (0x10)
	struct FMulticastInlineDelegate DelegateOtherPlayerJoinedSquad; // 0xb0 (0x10)
	struct FMulticastInlineDelegate DelegateFailedToJoinSquad; // 0xc0 (0x10)
	struct FMulticastInlineDelegate DelegateOwningPlayerLeftSquad; // 0xd0 (0x10)
	struct FMulticastInlineDelegate DelegateOtherPlayerLeftSquad; // 0xe0 (0x10)
	struct FMulticastInlineDelegate DelegatePlayerInitiatedSquadInvite; // 0xf0 (0x10)
	struct FMulticastInlineDelegate DelegatePlayerEndedSquadInvite; // 0x100 (0x10)
	struct FMulticastInlineDelegate DelegateSquadInviteInitiationFailed; // 0x110 (0x10)
	struct FMulticastInlineDelegate DelegatePlayerHasNearedSquadInvitingPlayer; // 0x120 (0x10)
	struct FMulticastInlineDelegate DelegatePlayerIsNoLongerNearSquadInvitingPlayer; // 0x130 (0x10)
	class AFortAthenaMutator_AdHocSquads* AdHocSquadsMutator; // 0x140 (0x8)
	class UAdHocSquadData* AdHocSquadData; // 0x148 (0x8)
	struct TArray<class AFortPlayerStateAthena*> NearbySquadInvitingPlayers; // 0x150 (0x10)
	class AFortPlayerStateAthena* ClosestNearbySquadInvitingPlayerState; // 0x160 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnSquadInviteInitiationFailed (Has no native function)
	void OnSquadInviteInitiationFailed(enum EAdHocSquads_SquadUpResult& FailureReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnSquadInviteDataChanged (Underlying native function: OnSquadInviteDataChanged 0x82894d8)
	void OnSquadInviteDataChanged(struct FAdHocSquad_InviteData& InviteData); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnRep_AdHocSquadsMutator (Underlying native function: OnRep_AdHocSquadsMutator 0x828938c)
	void OnRepAdHocSquadsMutator(class AFortAthenaMutator_AdHocSquads*& OldAdHocSquadsMutator); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnPlayerInitiatedSquadInvite (Has no native function)
	void OnPlayerInitiatedSquadInvite(class AFortPlayerStateAthena*& PlayerInitiatingInvite); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnOwningPlayerLeftSquad (Has no native function)
	void OnOwningPlayerLeftSquad(enum EAdHocSquads_LeaveSquadReason& LeaveReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnOwningPlayerJoinedSquad (Has no native function)
	void OnOwningPlayerJoinedSquad(class AFortPlayerStateAthena*& PlayerTheOwningPlayerIsJoining, bool& bInviteInstigatedByThisPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnOtherPlayerLeftSquad (Has no native function)
	void OnOtherPlayerLeftSquad(class AFortPlayerStateAthena*& LeavingPlayer, enum EAdHocSquads_LeaveSquadReason& LeaveReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnOtherPlayerJoinedSquad (Has no native function)
	void OnOtherPlayerJoinedSquad(class AFortPlayerStateAthena*& JoiningPlayer, bool& bInviteInstigatedByThisPlayer); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.OnFailedToJoinSquad (Has no native function)
	void OnFailedToJoinSquad(class AFortPlayerStateAthena*& PlayerFromSquad, enum EAdHocSquads_SquadUpResult& FailureReason); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.HandleServerTeamChange (Underlying native function: HandleServerTeamChange 0x26daa0c)
	void HandleServerTeamChange(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.HandleServerSquadChange (Underlying native function: HandleServerSquadChange 0x82886e8)
	void HandleServerSquadChange(class AFortPlayerStateAthena*& PlayerState, unsigned char& OldSquadIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.GetNumberOfPlayersInSquad (Underlying native function: GetNumberOfPlayersInSquad 0x82880f0)
	int GetNumberOfPlayersInSquad(class AFortPlayerStateAthena*& InPlayerState); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.GetNearbySquadInvitingPlayers (Underlying native function: GetNearbySquadInvitingPlayers 0x82880d4)
	struct TArray<class AFortPlayerStateAthena*> GetNearbySquadInvitingPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.GetAdHocSquadData (Underlying native function: GetAdHocSquadData 0x6cc27c4)
	class UAdHocSquadData* GetAdHocSquadData(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnSquadInviteInitiationFailed (Underlying native function: ClientOnSquadInviteInitiationFailed 0x8287984)
	void ClientOnSquadInviteInitiationFailed(enum EAdHocSquads_SquadUpResult& FailureReason); // (Net | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnOwningPlayerLeftSquad (Underlying native function: ClientOnOwningPlayerLeftSquad 0x8287900)
	void ClientOnOwningPlayerLeftSquad(enum EAdHocSquads_LeaveSquadReason& LeaveReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnOwningPlayerJoinedSquad (Underlying native function: ClientOnOwningPlayerJoinedSquad 0x8287834)
	void ClientOnOwningPlayerJoinedSquad(class AFortPlayerStateAthena*& PlayerTheOwningPlayerIsJoining, bool& bInviteInstigatedByThisPlayer); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnOtherPlayerLeftSquad (Underlying native function: ClientOnOtherPlayerLeftSquad 0x828776c)
	void ClientOnOtherPlayerLeftSquad(class AFortPlayerStateAthena*& LeavingPlayer, enum EAdHocSquads_LeaveSquadReason& LeaveReason); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnOtherPlayerJoinedSquad (Underlying native function: ClientOnOtherPlayerJoinedSquad 0x82876a0)
	void ClientOnOtherPlayerJoinedSquad(class AFortPlayerStateAthena*& JoiningPlayer, bool& bInviteInstigatedByThisPlayer); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnLeaveParty (Underlying native function: ClientOnLeaveParty 0x8287688)
	void ClientOnLeaveParty(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortControllerComponent_AdHocSquads.ClientOnFailedToJoinSquad (Underlying native function: ClientOnFailedToJoinSquad 0x82875c0)
	void ClientOnFailedToJoinSquad(class AFortPlayerStateAthena*& PlayerFromSquad, enum EAdHocSquads_SquadUpResult& FailureReason); // (Net | NetReliable | Native | Event | Public | NetClient)
};

