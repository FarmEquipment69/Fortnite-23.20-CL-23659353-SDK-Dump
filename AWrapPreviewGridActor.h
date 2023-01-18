// Class /Script/FortniteGame.WrapPreviewGridActor
// Size: 0x3a0
class AWrapPreviewGridActor : public AInfo
{
	class UAthenaItemWrapDefinition* WrapToApply; // 0x288 (0x8)
	enum EItemWrapMaterialType MaterialTypeForRawMeshes; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	struct FVector SpawnAxisX; // 0x298 (0x18)
	struct FVector SpawnAxisY; // 0x2b0 (0x18)
	int WidthInItems; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	struct FVector2D SpawnSpacing; // 0x2d0 (0x10)
	struct FRotator SpawnRotation; // 0x2e0 (0x18)
	struct FVector IconOffset; // 0x2f8 (0x18)
	bool bScanForWeapons; // 0x310 (0x1)
	bool bShowRangedWeapons; // 0x311 (0x1)
	bool bShowMeleeWeapons; // 0x312 (0x1)
	bool bExcludePrototypeRangedWeapons; // 0x313 (0x1)
	bool bFilterOutRarityDupesForRangedWeapons; // 0x314 (0x1)
	bool bFilterOutTierDupesForWeapons; // 0x315 (0x1)
	bool bFilterOutCraftingMaterialDupesForWeapons; // 0x316 (0x1)
	enum EWrapPreviewGridLockerMode LockerFilterMode; // 0x317 (0x1)
	bool bShowOnlyItemsThatDontHaveWrapLockerSlot; // 0x318 (0x1)
	bool bShowWrapMatchIcon; // 0x319 (0x1)
	bool bHasSectionLimit; // 0x31a (0x1)
	unsigned char unreflected_31b[0x1]; // 0x31b (0x1) 
	int MaterialSectionMask; // 0x31c (0x4)
	struct TArray<struct FName> ComponentNameAllowList; // 0x320 (0x10)
	struct FDirectoryPath RangedWeaponPath; // 0x330 (0x10)
	struct TArray<class UClass*> ListOfActorsToSpawn; // 0x340 (0x10)
	struct TArray<class USkeletalMesh*> ListOfMeshesToSpawn; // 0x350 (0x10)
	struct TArray<class AActor*> SpawnedActors; // 0x360 (0x10)
	struct TArray<class UTexture2D*> LockerCategoryMarkers; // 0x370 (0x10)
	class UTexture2D* FailedToMatchLockerMarker; // 0x380 (0x8)
	float StatusIconSize; // 0x388 (0x4)
	bool bStatusIconScreenSizeScaled; // 0x38c (0x1)
	unsigned char unreflected_38d[0x3]; // 0x38d (0x3) 
	struct TArray<struct FMcpVariantChannelInfo> VariantData; // 0x390 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.WrapPreviewGridActor.SetWrap (Underlying native function: SetWrap 0x884675c)
	void SetWrap(class UAthenaItemWrapDefinition*& NewWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.WrapPreviewGridActor.GetMeshComponentNames (Underlying native function: GetMeshComponentNames 0x88434b0)
	static struct TArray<struct FName> GetMeshComponentNames(); // (Final | Native | Static | Private)
};

