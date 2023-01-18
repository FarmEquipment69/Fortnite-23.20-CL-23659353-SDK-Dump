// Class /Script/GameplayAbilities.GameplayAbilityTargetActor
// Size: 0x3d0
class AGameplayAbilityTargetActor : public AActor
{
	bool ShouldProduceTargetDataOnServer; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	struct FGameplayAbilityTargetingLocationInfo StartLocation; // 0x290 (0xa0)
	unsigned char unreflected_330[0x30]; // 0x330 (0x30) 
	class APlayerController* PrimaryPC; // 0x360 (0x8)
	class UGameplayAbility* OwningAbility; // 0x368 (0x8)
	bool bDestroyOnConfirmation; // 0x370 (0x1)
	unsigned char unreflected_371[0x7]; // 0x371 (0x7) 
	class AActor* SourceActor; // 0x378 (0x8)
	struct FWorldReticleParameters ReticleParams; // 0x380 (0x18)
	class UClass* ReticleClass; // 0x398 (0x8)
	struct FGameplayTargetDataFilterHandle Filter; // 0x3a0 (0x10)
	bool bDebug; // 0x3b0 (0x1)
	unsigned char unreflected_3b1[0x17]; // 0x3b1 (0x17) 
	class UAbilitySystemComponent* GenericDelegateBoundASC; // 0x3c8 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.ConfirmTargeting (Underlying native function: ConfirmTargeting 0x2646488)
	void ConfirmTargeting(); // (Native | Public)

	// Function /Script/GameplayAbilities.GameplayAbilityTargetActor.CancelTargeting (Underlying native function: CancelTargeting 0x4866d04)
	void CancelTargeting(); // (Native | Public)
};

