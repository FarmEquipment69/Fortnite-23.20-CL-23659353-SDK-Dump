// ScriptStruct /Script/FortniteGame.TeamPlacementData
// Size: 0x18
struct FTeamPlacementData
{
	unsigned char TeamId; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int TeamPlacement; // 0x4 (0x4)
	int TeamScore; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class AFortTeamInfoAthena* TeamInfoAthena; // 0x10 (0x8)
};

