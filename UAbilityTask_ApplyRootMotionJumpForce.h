// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce
// Size: 0x120
class UAbilityTask_ApplyRootMotionJumpForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnLanded; // 0xc8 (0x10)
	struct FRotator Rotation; // 0xd8 (0x18)
	float Distance; // 0xf0 (0x4)
	float Height; // 0xf4 (0x4)
	float Duration; // 0xf8 (0x4)
	float MinimumLandedTriggerTime; // 0xfc (0x4)
	bool bFinishOnLanded; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	class UCurveVector* PathOffsetCurve; // 0x108 (0x8)
	class UCurveFloat* TimeMappingCurve; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.OnLandedCallback (Underlying native function: OnLandedCallback 0x6ae77d0)
	void OnLandedCallback(struct FHitResult& Hit); // (Final | Native | Public | HasOutParms)

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.Finish (Underlying native function: Finish 0x6ae0b24)
	void Finish(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionJumpForce.ApplyRootMotionJumpForce (Underlying native function: ApplyRootMotionJumpForce 0x6adb1ec)
	static class UAbilityTask_ApplyRootMotionJumpForce* ApplyRootMotionJumpForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FRotator& Rotation, float& Distance, float& Height, float& Duration, float& MinimumLandedTriggerTime, bool& bFinishOnLanded, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish, class UCurveVector*& PathOffsetCurve, class UCurveFloat*& TimeMappingCurve); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

