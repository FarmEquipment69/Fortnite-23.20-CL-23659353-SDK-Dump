// ScriptStruct /Script/Engine.RepRootMotionMontage
// Size: 0xd0
struct FRepRootMotionMontage
{
	bool bIsActive; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	class UAnimMontage* AnimMontage; // 0x8 (0x8)
	float Position; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FVector_NetQuantize100 Location; // 0x18 (0x18)
	struct FRotator Rotation; // 0x30 (0x18)
	class UPrimitiveComponent* MovementBase; // 0x48 (0x8)
	struct FName MovementBaseBoneName; // 0x50 (0x4)
	bool bRelativePosition; // 0x54 (0x1)
	bool bRelativeRotation; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	struct FRootMotionSourceGroup AuthoritativeRootMotion; // 0x58 (0x48)
	struct FVector_NetQuantize10 Acceleration; // 0xa0 (0x18)
	struct FVector_NetQuantize10 LinearVelocity; // 0xb8 (0x18)
};

