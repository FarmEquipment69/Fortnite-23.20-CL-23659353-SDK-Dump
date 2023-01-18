// ScriptStruct /Script/FortniteGame.PlayerSquadMapping
// Size: 0x38
struct FPlayerSquadMapping
{
	struct FName PlaylistName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString PlayerId; // 0x8 (0x10)
	struct FString CustomMatchKey; // 0x18 (0x10)
	uint32_t TeamId; // 0x28 (0x4)
	uint32_t PartyId; // 0x2c (0x4)
	int SeatId; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

