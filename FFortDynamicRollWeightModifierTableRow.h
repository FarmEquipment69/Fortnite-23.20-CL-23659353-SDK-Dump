// ScriptStruct /Script/PlayerAugmentsCodeRuntime.FortDynamicRollWeightModifierTableRow
// Size: 0x18
struct FFortDynamicRollWeightModifierTableRow : FTableRowBase
{
	struct FGameplayTag ActivatingPlayerTag; // 0x8 (0x4)
	struct FGameplayTag TargetModTag; // 0xc (0x4)
	enum ERollModifierOperation WeightModifierOperation; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	float WeightModificationValue; // 0x14 (0x4)
};

