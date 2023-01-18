// Class /Script/Engine.ParticleLODLevel
// Size: 0xb8
class UParticleLODLevel : public UObject
{
	int Level; // 0x28 (0x4)
	unsigned char bEnabled; // 0x2c (0x1)
	unsigned char unreflected_2d[0x3]; // 0x2d (0x3) 
	class UParticleModuleRequired* RequiredModule; // 0x30 (0x8)
	struct TArray<class UParticleModule*> Modules; // 0x38 (0x10)
	class UParticleModuleTypeDataBase* TypeDataModule; // 0x48 (0x8)
	class UParticleModuleSpawn* SpawnModule; // 0x50 (0x8)
	class UParticleModuleEventGenerator* EventGenerator; // 0x58 (0x8)
	struct TArray<class UParticleModuleSpawnBase*> SpawningModules; // 0x60 (0x10)
	struct TArray<class UParticleModule*> SpawnModules; // 0x70 (0x10)
	struct TArray<class UParticleModule*> UpdateModules; // 0x80 (0x10)
	struct TArray<class UParticleModuleOrbit*> OrbitModules; // 0x90 (0x10)
	struct TArray<class UParticleModuleEventReceiverBase*> EventReceiverModules; // 0xa0 (0x10)
	unsigned char ConvertedModules; // 0xb0 (0x1)
	unsigned char unreflected_b1[0x3]; // 0xb1 (0x3) 
	int PeakActiveParticles; // 0xb4 (0x4)
};

