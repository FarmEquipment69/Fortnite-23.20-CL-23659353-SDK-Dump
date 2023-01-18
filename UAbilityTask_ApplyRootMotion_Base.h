// Class /Script/GameplayAbilities.AbilityTask_ApplyRootMotion_Base
// Size: 0xb8
class UAbilityTask_ApplyRootMotion_Base : public UAbilityTask
{
	struct FName ForceName; // 0x78 (0x4)
	enum ERootMotionFinishVelocityMode FinishVelocityMode; // 0x7c (0x1)
	unsigned char unreflected_7d[0x3]; // 0x7d (0x3) 
	struct FVector FinishSetVelocity; // 0x80 (0x18)
	float FinishClampVelocity; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	class UCharacterMovementComponent* MovementComponent; // 0xa0 (0x8)
	unsigned char padding_a8[0x10]; // 0xa8 (0x10)
};

