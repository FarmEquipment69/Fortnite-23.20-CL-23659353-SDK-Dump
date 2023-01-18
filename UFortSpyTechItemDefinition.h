// Class /Script/FortniteGame.FortSpyTechItemDefinition
// Size: 0x500
class UFortSpyTechItemDefinition : public UFortAccountItemDefinition
{
	struct TWeakObjectPtr<class UFortAbilitySet> AbilitySetSoftRef; // 0x420 (0x28)
	struct TWeakObjectPtr<class UClass> PerkGameplayEffectSoftRef; // 0x448 (0x28)
	struct FGameplayTagContainer ItemTags; // 0x470 (0x20)
	struct FGameplayTag ItemTag; // 0x490 (0x4)
	unsigned char unreflected_494[0x4]; // 0x494 (0x4) 
	struct FGameplayTagContainer ExclusionTags; // 0x498 (0x20)
	struct FGameplayTagContainer FilterTags; // 0x4b8 (0x20)
	struct FScalableFloat IsEnabledAsFloat; // 0x4d8 (0x28)
};

