// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce
// Size: 0x100
class UAbilityTask_ApplyRootMotionConstantForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	struct FVector WorldDirection; // 0xc8 (0x18)
	float Strength; // 0xe0 (0x4)
	float Duration; // 0xe4 (0x4)
	bool bIsAdditive; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x7]; // 0xe9 (0x7) 
	class UCurveFloat* StrengthOverTime; // 0xf0 (0x8)
	bool bEnableGravity; // 0xf8 (0x1)
	unsigned char padding_f9[0x7]; // 0xf9 (0x7)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionConstantForce.ApplyRootMotionConstantForce (Underlying native function: ApplyRootMotionConstantForce 0x6adaeb0)
	static class UAbilityTask_ApplyRootMotionConstantForce* ApplyRootMotionConstantForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FVector& WorldDirection, float& Strength, float& Duration, bool& bIsAdditive, class UCurveFloat*& StrengthOverTime, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish, bool& bEnableGravity); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

