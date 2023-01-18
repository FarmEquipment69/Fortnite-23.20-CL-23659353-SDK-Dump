// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce
// Size: 0x158
class UAbilityTask_ApplyRootMotionMoveToActorForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinished; // 0xb8 (0x10)
	unsigned char unreflected_c8[0x8]; // 0xc8 (0x8) 
	struct FVector StartLocation; // 0xd0 (0x18)
	struct FVector TargetLocation; // 0xe8 (0x18)
	class AActor* TargetActor; // 0x100 (0x8)
	struct FVector TargetLocationOffset; // 0x108 (0x18)
	enum ERootMotionMoveToActorTargetOffsetType OffsetAlignment; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	float Duration; // 0x124 (0x4)
	bool bDisableDestinationReachedInterrupt; // 0x128 (0x1)
	bool bSetNewMovementMode; // 0x129 (0x1)
	struct TEnumAsByte<EMovementMode> NewMovementMode; // 0x12a (0x1)
	bool bRestrictSpeedToExpected; // 0x12b (0x1)
	unsigned char unreflected_12c[0x4]; // 0x12c (0x4) 
	class UCurveVector* PathOffsetCurve; // 0x130 (0x8)
	class UCurveFloat* TimeMappingCurve; // 0x138 (0x8)
	class UCurveFloat* TargetLerpSpeedHorizontalCurve; // 0x140 (0x8)
	class UCurveFloat* TargetLerpSpeedVerticalCurve; // 0x148 (0x8)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnTargetActorSwapped (Underlying native function: OnTargetActorSwapped 0x6ae7cd4)
	void OnTargetActorSwapped(class AActor*& OriginalTarget, class AActor*& NewTarget); // (Final | Native | Public)

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.OnRep_TargetLocation (Underlying native function: OnRep_TargetLocation 0x6ae7bd8)
	void OnRepTargetLocation(); // (Final | Native | Protected)

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToTargetDataActorForce (Underlying native function: ApplyRootMotionMoveToTargetDataActorForce 0x6adbe14)
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToTargetDataActorForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, struct FGameplayAbilityTargetDataHandle& TargetDataHandle, int& TargetDataIndex, int& TargetActorIndex, struct FVector& TargetLocationOffset, enum ERootMotionMoveToActorTargetOffsetType& OffsetAlignment, float& Duration, class UCurveFloat*& TargetLerpSpeedHorizontal, class UCurveFloat*& TargetLerpSpeedVertical, bool& bSetNewMovementMode, struct TEnumAsByte<EMovementMode>& MovementMode, bool& bRestrictSpeedToExpected, class UCurveVector*& PathOffsetCurve, class UCurveFloat*& TimeMappingCurve, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish, bool& bDisableDestinationReachedInterrupt); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/GameplayAbilities.AbilityTask_ApplyRootMotionMoveToActorForce.ApplyRootMotionMoveToActorForce (Underlying native function: ApplyRootMotionMoveToActorForce 0x6adb5c4)
	static class UAbilityTask_ApplyRootMotionMoveToActorForce* ApplyRootMotionMoveToActorForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class AActor*& TargetActor, struct FVector& TargetLocationOffset, enum ERootMotionMoveToActorTargetOffsetType& OffsetAlignment, float& Duration, class UCurveFloat*& TargetLerpSpeedHorizontal, class UCurveFloat*& TargetLerpSpeedVertical, bool& bSetNewMovementMode, struct TEnumAsByte<EMovementMode>& MovementMode, bool& bRestrictSpeedToExpected, class UCurveVector*& PathOffsetCurve, class UCurveFloat*& TimeMappingCurve, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish, bool& bDisableDestinationReachedInterrupt); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

