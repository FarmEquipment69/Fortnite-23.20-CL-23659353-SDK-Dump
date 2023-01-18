// ScriptStruct /Script/FortniteGame.MeshSet
// Size: 0xf0
struct FMeshSet
{
	float Weight; // 0x0 (0x4)
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x4 (0x1)
	unsigned char bDoNotBlockBuildings; // 0x5 (0x1)
	unsigned char bDestroyOnPlayerBuildingPlacement; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	class UStaticMesh* BaseMesh; // 0x8 (0x8)
	class UParticleSystem* BreakEffect; // 0x10 (0x8)
	class UParticleSystem* DeathParticles; // 0x18 (0x8)
	struct FName DeathParticleSocketName; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	class USoundBase* DeathSound; // 0x28 (0x8)
	class UParticleSystem* ConstructedEffect; // 0x30 (0x8)
	struct TArray<struct FTaggedParticleSubstitution> SwapInParticles; // 0x38 (0x10)
	struct TArray<struct FTaggedSoundSubstitution> SwapInSounds; // 0x48 (0x10)
	struct TArray<struct FTaggedStaticMeshSubstitution> SwapInMeshes; // 0x58 (0x10)
	struct TArray<struct FTaggedInLightProperties> SwapInLightProperties; // 0x68 (0x10)
	struct FAddOrRemoveGameplayTags BuildingOwnedTagDelta; // 0x78 (0x40)
	class UStaticMesh* SearchedMesh; // 0xb8 (0x8)
	struct FCurveTableRowHandle SearchSpeed; // 0xc0 (0x10)
	float LootNoiseRange; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FVector LootSpawnLocation; // 0xd8 (0x18)
};

