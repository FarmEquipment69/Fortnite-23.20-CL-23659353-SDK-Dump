// ScriptStruct /Script/LootController.BuildingContainersArrayEntry
// Size: 0xa0
struct FBuildingContainersArrayEntry
{
	class ABuildingContainer* BuildingContainer; // 0x0 (0x8)
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Transform; // 0x10 (0x60)
	struct FName SearchLootTierGroup; // 0x70 (0x4)
	unsigned char unreflected_74[0x4]; // 0x74 (0x4) 
	struct FGameplayTagContainer GameplayTags; // 0x78 (0x20)
	unsigned char padding_98[0x8]; // 0x98 (0x8)
};

