// ScriptStruct /Script/GameplayAbilities.ActiveGameplayEffect
// Size: 0x358
struct FActiveGameplayEffect : FFastArraySerializerItem
{
	unsigned char unreflected_c[0xc]; // 0xc (0xc) 
	struct FGameplayEffectSpec Spec; // 0x18 (0x298)
	struct FPredictionKey PredictionKey; // 0x2b0 (0x18)
	float StartServerWorldTime; // 0x2c8 (0x4)
	float CachedStartServerWorldTime; // 0x2cc (0x4)
	float StartWorldTime; // 0x2d0 (0x4)
	bool bIsInhibited; // 0x2d4 (0x1)
	unsigned char padding_2d5[0x83]; // 0x2d5 (0x83)
};

