// Class /Script/GameplayAbilities.GameplayAbility_Montage
// Size: 0x3e8
class UGameplayAbility_Montage : public UGameplayAbility
{
	class UAnimMontage* MontageToPlay; // 0x3b8 (0x8)
	float PlayRate; // 0x3c0 (0x4)
	struct FName SectionName; // 0x3c4 (0x4)
	struct TArray<class UClass*> GameplayEffectClassesWhileAnimating; // 0x3c8 (0x10)
	struct TArray<class UGameplayEffect*> GameplayEffectsWhileAnimating; // 0x3d8 (0x10)
};

