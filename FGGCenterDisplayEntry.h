// ScriptStruct /Script/FortniteUI.GGCenterDisplayEntry
// Size: 0x18
struct FGGCenterDisplayEntry : FFortChangeMonitoringStruct
{
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UFortWeaponItemDefinition* WeaponAt; // 0x8 (0x8)
	int PlayersAtWeapon; // 0x10 (0x4)
	bool bIsEnabled; // 0x14 (0x1)
	bool bShowHarvestingTool; // 0x15 (0x1)
	unsigned char padding_16[0x2]; // 0x16 (0x2)
};

