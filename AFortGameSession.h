// Class /Script/FortniteGame.FortGameSession
// Size: 0x410
class AFortGameSession : public AGameSession
{
	unsigned char unreflected_2a0[0x20]; // 0x2a0 (0x20) 
	struct FFortHostSessionParams* CurrentSessionParams; // 0x2c0 (0x8)
	unsigned char unreflected_2c8[0x10]; // 0x2c8 (0x10) 
	class UClass* ReservationBeaconHostClass; // 0x2d8 (0x8)
	class UClass* SpectatorBeaconHostClass; // 0x2e0 (0x8)
	unsigned char unreflected_2e8[0x8]; // 0x2e8 (0x8) 
	class AFortPartyBeaconHost* ReservationBeaconHost; // 0x2f0 (0x8)
	class AFortLobbyBeaconHost* LobbyBeaconHost; // 0x2f8 (0x8)
	class AFortSpectatorBeaconHost* SpectatorBeaconHost; // 0x300 (0x8)
	struct TArray<struct FFortDisconnectedPlayerReservation> DisconnectedPlayerReservations; // 0x308 (0x10)
	struct FSoftClassPath ContentBeaconHostV2ClassPath; // 0x318 (0x18)
	class AContentBeaconHostObjectV2* ContentBeaconHostV2; // 0x330 (0x8)
	struct TArray<struct FPlayerReservation> PlayersToRegister; // 0x338 (0x10)
	float BulkUnregisterTimerDelay; // 0x348 (0x4)
	int MaxBroadcasters; // 0x34c (0x4)
	float DisconnectedReservationTimeout; // 0x350 (0x4)
	unsigned char unreflected_354[0x34]; // 0x354 (0x34) 
	bool bEnableMeshNetwork; // 0x388 (0x1)
	unsigned char unreflected_389[0x7]; // 0x389 (0x7) 
	struct TArray<struct FString> DisabledMeshNodeTypes; // 0x390 (0x10)
	struct TArray<struct FString> DisabledMeshRegions; // 0x3a0 (0x10)
	class AFortMeshBeaconHost* MeshBeaconHost; // 0x3b0 (0x8)
	class AFortMeshBeaconHostObject* MeshBeaconHostObject; // 0x3b8 (0x8)
	class AFortMeshBeaconClient* MeshBeaconClient; // 0x3c0 (0x8)
	float RetryMeshConnectDelay; // 0x3c8 (0x4)
	float MaxMeshConnectDelay; // 0x3cc (0x4)
	float MeshNetworkServerStatusEventRate; // 0x3d0 (0x4)
	unsigned char unreflected_3d4[0x24]; // 0x3d4 (0x24) 
	struct TArray<struct FMeshGamePluginEntry> MeshNetworkGameFeaturePluginsToLoad; // 0x3f8 (0x10)
	unsigned char padding_408[0x8]; // 0x408 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortGameSession.DumpReservations (Underlying native function: DumpReservations 0x8bc24e8)
	void DumpReservations(); // (Exec | Native | Public | Const)
};

