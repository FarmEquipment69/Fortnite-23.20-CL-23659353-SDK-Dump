// Class /Script/GameplayAbilities.AbilityTask_WaitOverlap
// Size: 0x88
class UAbilityTask_WaitOverlap : public UAbilityTask
{
	struct FMulticastInlineDelegate OnOverlap; // 0x78 (0x10)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.WaitForOverlap (Underlying native function: WaitForOverlap 0x6aecb70)
	static class UAbilityTask_WaitOverlap* WaitForOverlap(class UGameplayAbility*& OwningAbility); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_WaitOverlap.OnHitCallback (Underlying native function: OnHitCallback 0x6ae7538)
	void OnHitCallback(class UPrimitiveComponent*& HitComp, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (Final | Native | Public | HasOutParms | HasDefaults)
};

