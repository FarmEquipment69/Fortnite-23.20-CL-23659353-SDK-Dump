// Class /Script/Engine.ParticleModuleLocationEmitter
// Size: 0x48
class UParticleModuleLocationEmitter : public UParticleModuleLocationBase
{
	struct FName EmitterName; // 0x30 (0x4)
	struct TEnumAsByte<ELocationEmitterSelectionMethod> SelectionMethod; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	unsigned char InheritSourceVelocity; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float InheritSourceVelocityScale; // 0x3c (0x4)
	unsigned char bInheritSourceRotation; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float InheritSourceRotationScale; // 0x44 (0x4)
};

