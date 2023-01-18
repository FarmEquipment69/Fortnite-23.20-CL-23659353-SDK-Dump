// Class /Script/Engine.ParticleModuleTypeDataAnimTrail
// Size: 0x48
class UParticleModuleTypeDataAnimTrail : public UParticleModuleTypeDataBase
{
	unsigned char bDeadTrailsOnDeactivate; // 0x30 (0x1)
	unsigned char bEnablePreviousTangentRecalculation; // 0x30 (0x1)
	unsigned char bTangentRecalculationEveryFrame; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	float TilingDistance; // 0x34 (0x4)
	float DistanceTessellationStepSize; // 0x38 (0x4)
	float TangentTessellationStepSize; // 0x3c (0x4)
	float WidthTessellationStepSize; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

