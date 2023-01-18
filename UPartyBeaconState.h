// Class /Script/OnlineSubsystemUtils.PartyBeaconState
// Size: 0x98
class UPartyBeaconState : public UObject
{
	struct FName SessionName; // 0x28 (0x4)
	int NumConsumedReservations; // 0x2c (0x4)
	int MaxReservations; // 0x30 (0x4)
	int NumTeams; // 0x34 (0x4)
	int NumPlayersPerTeam; // 0x38 (0x4)
	struct FName TeamAssignmentMethod; // 0x3c (0x4)
	int ReservedHostTeamNum; // 0x40 (0x4)
	int ForceTeamNum; // 0x44 (0x4)
	bool bRestrictCrossConsole; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct TArray<struct FString> PlatformCrossplayRestrictions; // 0x50 (0x10)
	struct TArray<struct FPartyBeaconCrossplayPlatformMapping> PlatformTypeMapping; // 0x60 (0x10)
	bool bEnableRemovalRequests; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct TArray<struct FPartyReservation> Reservations; // 0x78 (0x10)
	unsigned char padding_88[0x10]; // 0x88 (0x10)
};

