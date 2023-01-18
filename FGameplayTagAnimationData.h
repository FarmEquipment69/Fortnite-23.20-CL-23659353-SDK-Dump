// ScriptStruct /Script/FortniteGame.GameplayTagAnimationData
// Size: 0x50
struct FGameplayTagAnimationData
{
	struct FGameplayTagContainer GameplayTags; // 0x0 (0x20)
	struct TEnumAsByte<EFortCustomGender> ValidGenders; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TWeakObjectPtr<class UAnimMontage> AnimMontage; // 0x28 (0x28)
};

