// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce
// Size: 0x120
class UAbilityTask_ApplyRootMotionMoveToForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnTimedOut; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnTimedOutAndDestinationReached; // 0xc8 (0x10)
	struct FVector StartLocation; // 0xd8 (0x18)
	struct FVector TargetLocation; // 0xf0 (0x18)
	float Duration; // 0x108 (0x4)
	bool bSetNewMovementMode; // 0x10c (0x1)
	struct TEnumAsByte<EMovementMode> NewMovementMode; // 0x10d (0x1)
	bool bRestrictSpeedToExpected; // 0x10e (0x1)
	unsigned char unreflected_10f[0x1]; // 0x10f (0x1) 
	class UCurveVector* PathOffsetCurve; // 0x110 (0x8)
	unsigned char padding_118[0x8]; // 0x118 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToForce.ApplyRootMotionMoveToForce (Underlying native function: ApplyRootMotionMoveToForce 0x6adbac8)
	static class UAbilityTask_ApplyRootMotionMoveToForce* ApplyRootMotionMoveToForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FVector& TargetLocation, float& Duration, bool& bSetNewMovementMode, struct TEnumAsByte<EMovementMode>& MovementMode, bool& bRestrictSpeedToExpected, class UCurveVector*& PathOffsetCurve, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish); // (Final | Native | Static | Private | HasDefaults | BlueprintCallable)
};

