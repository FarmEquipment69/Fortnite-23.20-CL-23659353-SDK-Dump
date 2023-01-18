// ScriptStruct /Script/FortniteGame.ItemCollectorRow
// Size: 0x20
struct FItemCollectorRow : FTableRowBase
{
	class UDataTable* OverrideItemsTable; // 0x8 (0x8)
	enum EFortRarity OverrideRarity; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	int OverrideGoal; // 0x14 (0x4)
	int bOverrideLootRules; // 0x18 (0x4)
	int bUseOverrideRarity; // 0x1c (0x4)
};

