// Class /Script/Engine.StaticMesh
// Size: 0x258
class UStaticMesh : public UStreamableRenderAsset
{
	unsigned char unreflected_d0[0x20]; // 0xd0 (0x20) 
	struct FPerQualityLevelInt MinQualityLevelLOD; // 0xf0 (0x68)
	struct FPerPlatformInt MinLOD; // 0x158 (0x4)
	unsigned char unreflected_15c[0x4]; // 0x15c (0x4) 
	struct TArray<struct FStaticMaterial> StaticMaterials; // 0x160 (0x10)
	float LightmapUVDensity; // 0x170 (0x4)
	int LightMapResolution; // 0x174 (0x4)
	int LightMapCoordinateIndex; // 0x178 (0x4)
	float DistanceFieldSelfShadowBias; // 0x17c (0x4)
	class UBodySetup* BodySetup; // 0x180 (0x8)
	int LODForCollision; // 0x188 (0x4)
	unsigned char bGenerateMeshDistanceField; // 0x18c (0x1)
	unsigned char bStripComplexCollisionForConsole; // 0x18c (0x1)
	unsigned char bHasNavigationData; // 0x18c (0x1)
	unsigned char bSupportUniformlyDistributedSampling; // 0x18c (0x1)
	unsigned char bSupportPhysicalMaterialMasks; // 0x18c (0x1)
	unsigned char bSupportRayTracing; // 0x18c (0x1)
	unsigned char bDoFastBuild; // 0x18c (0x1)
	unsigned char bIsBuiltAtRuntime; // 0x18c (0x1)
	unsigned char bAllowCPUAccess; // 0x18d (0x1)
	unsigned char bSupportGpuUniformlyDistributedSampling; // 0x18d (0x1)
	unsigned char unreflected_18e[0x22]; // 0x18e (0x22) 
	struct TArray<class UStaticMeshSocket*> Sockets; // 0x1b0 (0x10)
	unsigned char unreflected_1c0[0x10]; // 0x1c0 (0x10) 
	struct FVector PositiveBoundsExtension; // 0x1d0 (0x18)
	struct FVector NegativeBoundsExtension; // 0x1e8 (0x18)
	struct FBoxSphereBounds ExtendedBounds; // 0x200 (0x38)
	int ElementToIgnoreForTexFactor; // 0x238 (0x4)
	unsigned char unreflected_23c[0x4]; // 0x23c (0x4) 
	struct TArray<class UAssetUserData*> AssetUserData; // 0x240 (0x10)
	class UNavCollisionBase* NavCollision; // 0x250 (0x8)

	/* Functions */

	// Function /Script/Engine.StaticMesh.SetStaticMaterials (Underlying native function: SetStaticMaterials 0x9f85d54)
	void SetStaticMaterials(struct TArray<struct FStaticMaterial>& InStaticMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.SetMinLODForQualityLevels (Underlying native function: SetMinLODForQualityLevels 0x9f51814)
	void SetMinLODForQualityLevels(struct TMap<enum EPerQualityLevels, int>& QualityLevelMinimumLODs, int& Default); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.SetMinimumLODForPlatforms (Underlying native function: SetMinimumLODForPlatforms 0x9f8563c)
	void SetMinimumLODForPlatforms(struct TMap<struct FName, int>& PlatformMinimumLODs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.SetMinimumLODForPlatform (Underlying native function: SetMinimumLODForPlatform 0x9f85c24)
	void SetMinimumLODForPlatform(struct FName& PlatformName, int& InMinLOD); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.RemoveSocket (Underlying native function: RemoveSocket 0x9f85a28)
	void RemoveSocket(class UStaticMeshSocket*& Socket); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.GetStaticMeshDescription (Underlying native function: GetStaticMeshDescription 0x73079d0)
	class UStaticMeshDescription* GetStaticMeshDescription(int& LODIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.GetStaticMaterials (Underlying native function: GetStaticMaterials 0x9f85a0c)
	struct TArray<struct FStaticMaterial> GetStaticMaterials(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetSocketsByTag (Underlying native function: GetSocketsByTag 0x9f8586c)
	struct TArray<class UStaticMeshSocket*> GetSocketsByTag(struct FString& InSocketTag); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetNumTriangles (Underlying native function: GetNumTriangles 0x9f857c0)
	int GetNumTriangles(int& LODIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetNumSections (Underlying native function: GetNumSections 0x9f85734)
	int GetNumSections(int& InLOD); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetNumLODs (Underlying native function: GetNumLODs 0x9f8570c)
	int GetNumLODs(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMinLODForQualityLevels (Underlying native function: GetMinLODForQualityLevels 0x9f50fa0)
	void GetMinLODForQualityLevels(struct TMap<enum EPerQualityLevels, int>& QualityLevelMinimumLODs, int& Default); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMinimumLODForQualityLevels (Underlying native function: GetMinimumLODForQualityLevels 0x9f8563c)
	void GetMinimumLODForQualityLevels(struct TMap<struct FName, int>& QualityLevelMinimumLODs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMinimumLODForQualityLevel (Underlying native function: GetMinimumLODForQualityLevel 0x9f855c4)
	int GetMinimumLODForQualityLevel(struct FName& QualityLevel); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMinimumLODForPlatforms (Underlying native function: GetMinimumLODForPlatforms 0x9f8563c)
	void GetMinimumLODForPlatforms(struct TMap<struct FName, int>& PlatformMinimumLODs); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMinimumLODForPlatform (Underlying native function: GetMinimumLODForPlatform 0x9f855c4)
	int GetMinimumLODForPlatform(struct FName& PlatformName); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMaterialIndex (Underlying native function: GetMaterialIndex 0x9f85538)
	int GetMaterialIndex(struct FName& MaterialSlotName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetMaterial (Underlying native function: GetMaterial 0x9f854ac)
	class UMaterialInterface* GetMaterial(int& MaterialIndex); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetBounds (Underlying native function: GetBounds 0x9f8546c)
	struct FBoxSphereBounds GetBounds(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.GetBoundingBox (Underlying native function: GetBoundingBox 0x9f8537c)
	struct FBox GetBoundingBox(); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.FindSocket (Underlying native function: FindSocket 0x9f852f0)
	class UStaticMeshSocket* FindSocket(struct FName& InSocketName); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.StaticMesh.CreateStaticMeshDescription (Underlying native function: CreateStaticMeshDescription 0x9f8525c)
	static class UStaticMeshDescription* CreateStaticMeshDescription(class UObject*& Outer); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.BuildFromStaticMeshDescriptions (Underlying native function: BuildFromStaticMeshDescriptions 0x9f8506c)
	void BuildFromStaticMeshDescriptions(struct TArray<class UStaticMeshDescription*>& StaticMeshDescriptions, bool& bBuildSimpleCollision, bool& bFastBuild); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.AddSocket (Underlying native function: AddSocket 0x9f84c98)
	void AddSocket(class UStaticMeshSocket*& Socket); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Engine.StaticMesh.AddMaterial (Underlying native function: AddMaterial 0x9f84abc)
	struct FName AddMaterial(class UMaterialInterface*& Material); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

