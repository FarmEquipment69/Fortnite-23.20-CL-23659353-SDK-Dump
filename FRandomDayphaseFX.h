// ScriptStruct /Script/FortniteGame.RandomDayphaseFX
// Size: 0x40
struct FRandomDayphaseFX
{
	class UParticleSystem* ParticleSystem; // 0x0 (0x8)
	struct TArray<class UParticleSystem*> AltParticleSystems; // 0x8 (0x10)
	struct TArray<enum EFortDayPhase> RequiredDayphases; // 0x18 (0x10)
	float ChanceToSpawnFX; // 0x28 (0x4)
	struct TEnumAsByte<EDetailMode> DetailMode; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	float MaxDrawDistance; // 0x30 (0x4)
	bool bRandomSelectionAlreadyHappened; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	class UParticleSystemComponent* SpawnedComponent; // 0x38 (0x8)
};

