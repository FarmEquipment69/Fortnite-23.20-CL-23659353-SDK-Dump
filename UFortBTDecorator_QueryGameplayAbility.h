// Class /Script/FortniteAI.FortBTDecorator_QueryGameplayAbility
// Size: 0x100
class UFortBTDecorator_QueryGameplayAbility : public UBTDecorator
{
	struct FGameplayTagContainer GameplayAbilityTag; // 0x68 (0x20)
	struct FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0x88 (0x28)
	struct FBlackboardKeySelector Target; // 0xb0 (0x28)
	struct FGameplayTagContainer ActiveAbilityTagsToSkipTesting; // 0xd8 (0x20)
	bool bUseTarget; // 0xf8 (0x1)
	bool bUseBlackboardTag; // 0xf9 (0x1)
	unsigned char padding_fa[0x6]; // 0xfa (0x6)
};

