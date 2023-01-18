// Class /Script/Engine.ParticleModuleBeamTarget
// Size: 0x148
class UParticleModuleBeamTarget : public UParticleModuleBeamBase
{
	struct TEnumAsByte<Beam2SourceTargetMethod> TargetMethod; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName TargetName; // 0x34 (0x4)
	struct FRawDistributionVector Target; // 0x38 (0x60)
	unsigned char bTargetAbsolute; // 0x98 (0x1)
	unsigned char bLockTarget; // 0x98 (0x1)
	unsigned char unreflected_99[0x3]; // 0x99 (0x3) 
	struct TEnumAsByte<Beam2SourceTargetTangentMethod> TargetTangentMethod; // 0x9c (0x1)
	unsigned char unreflected_9d[0x3]; // 0x9d (0x3) 
	struct FRawDistributionVector TargetTangent; // 0xa0 (0x60)
	unsigned char bLockTargetTangent; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FRawDistributionFloat TargetStrength; // 0x108 (0x30)
	unsigned char bLockTargetStength; // 0x138 (0x1)
	unsigned char unreflected_139[0x3]; // 0x139 (0x3) 
	float LockRadius; // 0x13c (0x4)
	unsigned char padding_140[0x8]; // 0x140 (0x8)
};

