// Class /Script/FortniteGame.FortContextualTutorialDefinition_Consumable
// Size: 0x150
class UFortContextualTutorialDefinition_Consumable : public UFortContextualTutorialDefinition
{
	struct FGameplayTag ConsumableItemTag; // 0x100 (0x4)
	struct FGameplayTag BlockedTag; // 0x104 (0x4)
	float RequirementsCheckDelay; // 0x108 (0x4)
	bool bUseHealthRequirements; // 0x10c (0x1)
	unsigned char unreflected_10d[0x3]; // 0x10d (0x3) 
	float HealthRequirements; // 0x110 (0x4)
	bool bUseShieldRequirements; // 0x114 (0x1)
	unsigned char unreflected_115[0x3]; // 0x115 (0x3) 
	float ShieldRequirements; // 0x118 (0x4)
	bool bUseCommitedCallback; // 0x11c (0x1)
	bool bUseActivatedCallback; // 0x11d (0x1)
	unsigned char unreflected_11e[0x2]; // 0x11e (0x2) 
	struct FGameplayTag CommitedAbilityTag; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FGameplayTagContainer BlockedByTags; // 0x128 (0x20)
	bool bOnlyInterruptibleHealingItem; // 0x148 (0x1)
	unsigned char padding_149[0x7]; // 0x149 (0x7)
};

