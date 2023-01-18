// Class /Script/FortniteGame.FortSpectatorBeaconClient
// Size: 0x440
class AFortSpectatorBeaconClient : public ASpectatorBeaconClient
{
	unsigned char unreflected_410[0x20]; // 0x410 (0x20) 
	float ReconnectionInitialTimeout; // 0x430 (0x4)
	float ReconnectionTimeout; // 0x434 (0x4)
	bool bHasReconnected; // 0x438 (0x1)
	unsigned char padding_439[0x7]; // 0x439 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ServerReconnectExistingReservation (Underlying native function: ServerReconnectExistingReservation 0x8cbf8b0)
	void ServerReconnectExistingReservation(struct FString& InSessionId, struct FUniqueNetIdRepl& RequestingPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ServerAbandonExistingReservation (Underlying native function: ServerAbandonExistingReservation 0x8cbf694)
	void ServerAbandonExistingReservation(struct FString& InSessionId, struct FUniqueNetIdRepl& RequestingPlayer); // (Net | NetReliable | Native | Event | Protected | NetServer | 0x80000000)

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ClientReconnectResponse (Underlying native function: ClientReconnectResponse 0x8cbeee8)
	void ClientReconnectResponse(struct TEnumAsByte<ESpectatorReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ClientAllowedToProceedFromReservationTimeout (Underlying native function: ClientAllowedToProceedFromReservationTimeout 0x240d908)
	void ClientAllowedToProceedFromReservationTimeout(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ClientAllowedToProceedFromReservation (Underlying native function: ClientAllowedToProceedFromReservation 0x14f9120)
	void ClientAllowedToProceedFromReservation(); // (Net | NetReliable | Native | Event | Public | NetClient)

	// Function /Script/FortniteGame.FortSpectatorBeaconClient.ClientAbandonResponse (Underlying native function: ClientAbandonResponse 0x8cbee64)
	void ClientAbandonResponse(struct TEnumAsByte<ESpectatorReservationResult>& ReservationResponse); // (Net | NetReliable | Native | Event | Public | NetClient)
};

