// Class /Script/Engine.SkeletalMesh
// Size: 0x4e0
class USkeletalMesh : public USkinnedAsset
{
	unsigned char unreflected_d8[0x20]; // 0xd8 (0x20) 
	class USkeleton* Skeleton; // 0xf8 (0x8)
	struct FBoxSphereBounds ImportedBounds; // 0x100 (0x38)
	struct FBoxSphereBounds ExtendedBounds; // 0x138 (0x38)
	struct FVector PositiveBoundsExtension; // 0x170 (0x18)
	struct FVector NegativeBoundsExtension; // 0x188 (0x18)
	struct TArray<struct FSkeletalMaterial> Materials; // 0x1a0 (0x10)
	struct TArray<struct FBoneMirrorInfo*> SkelMirrorTable; // 0x1b0 (0x10)
	struct TArray<struct FSkeletalMeshLODInfo> LODInfo; // 0x1c0 (0x10)
	unsigned char unreflected_1d0[0x50]; // 0x1d0 (0x50) 
	struct FPerQualityLevelInt MinQualityLevelLOD; // 0x220 (0x68)
	struct FPerPlatformInt MinLOD; // 0x288 (0x4)
	struct FPerPlatformBool DisableBelowMinLodStripping; // 0x28c (0x1)
	struct TEnumAsByte<EAxis> SkelMirrorAxis; // 0x28d (0x1)
	struct TEnumAsByte<EAxis> SkelMirrorFlipAxis; // 0x28e (0x1)
	unsigned char bUseFullPrecisionUVs; // 0x28f (0x1)
	unsigned char bUseHighPrecisionTangentBasis; // 0x28f (0x1)
	unsigned char bHasBeenSimplified; // 0x28f (0x1)
	unsigned char bHasVertexColors; // 0x28f (0x1)
	unsigned char bEnablePerPolyCollision; // 0x28f (0x1)
	class UBodySetup* BodySetup; // 0x290 (0x8)
	class UPhysicsAsset* PhysicsAsset; // 0x298 (0x8)
	class UPhysicsAsset* ShadowPhysicsAsset; // 0x2a0 (0x8)
	struct TArray<class UNodeMappingContainer*> NodeMappingData; // 0x2a8 (0x10)
	unsigned char bSupportRayTracing; // 0x2b8 (0x1)
	unsigned char unreflected_2b9[0x3]; // 0x2b9 (0x3) 
	int RayTracingMinLOD; // 0x2bc (0x4)
	enum EClothLODBiasMode ClothLODBiasMode; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	struct TArray<class UMorphTarget*> MorphTargets; // 0x2c8 (0x10)
	unsigned char unreflected_2d8[0x178]; // 0x2d8 (0x178) 
	class UClass* PostProcessAnimBlueprint; // 0x450 (0x8)
	struct TArray<class UClothingAssetBase*> MeshClothingAssets; // 0x458 (0x10)
	struct FSkeletalMeshSamplingInfo SamplingInfo; // 0x468 (0x30)
	struct TArray<class UAssetUserData*> AssetUserData; // 0x498 (0x10)
	struct TArray<class USkeletalMeshSocket*> Sockets; // 0x4a8 (0x10)
	unsigned char unreflected_4b8[0x10]; // 0x4b8 (0x10) 
	struct TArray<struct FSkinWeightProfileInfo> SkinWeightProfiles; // 0x4c8 (0x10)
	class UMeshDeformer* DefaultMeshDeformer; // 0x4d8 (0x8)

	/* Functions */

	// Function /Script/Engine.SkeletalMesh.SetSkeleton (Underlying native function: SetSkeleton 0x9f51ac0)
	void SetSkeleton(class USkeleton*& InSkeleton); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetMorphTargets (Underlying native function: SetMorphTargets 0x9f51924)
	void SetMorphTargets(struct TArray<class UMorphTarget*>& InMorphTargets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetMinLODForQualityLevels (Underlying native function: SetMinLODForQualityLevels 0x9f51814)
	void SetMinLODForQualityLevels(struct TMap<enum EPerQualityLevels, int>& QualityLevelMinimumLODs, int& Default); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetMeshClothingAssets (Underlying native function: SetMeshClothingAssets 0x9f51738)
	void SetMeshClothingAssets(struct TArray<class UClothingAssetBase*>& InMeshClothingAssets); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetMaterials (Underlying native function: SetMaterials 0x9f51698)
	void SetMaterials(struct TArray<struct FSkeletalMaterial>& InMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetLODSettings (Underlying native function: SetLODSettings 0x71a663c)
	void SetLODSettings(class USkeletalMeshLODSettings*& InLODSettings); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.SetDefaultAnimatingRig (Underlying native function: SetDefaultAnimatingRig 0x9f51574)
	void SetDefaultAnimatingRig(struct TWeakObjectPtr<class UObject>& InAnimatingRig); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.SkeletalMesh.NumSockets (Underlying native function: NumSockets 0x9f51550)
	int NumSockets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.K2_GetAllMorphTargetNames (Underlying native function: K2_GetAllMorphTargetNames 0x9f51514)
	struct TArray<struct FString> K2GetAllMorphTargetNames(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.IsSectionUsingCloth (Underlying native function: IsSectionUsingCloth 0x9f51408)
	bool IsSectionUsingCloth(int& InSectionIndex, bool& bCheckCorrespondingSections); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetSocketByIndex (Underlying native function: GetSocketByIndex 0x9f5137c)
	class USkeletalMeshSocket* GetSocketByIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetSkeleton (Underlying native function: GetSkeleton 0x9f51354)
	class USkeleton* GetSkeleton(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetShadowPhysicsAsset (Underlying native function: GetShadowPhysicsAsset 0x9f5132c)
	class UPhysicsAsset* GetShadowPhysicsAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetPhysicsAsset (Underlying native function: GetPhysicsAsset 0x72a7ad4)
	class UPhysicsAsset* GetPhysicsAsset(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetNodeMappingData (Underlying native function: GetNodeMappingData 0x9f512b8)
	struct TArray<class UNodeMappingContainer*> GetNodeMappingData(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetNodeMappingContainer (Underlying native function: GetNodeMappingContainer 0x9f51228)
	class UNodeMappingContainer* GetNodeMappingContainer(class UBlueprint*& SourceAsset); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetMorphTargetsPtrConv (Underlying native function: GetMorphTargetsPtrConv 0x9f510b0)
	struct TArray<class UMorphTarget*> GetMorphTargetsPtrConv(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetMinLODForQualityLevels (Underlying native function: GetMinLODForQualityLevels 0x9f50fa0)
	void GetMinLODForQualityLevels(struct TMap<enum EPerQualityLevels, int>& QualityLevelMinimumLODs, int& Default); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetMeshClothingAssets (Underlying native function: GetMeshClothingAssets 0x9f50f2c)
	struct TArray<class UClothingAssetBase*> GetMeshClothingAssets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetMaterials (Underlying native function: GetMaterials 0x9f50efc)
	struct TArray<struct FSkeletalMaterial> GetMaterials(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetLODSettings (Underlying native function: GetLODSettings 0x6cc27c4)
	class USkeletalMeshLODSettings* GetLODSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetImportedBounds (Underlying native function: GetImportedBounds 0x9f50ebc)
	struct FBoxSphereBounds GetImportedBounds(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetDefaultAnimatingRig (Underlying native function: GetDefaultAnimatingRig 0x9f50dec)
	struct TWeakObjectPtr<class UObject> GetDefaultAnimatingRig(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.GetBounds (Underlying native function: GetBounds 0x9f50da0)
	struct FBoxSphereBounds GetBounds(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.SkeletalMesh.FindSocketAndIndex (Underlying native function: FindSocketAndIndex 0x9f50cd4)
	class USkeletalMeshSocket* FindSocketAndIndex(struct FName& InSocketName, int& OutIndex); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

