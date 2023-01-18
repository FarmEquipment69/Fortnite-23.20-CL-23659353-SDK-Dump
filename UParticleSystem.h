// Class /Script/Engine.ParticleSystem
// Size: 0x158
class UParticleSystem : public UFXSystemAsset
{
	float UpdateTimeFPS; // 0x30 (0x4)
	float UpdateTimeDelta; // 0x34 (0x4)
	float WarmupTime; // 0x38 (0x4)
	float WarmupTickRate; // 0x3c (0x4)
	struct TArray<class UParticleEmitter*> Emitters; // 0x40 (0x10)
	class UParticleSystemComponent* PreviewComponent; // 0x50 (0x8)
	class UInterpCurveEdSetup* CurveEdSetup; // 0x58 (0x8)
	float LODDistanceCheckTime; // 0x60 (0x4)
	float MacroUVRadius; // 0x64 (0x4)
	struct TArray<float> LODDistances; // 0x68 (0x10)
	struct TArray<struct FParticleSystemLOD> LODSettings; // 0x78 (0x10)
	struct FBox FixedRelativeBoundingBox; // 0x88 (0x38)
	float SecondsBeforeInactive; // 0xc0 (0x4)
	float Delay; // 0xc4 (0x4)
	float DelayLow; // 0xc8 (0x4)
	unsigned char bOrientZAxisTowardCamera; // 0xcc (0x1)
	unsigned char bUseFixedRelativeBoundingBox; // 0xcc (0x1)
	unsigned char bShouldResetPeakCounts; // 0xcc (0x1)
	unsigned char bHasPhysics; // 0xcc (0x1)
	unsigned char bUseRealtimeThumbnail; // 0xcc (0x1)
	unsigned char ThumbnailImageOutOfDate; // 0xcc (0x1)
	unsigned char bUseDelayRange; // 0xcd (0x1)
	unsigned char bAllowManagedTicking; // 0xcd (0x1)
	unsigned char bAutoDeactivate; // 0xcd (0x1)
	unsigned char bRegenerateLODDuplicate; // 0xcd (0x1)
	struct TEnumAsByte<EParticleSystemUpdateMode> SystemUpdateMode; // 0xce (0x1)
	struct TEnumAsByte<ParticleSystemLODMethod> LODMethod; // 0xcf (0x1)
	enum EParticleSystemInsignificanceReaction InsignificantReaction; // 0xd0 (0x1)
	struct TEnumAsByte<EParticleSystemOcclusionBoundsMethod> OcclusionBoundsMethod; // 0xd1 (0x1)
	unsigned char unreflected_d2[0x1]; // 0xd2 (0x1) 
	enum EParticleSignificanceLevel MaxSignificanceLevel; // 0xd3 (0x1)
	uint32_t MinTimeBetweenTicks; // 0xd4 (0x4)
	float InsignificanceDelay; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct FVector MacroUVPosition; // 0xe0 (0x18)
	struct FBox CustomOcclusionBounds; // 0xf8 (0x38)
	struct TArray<struct FLODSoloTrack> SoloTracking; // 0x130 (0x10)
	struct TArray<struct FNamedEmitterMaterial> NamedMaterialSlots; // 0x140 (0x10)
	unsigned char padding_150[0x8]; // 0x150 (0x8)

	/* Functions */

	// Function /Script/Engine.ParticleSystem.ContainsEmitterType (Underlying native function: ContainsEmitterType 0x9c0ef70)
	bool ContainsEmitterType(class UClass*& TypeData); // (Final | Native | Public | BlueprintCallable)
};
