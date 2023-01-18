// Class /Script/FortniteGame.FortPartyBeaconClient
// Size: 0x480
class AFortPartyBeaconClient : public APartyBeaconClient
{
	struct FEmptyServerReservation PendingEmptyReservation; // 0x3e0 (0x60)
	unsigned char unreflected_440[0x30]; // 0x440 (0x30) 
	float ReconnectionInitialTimeout; // 0x470 (0x4)
	float ReconnectionTimeout; // 0x474 (0x4)
	bool bHasReconnected; // 0x478 (0x1)
	unsigned char padding_479[0x7]; // 0x479 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortPartyBeaconClient.ServerRequestInitializationState (Underlying native function: ServerRequestInitializationState 0x8c789ec)
	void ServerRequestInitializationState(); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ServerReconnectExistingReservation (Underlying native function: ServerReconnectExistingReservation 0x8c787d0)
	void ServerReconnectExistingReservation(struct FString& InSessionId, struct FUniqueNetIdRepl& RequestingPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ServerEmptyServerReservationRequest (Underlying native function: ServerEmptyServerReservationRequest 0x8c784d8)
	void ServerEmptyServerReservationRequest(struct FString& InSessionId, struct FEmptyServerReservation& ReservationData, struct FPartyReservation& Reservation); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ServerAbandonExistingReservation (Underlying native function: ServerAbandonExistingReservation 0x8c782bc)
	void ServerAbandonExistingReservation(struct FString& InSessionId, struct FUniqueNetIdRepl& RequestingPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ClientReconnectResponse (Underlying native function: ClientReconnectResponse 0x8c77100)
	void ClientReconnectResponse(struct TEnumAsByte<EPartyReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ClientNotifyServerReadinessChanged (Underlying native function: ClientNotifyServerReadinessChanged 0x8c7707c)
	void ClientNotifyServerReadinessChanged(enum EServerInitializationState& NewServerState); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ClientAllowedToProceedFromReservationTimeout (Underlying native function: ClientAllowedToProceedFromReservationTimeout 0x8c77064)
	void ClientAllowedToProceedFromReservationTimeout(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ClientAllowedToProceedFromReservation (Underlying native function: ClientAllowedToProceedFromReservation 0x8c7704c)
	void ClientAllowedToProceedFromReservation(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortPartyBeaconClient.ClientAbandonResponse (Underlying native function: ClientAbandonResponse 0x8c76fc8)
	void ClientAbandonResponse(struct TEnumAsByte<EPartyReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)
};

