// Class /Script/Engine.ParticleModuleTypeDataBeam2
// Size: 0x148
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
	struct TEnumAsByte<EBeam2Method> BeamMethod; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	int TextureTile; // 0x34 (0x4)
	float TextureTileDistance; // 0x38 (0x4)
	int Sheets; // 0x3c (0x4)
	int MaxBeamCount; // 0x40 (0x4)
	float Speed; // 0x44 (0x4)
	int InterpolationPoints; // 0x48 (0x4)
	unsigned char bAlwaysOn; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	int UpVectorStepSize; // 0x50 (0x4)
	struct FName BranchParentName; // 0x54 (0x4)
	struct FRawDistributionFloat Distance; // 0x58 (0x30)
	struct TEnumAsByte<EBeamTaperMethod> TaperMethod; // 0x88 (0x1)
	unsigned char unreflected_89[0x7]; // 0x89 (0x7) 
	struct FRawDistributionFloat TaperFactor; // 0x90 (0x30)
	struct FRawDistributionFloat TaperScale; // 0xc0 (0x30)
	unsigned char RenderGeometry; // 0xf0 (0x1)
	unsigned char RenderDirectLine; // 0xf0 (0x1)
	unsigned char RenderLines; // 0xf0 (0x1)
	unsigned char RenderTessellation; // 0xf0 (0x1)
	unsigned char padding_f1[0x57]; // 0xf1 (0x57)
};

