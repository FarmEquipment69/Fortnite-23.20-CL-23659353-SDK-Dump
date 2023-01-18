// Class /Script/Engine.ParticleModuleBeamSource
// Size: 0x148
class UParticleModuleBeamSource : public UParticleModuleBeamBase
{
	struct TEnumAsByte<Beam2SourceTargetMethod> SourceMethod; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName SourceName; // 0x34 (0x4)
	unsigned char bSourceAbsolute; // 0x38 (0x1)
	unsigned char unreflected_39[0x7]; // 0x39 (0x7) 
	struct FRawDistributionVector Source; // 0x40 (0x60)
	unsigned char bLockSource; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct TEnumAsByte<Beam2SourceTargetTangentMethod> SourceTangentMethod; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x3]; // 0xa5 (0x3) 
	struct FRawDistributionVector SourceTangent; // 0xa8 (0x60)
	unsigned char bLockSourceTangent; // 0x108 (0x1)
	unsigned char unreflected_109[0x7]; // 0x109 (0x7) 
	struct FRawDistributionFloat SourceStrength; // 0x110 (0x30)
	unsigned char bLockSourceStength; // 0x140 (0x1)
	unsigned char padding_141[0x7]; // 0x141 (0x7)
};

