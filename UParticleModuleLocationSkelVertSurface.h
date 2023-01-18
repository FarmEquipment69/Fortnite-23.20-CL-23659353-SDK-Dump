// Class /Script/Engine.ParticleModuleLocationSkelVertSurface
// Size: 0xb0
class UParticleModuleLocationSkelVertSurface : public UParticleModuleLocationBase
{
	struct TEnumAsByte<ELocationSkelVertSurfaceSource> SourceType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector UniversalOffset; // 0x38 (0x18)
	unsigned char bUpdatePositionEachFrame; // 0x50 (0x1)
	unsigned char bOrientMeshEmitters; // 0x50 (0x1)
	unsigned char bInheritBoneVelocity; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float InheritVelocityScale; // 0x54 (0x4)
	struct FName SkelMeshActorParamName; // 0x58 (0x4)
	unsigned char unreflected_5c[0x4]; // 0x5c (0x4) 
	struct TArray<struct FName> ValidAssociatedBones; // 0x60 (0x10)
	unsigned char bEnforceNormalCheck; // 0x70 (0x1)
	unsigned char unreflected_71[0x7]; // 0x71 (0x7) 
	struct FVector NormalToCompare; // 0x78 (0x18)
	float NormalCheckToleranceDegrees; // 0x90 (0x4)
	float NormalCheckTolerance; // 0x94 (0x4)
	struct TArray<int> ValidMaterialIndices; // 0x98 (0x10)
	unsigned char bInheritVertexColor; // 0xa8 (0x1)
	unsigned char bInheritUV; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	uint32_t InheritUVChannel; // 0xac (0x4)
};

