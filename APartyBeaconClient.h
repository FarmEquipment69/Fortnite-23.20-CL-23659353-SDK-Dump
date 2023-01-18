// Class /Script/OnlineSubsystemUtils.PartyBeaconClient
// Size: 0x3e0
class APartyBeaconClient : public AOnlineBeaconClient
{
	unsigned char unreflected_318[0x30]; // 0x318 (0x30) 
	struct FString DestSessionId; // 0x348 (0x10)
	struct FPartyReservation PendingReservation; // 0x358 (0x58)
	enum EClientRequestType RequestType; // 0x3b0 (0x1)
	bool bPendingReservationSent; // 0x3b1 (0x1)
	bool bCancelReservation; // 0x3b2 (0x1)
	unsigned char padding_3b3[0x2d]; // 0x3b3 (0x2d)

	/* Functions */

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest (Underlying native function: ServerUpdateReservationRequest 0x6e5f3cc)
	void ServerUpdateReservationRequest(struct FString& SessionId, struct FPartyReservation& ReservationUpdate); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest (Underlying native function: ServerReservationRequest 0x6e5f1b8)
	void ServerReservationRequest(struct FString& SessionId, struct FPartyReservation& Reservation); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest (Underlying native function: ServerRemoveMemberFromReservationRequest 0x6e5efa4)
	void ServerRemoveMemberFromReservationRequest(struct FString& SessionId, struct FPartyReservation& ReservationUpdate); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest (Underlying native function: ServerCancelReservationRequest 0x6e5eeb8)
	void ServerCancelReservationRequest(struct FUniqueNetIdRepl& PartyLeader); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest (Underlying native function: ServerAddOrUpdateReservationRequest 0x6e5eca4)
	void ServerAddOrUpdateReservationRequest(struct FString& SessionId, struct FPartyReservation& Reservation); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates (Underlying native function: ClientSendReservationUpdates 0x6e5bb04)
	void ClientSendReservationUpdates(int& NumRemainingReservations); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull (Underlying native function: ClientSendReservationFull 0x14f68cc)
	void ClientSendReservationFull(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse (Underlying native function: ClientReservationResponse 0x6e5ba80)
	void ClientReservationResponse(struct TEnumAsByte<EPartyReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse (Underlying native function: ClientCancelReservationResponse 0x6e5b9fc)
	void ClientCancelReservationResponse(struct TEnumAsByte<EPartyReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)
};

