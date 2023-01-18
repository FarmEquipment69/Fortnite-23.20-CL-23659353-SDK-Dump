// Class /Script/FortniteGame.FortAbilityTask_ApplyRootMotionFallingBoostForce
// Size: 0xe8
class UFortAbilityTask_ApplyRootMotionFallingBoostForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	float VerticalImpulse; // 0xc8 (0x4)
	float Duration; // 0xcc (0x4)
	float GravityScalar; // 0xd0 (0x4)
	float MaxAcceleration; // 0xd4 (0x4)
	float LateralFriction; // 0xd8 (0x4)
	float MaxLateralSpeed; // 0xdc (0x4)
	unsigned char padding_e0[0x8]; // 0xe0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_ApplyRootMotionFallingBoostForce.OnLandedCallback (Underlying native function: OnLandedCallback 0x814146c)
	void OnLandedCallback(struct FHitResult& Hit); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortAbilityTask_ApplyRootMotionFallingBoostForce.ApplyRootMotionFallingBoostForce (Underlying native function: ApplyRootMotionFallingBoostForce 0x813e778)
	static class UFortAbilityTask_ApplyRootMotionFallingBoostForce* ApplyRootMotionFallingBoostForce(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, float& VerticalImpulse, float& Duration, float& GravityScalar, float& MaxAcceleration, float& LateralFriction, float& MaxLateralSpeed); // (Final | Native | Static | Public | BlueprintCallable)
};

