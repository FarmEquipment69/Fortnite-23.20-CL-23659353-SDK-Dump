// ScriptStruct /Script/FortniteGame.FortAbilityTagRelationship
// Size: 0x48
struct FFortAbilityTagRelationship
{
	struct FGameplayTag AbilityTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FGameplayTagContainer AbilityTagsToBlock; // 0x8 (0x20)
	struct FGameplayTagContainer AbilityTagsToCancel; // 0x28 (0x20)
};

