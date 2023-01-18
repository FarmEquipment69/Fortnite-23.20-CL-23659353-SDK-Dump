// ScriptStruct /Script/GameplayAbilities.GameplayEffectRemovalInfo
// Size: 0x20
struct FGameplayEffectRemovalInfo
{
	bool bPrematureRemoval; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	int StackCount; // 0x4 (0x4)
	struct FGameplayEffectContextHandle EffectContext; // 0x8 (0x18)
};

