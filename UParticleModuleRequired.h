// Class /Script/Engine.ParticleModuleRequired
// Size: 0x178
class UParticleModuleRequired : public UParticleModule
{
	class UMaterialInterface* Material; // 0x30 (0x8)
	float MinFacingCameraBlendDistance; // 0x38 (0x4)
	float MaxFacingCameraBlendDistance; // 0x3c (0x4)
	struct FVector EmitterOrigin; // 0x40 (0x18)
	struct FRotator EmitterRotation; // 0x58 (0x18)
	struct TEnumAsByte<EParticleScreenAlignment> ScreenAlignment; // 0x70 (0x1)
	unsigned char bUseLocalSpace; // 0x71 (0x1)
	unsigned char bKillOnDeactivate; // 0x71 (0x1)
	unsigned char bKillOnCompleted; // 0x71 (0x1)
	struct TEnumAsByte<EParticleSortMode> SortMode; // 0x72 (0x1)
	unsigned char bUseLegacyEmitterTime; // 0x73 (0x1)
	unsigned char bRemoveHMDRoll; // 0x73 (0x1)
	unsigned char bSupportLargeWorldCoordinates; // 0x73 (0x1)
	unsigned char bEmitterDurationUseRange; // 0x73 (0x1)
	float EmitterDuration; // 0x74 (0x4)
	struct FRawDistributionFloat SpawnRate; // 0x78 (0x30)
	struct TArray<struct FParticleBurst> BurstList; // 0xa8 (0x10)
	float EmitterDelay; // 0xb8 (0x4)
	float EmitterDelayLow; // 0xbc (0x4)
	unsigned char bDelayFirstLoopOnly; // 0xc0 (0x1)
	struct TEnumAsByte<EParticleSubUVInterpMethod> InterpolationMethod; // 0xc1 (0x1)
	unsigned char bScaleUV; // 0xc2 (0x1)
	unsigned char bEmitterDelayUseRange; // 0xc2 (0x1)
	struct TEnumAsByte<EParticleBurstMethod> ParticleBurstMethod; // 0xc3 (0x1)
	unsigned char bOverrideSystemMacroUV; // 0xc4 (0x1)
	unsigned char bUseMaxDrawCount; // 0xc4 (0x1)
	struct TEnumAsByte<EOpacitySourceMode> OpacitySourceMode; // 0xc5 (0x1)
	struct TEnumAsByte<EEmitterNormalsMode> EmitterNormalsMode; // 0xc6 (0x1)
	unsigned char bOrbitModuleAffectsVelocityAlignment; // 0xc7 (0x1)
	int SubImagesHorizontal; // 0xc8 (0x4)
	int SubImagesVertical; // 0xcc (0x4)
	float RandomImageTime; // 0xd0 (0x4)
	int RandomImageChanges; // 0xd4 (0x4)
	struct FVector MacroUVPosition; // 0xd8 (0x18)
	float MacroUVRadius; // 0xf0 (0x4)
	enum EParticleUVFlipMode UVFlippingMode; // 0xf4 (0x1)
	struct TEnumAsByte<ESubUVBoundingVertexCount> BoundingMode; // 0xf5 (0x1)
	unsigned char bDurationRecalcEachLoop; // 0xf6 (0x1)
	unsigned char unreflected_f7[0x1]; // 0xf7 (0x1) 
	struct FVector NormalsSphereCenter; // 0xf8 (0x18)
	float AlphaThreshold; // 0x110 (0x4)
	int EmitterLoops; // 0x114 (0x4)
	class UTexture2D* CutoutTexture; // 0x118 (0x8)
	int MaxDrawCount; // 0x120 (0x4)
	float EmitterDurationLow; // 0x124 (0x4)
	struct FVector NormalsCylinderDirection; // 0x128 (0x18)
	struct TArray<struct FName> NamedMaterialOverrides; // 0x140 (0x10)
	unsigned char padding_150[0x28]; // 0x150 (0x28)
};

