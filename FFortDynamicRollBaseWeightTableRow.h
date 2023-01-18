// ScriptStruct /Script/PlayerAugmentsCodeRuntime.FortDynamicRollBaseWeightTableRow
// Size: 0x38
struct FFortDynamicRollBaseWeightTableRow : FTableRowBase
{
	class UFortItemDefinition* ItemDefinition; // 0x8 (0x8)
	float BaseWeight; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TArray<struct FGameplayTag> ModTags; // 0x18 (0x10)
	bool bOwningItemZerosWeight; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float MaxModifiedWeight; // 0x2c (0x4)
	float MinModifiedWeight; // 0x30 (0x4)
	unsigned char padding_34[0x4]; // 0x34 (0x4)
};

