// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce
// Size: 0x128
class UAbilityTask_ApplyRootMotionRadialForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	struct FVector Location; // 0xc8 (0x18)
	class AActor* LocationActor; // 0xe0 (0x8)
	float Strength; // 0xe8 (0x4)
	float Duration; // 0xec (0x4)
	float Radius; // 0xf0 (0x4)
	bool bIsPush; // 0xf4 (0x1)
	bool bIsAdditive; // 0xf5 (0x1)
	bool bNoZForce; // 0xf6 (0x1)
	unsigned char unreflected_f7[0x1]; // 0xf7 (0x1) 
	class UCurveFloat* StrengthDistanceFalloff; // 0xf8 (0x8)
	class UCurveFloat* StrengthOverTime; // 0x100 (0x8)
	bool bUseFixedWorldDirection; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct FRotator FixedWorldDirection; // 0x110 (0x18)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionRadialForce.ApplyRootMotionRadialForce (Underlying native function: ApplyRootMotionRadialForce 0x6adc450)
	static class UAbilityTask_ApplyRootMotionRadialForce* ApplyRootMotionRadialForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FVector& Location, class AActor*& LocationActor, float& Strength, float& Duration, float& Radius, bool& bIsPush, bool& bIsAdditive, bool& bNoZForce, class UCurveFloat*& StrengthDistanceFalloff, class UCurveFloat*& StrengthOverTime, bool& bUseFixedWorldDirection, struct FRotator& FixedWorldDirection, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

