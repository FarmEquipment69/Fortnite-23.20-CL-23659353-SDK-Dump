// Class /Script/Engine.ParticleModuleTrailSource
// Size: 0x88
class UParticleModuleTrailSource : public UParticleModuleTrailBase
{
	struct TEnumAsByte<ETrail2SourceMethod> SourceMethod; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	struct FName SourceName; // 0x34 (0x4)
	struct FRawDistributionFloat SourceStrength; // 0x38 (0x30)
	unsigned char bLockSourceStength; // 0x68 (0x1)
	unsigned char unreflected_69[0x3]; // 0x69 (0x3) 
	int SourceOffsetCount; // 0x6c (0x4)
	struct TArray<struct FVector> SourceOffsetDefaults; // 0x70 (0x10)
	struct TEnumAsByte<EParticleSourceSelectionMethod> SelectionMethod; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	unsigned char bInheritRotation; // 0x84 (0x1)
	unsigned char padding_85[0x3]; // 0x85 (0x3)
};

