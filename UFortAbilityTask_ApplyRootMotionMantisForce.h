// Class /Script/MantisRuntime.FortAbilityTask_ApplyRootMotionMantisForce
// Size: 0x100
class UFortAbilityTask_ApplyRootMotionMantisForce : public UAbilityTask_ApplyRootMotion_Base
{
	struct FMulticastInlineDelegate OnFinish; // 0xb8 (0x10)
	float Duration; // 0xc8 (0x4)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	class UAnimMontage* TechniqueMontage; // 0xd0 (0x8)
	struct FFortMantisRootMotionWarpInfo WarpInfo; // 0xd8 (0x28)
};

