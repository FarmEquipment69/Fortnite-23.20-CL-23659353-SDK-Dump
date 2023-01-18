// Class /Script/FortniteGame.FortPickupsParent
// Size: 0x3f8
class AFortPickupsParent : public AFortPickupEffect
{
	struct TArray<class UMaterialInstanceDynamic*> MIDs; // 0x2f8 (0x10)
	struct TArray<class UMaterialInterface*> CurrentMaterials; // 0x308 (0x10)
	struct TArray<class UMaterialInterface*> CurrentParentMaterials; // 0x318 (0x10)
	class UMaterialInterface* DefaultBaseMaterial; // 0x328 (0x8)
	class UMaterialInterface* LootGiftMaterialSkelMesh; // 0x330 (0x8)
	class UMaterialInterface* LootGiftMaterialStaticMesh; // 0x338 (0x8)
	bool bIsBluGloPickup; // 0x340 (0x1)
	bool bIsSkeletalMeshComponent; // 0x341 (0x1)
	bool bHasUniqueMaterialIds; // 0x342 (0x1)
	bool bActivateRarityParticleSystems; // 0x343 (0x1)
	bool bIsLootGiftForOthers; // 0x344 (0x1)
	unsigned char unreflected_345[0x3]; // 0x345 (0x3) 
	struct TArray<struct FName> NamesOfMaterialsThatShouldNotBeReparented; // 0x348 (0x10)
	float CurrentViewDistance; // 0x358 (0x4)
	int PickupRarityLevel; // 0x35c (0x4)
	struct FLinearColor PickupRarityColor; // 0x360 (0x10)
	struct TArray<float> SweepBrightness; // 0x370 (0x10)
	struct TArray<float> SweepSpeed; // 0x380 (0x10)
	float CullDistanceStW; // 0x390 (0x4)
	float CullDistanceAthena; // 0x394 (0x4)
	float CullDistanceBacchus; // 0x398 (0x4)
	float BackgroundParticleSystemComponentCullDistance; // 0x39c (0x4)
	struct FVector MeshPivotOffset; // 0x3a0 (0x18)
	struct FRotator MeshRotationBias; // 0x3b8 (0x18)
	unsigned char unreflected_3d0[0x8]; // 0x3d0 (0x8) 
	class USkeletalMeshComponent* SkelMeshComponent; // 0x3d8 (0x8)
	class UStaticMeshComponent* StaticMeshComponent; // 0x3e0 (0x8)
	class UPrimitiveComponent* MeshPrimitiveComponent; // 0x3e8 (0x8)
	class UParticleSystemComponent* BackgroundParticleSystemComponent; // 0x3f0 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPickupsParent.SetupStretchMIDsInternal (Underlying native function: SetupStretchMIDsInternal 0x8a793f0)
	void SetupStretchMIDsInternal(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupsParent.SetupPickupMesh (Underlying native function: SetupPickupMesh 0x11bc54c)
	class UPrimitiveComponent* SetupPickupMesh(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupsParent.SetupPickupLight (Underlying native function: SetupPickupLight 0x1313f94)
	void SetupPickupLight(class UPrimitiveComponent*& PrimitiveComponent, class USpotLightComponent*& SpotLightComponent, struct FLinearColor& LightColor); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupsParent.SetRarityColor (Underlying native function: SetRarityColor 0x14b96d8)
	void SetRarityColor(struct TArray<struct FLinearColor>& RarityColors); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPickupsParent.GetCosmeticPickupItem (Underlying native function: GetCosmeticPickupItem 0x8a781e4)
	class UFortItem* GetCosmeticPickupItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortPickupsParent.GetClientCosmeticRarity (Underlying native function: GetClientCosmeticRarity 0x8a780fc)
	enum EFortRarity GetClientCosmeticRarity(class UFortItem*& Item); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

