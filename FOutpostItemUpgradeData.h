// ScriptStruct /Script/FortniteGame.OutpostItemUpgradeData
// Size: 0x58
struct FOutpostItemUpgradeData : FTableRowBase
{
	struct TWeakObjectPtr<class UFortOutpostItemDefinition> ItemDefinition; // 0x8 (0x28)
	int ItemLevel; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct FString RequiredItems; // 0x38 (0x10)
	struct FString RequiredAccountItems; // 0x48 (0x10)
};

