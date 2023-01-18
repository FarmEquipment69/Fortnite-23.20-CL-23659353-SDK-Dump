// ScriptStruct /Script/CraftingRuntime.CraftingUpgradeRule
// Size: 0x88
struct FCraftingUpgradeRule
{
	struct FGameplayTagRequirements SourceItemTags; // 0x0 (0x40)
	struct FGameplayTagRequirements TargetItemTags; // 0x40 (0x40)
	unsigned char UpgradeFlags; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

