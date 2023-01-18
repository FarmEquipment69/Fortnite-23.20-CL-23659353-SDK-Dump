// Class /Script/FortniteAI.FortBTDecorator_GameplayAbility_HasGameplayAbility
// Size: 0xe0
class UFortBTDecorator_GameplayAbility_HasGameplayAbility : public UBTDecorator
{
	struct FBlackboardKeySelector AbilityOwningActorKey; // 0x68 (0x28)
	struct FGameplayTagContainer GameplayAbilityTag; // 0x90 (0x20)
	struct FBlackboardKeySelector GameplayAbilityTagBlackboardKey; // 0xb0 (0x28)
	bool bOnlyTestActiveAbility; // 0xd8 (0x1)
	unsigned char padding_d9[0x7]; // 0xd9 (0x7)
};

