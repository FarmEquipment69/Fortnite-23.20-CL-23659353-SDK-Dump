// Class /Script/Engine.ParticleModuleBeamModifier
// Size: 0x138
class UParticleModuleBeamModifier : public UParticleModuleBeamBase
{
	struct TEnumAsByte<BeamModifierType> ModifierType; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FBeamModifierOptions PositionOptions; // 0x34 (0x4)
	struct FRawDistributionVector Position; // 0x38 (0x60)
	struct FBeamModifierOptions TangentOptions; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	struct FRawDistributionVector Tangent; // 0xa0 (0x60)
	unsigned char bAbsoluteTangent; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	struct FBeamModifierOptions StrengthOptions; // 0x104 (0x4)
	struct FRawDistributionFloat Strength; // 0x108 (0x30)
};

