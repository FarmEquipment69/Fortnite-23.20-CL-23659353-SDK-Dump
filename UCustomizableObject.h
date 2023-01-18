// Class /Script/CustomizableObject.CustomizableObject
// Size: 0x3e0
class UCustomizableObject : public UObject
{
	class USkeletalMesh* ReferenceSkeletalMesh; // 0x28 (0x8)
	struct TArray<class USkeletalMesh*> ReferenceSkeletalMeshes; // 0x30 (0x10)
	struct TArray<struct FMutableRefSkeletalMeshData> ReferenceSkeletalMeshesData; // 0x40 (0x10)
	class UStaticMesh* ReferenceStaticMesh; // 0x50 (0x8)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> ReferencedMaterials; // 0x58 (0x10)
	struct TArray<struct FName> ReferencedMaterialSlotNames; // 0x68 (0x10)
	struct TArray<struct TWeakObjectPtr<class USkeleton>> ReferencedSkeletons; // 0x78 (0x10)
	struct FMutableLODSettings LODSettings; // 0x88 (0x10)
	struct TArray<struct FMutableModelImageProperties> ImageProperties; // 0x98 (0x10)
	struct TArray<struct FMorphTargetInfo*> ContributingMorphTargetsInfo; // 0xa8 (0x10)
	struct TArray<struct FMorphTargetVertexData> MorphTargetReconstructionData; // 0xb8 (0x10)
	struct TArray<struct FCustomizableObjectClothConfigData> ClothSharedConfigsData; // 0xc8 (0x10)
	struct TArray<struct FCustomizableObjectClothingAssetData> ContributingClothingAssetsData; // 0xd8 (0x10)
	struct TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData; // 0xe8 (0x10)
	struct TArray<struct FMutableSkinWeightProfileInfo*> SkinWeightProfilesInfo; // 0xf8 (0x10)
	struct TArray<struct FMutableModelParameterProperties> ParameterProperties; // 0x108 (0x10)
	unsigned char unreflected_118[0x50]; // 0x118 (0x50) 
	struct TMap<struct FString, struct FParameterUIData> ParameterUIDataMap; // 0x168 (0x50)
	struct TMap<struct FString, struct FParameterUIData> StateUIDataMap; // 0x1b8 (0x50)
	struct TMap<struct FString, struct TWeakObjectPtr<class UPhysicsAsset>> PhysicsAssetsMap; // 0x208 (0x50)
	struct TMap<struct FString, struct TWeakObjectPtr<class UClass>> AnimBPAssetsMap; // 0x258 (0x50)
	struct TArray<struct FMutableRefSocket> SocketArray; // 0x2a8 (0x10)
	struct TWeakObjectPtr<class UMutableMaskOutCache> MaskOutCache; // 0x2b8 (0x28)
	struct TMap<uint64_t, struct FMutableStreamableBlock> HashToStreamableBlock; // 0x2e0 (0x50)
	struct TArray<struct FString> CustomizableObjectClassTags; // 0x330 (0x10)
	struct TArray<struct FString> PopulationClassTags; // 0x340 (0x10)
	struct TMap<struct FString, struct FParameterTags> CustomizableObjectParametersTags; // 0x350 (0x50)
	class UMutableMaskOutCache* MaskOutCacheHardRef; // 0x3a0 (0x8)
	struct FGuid Identifier; // 0x3a8 (0x10)
	struct FGuid CompilationGuid; // 0x3b8 (0x10)
	class UCustomizableObjectBulk* BulkData; // 0x3c8 (0x8)
	unsigned char padding_3d0[0x10]; // 0x3d0 (0x10)

	/* Functions */

	// Function /Script/CustomizableObject.CustomizableObject.UnloadMaskOutCache (Underlying native function: UnloadMaskOutCache 0x74f5450)
	void UnloadMaskOutCache(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObject.LoadMaskOutCache (Underlying native function: LoadMaskOutCache 0x74f3674)
	void LoadMaskOutCache(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CustomizableObject.CustomizableObject.IsCompiled (Underlying native function: IsCompiled 0x74f335c)
	bool IsCompiled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadataFromIndex (Underlying native function: GetStateUIMetadataFromIndex 0x74f31f0)
	struct FParameterUIData GetStateUIMetadataFromIndex(int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateUIMetadata (Underlying native function: GetStateUIMetadata 0x74f305c)
	struct FParameterUIData GetStateUIMetadata(struct FString& StateName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterName (Underlying native function: GetStateParameterName 0x74f2f0c)
	struct FString GetStateParameterName(struct FString& StateName, int& ParameterIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateParameterCount (Underlying native function: GetStateParameterCount 0x74f2e40)
	int GetStateParameterCount(struct FString& StateName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateName (Underlying native function: GetStateName 0x74f2d74)
	struct FString GetStateName(int& StateIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetStateCount (Underlying native function: GetStateCount 0x74f2d54)
	int GetStateCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadataFromIndex (Underlying native function: GetParameterUIMetadataFromIndex 0x74f1d90)
	struct FParameterUIData GetParameterUIMetadataFromIndex(int& ParamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterUIMetadata (Underlying native function: GetParameterUIMetadata 0x74f1bfc)
	struct FParameterUIData GetParameterUIMetadata(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterTypeByName (Underlying native function: GetParameterTypeByName 0x74f1a98)
	enum EMutableParameterType GetParameterTypeByName(struct FString& Name); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterType (Underlying native function: GetParameterType 0x74f1a0c)
	enum EMutableParameterType GetParameterType(int& ParamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterName (Underlying native function: GetParameterName 0x74f194c)
	struct FString GetParameterName(int& ParamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterDescriptionCount (Underlying native function: GetParameterDescriptionCount 0x74f17b0)
	int GetParameterDescriptionCount(struct FString& ParamName); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetParameterCount (Underlying native function: GetParameterCount 0x6ce79ac)
	int GetParameterCount(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterNumOptions (Underlying native function: GetIntParameterNumOptions 0x74f12f0)
	int GetIntParameterNumOptions(int& ParamIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.GetIntParameterAvailableOption (Underlying native function: GetIntParameterAvailableOption 0x74f11ec)
	struct FString GetIntParameterAvailableOption(int& ParamIndex, int& K); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.FindParameter (Underlying native function: FindParameter 0x74f0634)
	int FindParameter(struct FString& Name); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CustomizableObject.CustomizableObject.CreateInstance (Underlying native function: CreateInstance 0x74f00f8)
	class UCustomizableObjectInstance* CreateInstance(); // (Final | Native | Public | BlueprintCallable)
};

