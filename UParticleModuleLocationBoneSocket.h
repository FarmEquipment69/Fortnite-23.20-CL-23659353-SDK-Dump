// Class /Script/Engine.ParticleModuleLocationBoneSocket
// Size: 0x78
class UParticleModuleLocationBoneSocket : public UParticleModuleLocationBase
{
	struct TEnumAsByte<ELocationBoneSocketSource> SourceType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector UniversalOffset; // 0x38 (0x18)
	struct TArray<struct FLocationBoneSocketInfo> SourceLocations; // 0x50 (0x10)
	struct TEnumAsByte<ELocationBoneSocketSelectionMethod> SelectionMethod; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	unsigned char bUpdatePositionEachFrame; // 0x64 (0x1)
	unsigned char bOrientMeshEmitters; // 0x64 (0x1)
	unsigned char bInheritBoneVelocity; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	float InheritVelocityScale; // 0x68 (0x4)
	struct FName SkelMeshActorParamName; // 0x6c (0x4)
	int NumPreSelectedIndices; // 0x70 (0x4)
	unsigned char padding_74[0x4]; // 0x74 (0x4)
};

