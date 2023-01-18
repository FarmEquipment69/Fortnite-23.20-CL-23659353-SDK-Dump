// Class /Script/FortniteGame.FortAbilityTask_ApplyRootMotionFollowCharacterRotation
// Size: 0xe8
class UFortAbilityTask_ApplyRootMotionFollowCharacterRotation : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	float Strength; // 0xc8 (0x4)
	float Duration; // 0xcc (0x4)
	bool bIsAdditive; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	class UCurveFloat* StrengthOverTime; // 0xd8 (0x8)
	bool bEnableGravity; // 0xe0 (0x1)
	unsigned char padding_e1[0x7]; // 0xe1 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_ApplyRootMotionFollowCharacterRotation.ApplyRootMotionFollowCharacterRotation (Underlying native function: ApplyRootMotionFollowCharacterRotation 0x813e9cc)
	static class UFortAbilityTask_ApplyRootMotionFollowCharacterRotation* ApplyRootMotionFollowCharacterRotation(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, float& StrengthInWater, float& Duration, bool& bIsAdditive, class UCurveFloat*& StrengthOverTimeOnLand, enum ERootMotionFinishVelocityMode& VelocityOnFinishMode, struct FVector& SetVelocityOnFinish, float& ClampVelocityOnFinish, bool& bEnableGravity); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

