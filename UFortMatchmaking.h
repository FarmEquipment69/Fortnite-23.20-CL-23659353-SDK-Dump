// Class /Script/FortniteGame.FortMatchmaking
// Size: 0x3f0
class UFortMatchmaking : public UObject
{
	unsigned char unreflected_28[0x120]; // 0x28 (0x120) 
	class UClass* ReservationBeaconClientClass; // 0x148 (0x8)
	class AFortPartyBeaconClient* ReservationBeaconClient; // 0x150 (0x8)
	class AFortLobbyBeaconClient* LobbyBeaconClient; // 0x158 (0x8)
	unsigned char unreflected_160[0x70]; // 0x160 (0x70) 
	int ControllerId; // 0x1d0 (0x4)
	unsigned char unreflected_1d4[0x4]; // 0x1d4 (0x4) 
	struct FString TempZoneInstanceId; // 0x1d8 (0x10)
	struct FFortCachedMatchmakingSearchParams CachedMatchmakingSearchParams; // 0x1e8 (0xc8)
	unsigned char unreflected_2b0[0x120]; // 0x2b0 (0x120) 
	class UFortMatchmakingPolicy* Matchmaking; // 0x3d0 (0x8)
	struct FString LastCriticalMissionSessionId; // 0x3d8 (0x10)
	enum EFortMatchmakingPrivacyConfiguration LastMatchmakingPrivacyConfiguration; // 0x3e8 (0x1)
	unsigned char padding_3e9[0x7]; // 0x3e9 (0x7)
};

