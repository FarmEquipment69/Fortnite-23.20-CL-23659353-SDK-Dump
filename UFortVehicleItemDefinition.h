// Class /Script/FortniteGame.FortVehicleItemDefinition
// Size: 0xaf0
class UFortVehicleItemDefinition : public UFortWorldItemDefinition
{
	struct FScalableFloat VehicleMinSpawnPercent; // 0x8e8 (0x28)
	struct FScalableFloat VehicleMaxSpawnPercent; // 0x910 (0x28)
	struct FScalableFloat MaxNumberCanSpawn; // 0x938 (0x28)
	struct FScalableFloat MinPercentWithGas; // 0x960 (0x28)
	struct FScalableFloat MaxPercentWithGas; // 0x988 (0x28)
	struct FScalableFloat MinPercentInoperable; // 0x9b0 (0x28)
	struct FScalableFloat MaxPercentInoperable; // 0x9d8 (0x28)
	struct FTransform WrapPreviewTransform; // 0xa00 (0x60)
	int WrapPreviewSectionMask; // 0xa60 (0x4)
	unsigned char bUseInWrapPreviewList; // 0xa64 (0x1)
	unsigned char unreflected_a65[0x3]; // 0xa65 (0x3) 
	struct TWeakObjectPtr<class UClass> VehicleActorClass; // 0xa68 (0x28)
	struct TWeakObjectPtr<class USkeletalMesh> PreviewSkeletalMesh; // 0xa90 (0x28)
	struct TArray<struct FString> SpawnVehicleNames; // 0xab8 (0x10)
	float MaxSpawnDistance; // 0xac8 (0x4)
	unsigned char unreflected_acc[0x4]; // 0xacc (0x4) 
	struct FGameplayTagContainer SpawnWithMods; // 0xad0 (0x20)
};

