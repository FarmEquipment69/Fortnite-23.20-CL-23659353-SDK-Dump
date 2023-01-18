// ScriptStruct /Script/FortniteGame.PickupInstigatorData
// Size: 0x18
struct FPickupInstigatorData
{
	unsigned char TeamIndex; // 0x0 (0x1)
	struct TEnumAsByte<ETeamAttitude> TargetAttitude; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float AccentColorParam; // 0x4 (0x4)
	int ScoreValue; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UClass* OverridePickupClass; // 0x10 (0x8)
};

