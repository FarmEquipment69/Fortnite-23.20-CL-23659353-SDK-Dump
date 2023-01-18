// Class /Script/FortniteGame.FortLobbyBeaconHost
// Size: 0x350
class AFortLobbyBeaconHost : public ALobbyBeaconHost
{
	unsigned char bAllowReservationsToProceedToLobby; // 0x2e8 (0x1)
	unsigned char bWorldRecordLoaded; // 0x2e8 (0x1)
	unsigned char unreflected_2e9[0x3]; // 0x2e9 (0x3) 
	int LastReservationCountForPermissionTimeoutChange; // 0x2ec (0x4)
	float LobbyPermissionTimeout; // 0x2f0 (0x4)
	unsigned char padding_2f4[0x5c]; // 0x2f4 (0x5c)
};

