// DelegateFunction /Script/SpecialEventGameplayRuntime.OnSpecialRelevancyDamage__DelegateSignature
// Size: 0x120
struct FOnSpecialRelevancyDamage__DelegateSignature
{
	class AFortPlayerState* InstigatingPlayerState; // 0x0 (0x8)
	struct FGameplayEffectContextHandle EffectContext; // 0x8 (0x18)
	struct FGameplayCueParameters GameplayCueParams; // 0x20 (0xd0)
	int RelevancyGroupIndex; // 0xf0 (0x4)
	float DealtDamage; // 0xf4 (0x4)
	struct FGameplayTagContainer DeathTags; // 0xf8 (0x20)
	bool bKilled; // 0x118 (0x1)
	unsigned char padding_119[0x7]; // 0x119 (0x7)
};

