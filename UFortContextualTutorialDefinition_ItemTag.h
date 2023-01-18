// Class /Script/FortniteGame.FortContextualTutorialDefinition_ItemTag
// Size: 0x138
class UFortContextualTutorialDefinition_ItemTag : public UFortContextualTutorialDefinition
{
	struct FGameplayTag ItemTag; // 0x100 (0x4)
	struct FGameplayTag BlockedTag; // 0x104 (0x4)
	float RequirementsCheckDelay; // 0x108 (0x4)
	bool bUseCommitedCallback; // 0x10c (0x1)
	bool bUseActivatedCallback; // 0x10d (0x1)
	bool bRequireItemEquipped; // 0x10e (0x1)
	unsigned char unreflected_10f[0x1]; // 0x10f (0x1) 
	struct FGameplayTag CommitedAbilityTag; // 0x110 (0x4)
	unsigned char unreflected_114[0x4]; // 0x114 (0x4) 
	struct FGameplayTagContainer BlockedByTags; // 0x118 (0x20)
};

