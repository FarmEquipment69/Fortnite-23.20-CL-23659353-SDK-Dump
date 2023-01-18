// Class /Script/Landscape.LandscapeComponent
// Size: 0x750
class ULandscapeComponent : public UPrimitiveComponent
{
	int SectionBaseX; // 0x540 (0x4)
	int SectionBaseY; // 0x544 (0x4)
	int ComponentSizeQuads; // 0x548 (0x4)
	int SubsectionSizeQuads; // 0x54c (0x4)
	int NumSubsections; // 0x550 (0x4)
	unsigned char unreflected_554[0x4]; // 0x554 (0x4) 
	class UMaterialInterface* OverrideMaterial; // 0x558 (0x8)
	class UMaterialInterface* OverrideHoleMaterial; // 0x560 (0x8)
	struct TArray<class UMaterialInstanceConstant*> MaterialInstances; // 0x568 (0x10)
	struct TArray<class UMaterialInstanceDynamic*> MaterialInstancesDynamic; // 0x578 (0x10)
	struct TArray<int8_t> LODIndexToMaterialIndex; // 0x588 (0x10)
	class UTexture2D* XYOffsetmapTexture; // 0x598 (0x8)
	struct FVector4 WeightmapScaleBias; // 0x5a0 (0x20)
	float WeightmapSubsectionOffset; // 0x5c0 (0x4)
	unsigned char unreflected_5c4[0xc]; // 0x5c4 (0xc) 
	struct FVector4 HeightmapScaleBias; // 0x5d0 (0x20)
	struct FBox CachedLocalBox; // 0x5f0 (0x38)
	struct TLazyObjectPtr<class ULandscapeHeightfieldCollisionComponent> CollisionComponent; // 0x628 (0x1c)
	bool bUserTriggeredChangeRequested; // 0x644 (0x1)
	bool bNaniteActive; // 0x645 (0x1)
	unsigned char unreflected_646[0x2]; // 0x646 (0x2) 
	class UTexture2D* HeightmapTexture; // 0x648 (0x8)
	struct TArray<struct FWeightmapLayerAllocationInfo> WeightmapLayerAllocations; // 0x650 (0x10)
	struct TArray<class UTexture2D*> WeightmapTextures; // 0x660 (0x10)
	struct TArray<struct FLandscapePerLODMaterialOverride> PerLODOverrideMaterials; // 0x670 (0x10)
	struct FGuid MapBuildDataId; // 0x680 (0x10)
	struct TArray<struct FGuid> IrrelevantLights; // 0x690 (0x10)
	int CollisionMipLevel; // 0x6a0 (0x4)
	int SimpleCollisionMipLevel; // 0x6a4 (0x4)
	float NegativeZBoundsExtension; // 0x6a8 (0x4)
	float PositiveZBoundsExtension; // 0x6ac (0x4)
	float StaticLightingResolution; // 0x6b0 (0x4)
	int ForcedLOD; // 0x6b4 (0x4)
	int LODBias; // 0x6b8 (0x4)
	struct FGuid StateId; // 0x6bc (0x10)
	struct FGuid BakedTextureMaterialGuid; // 0x6cc (0x10)
	struct FGuid LastBakedTextureMaterialGuid; // 0x6dc (0x10)
	unsigned char unreflected_6ec[0x4]; // 0x6ec (0x4) 
	class UTexture2D* GIBakedBaseColorTexture; // 0x6f0 (0x8)
	class UMaterialInterface* MobileMaterialInterface; // 0x6f8 (0x8)
	struct TArray<class UMaterialInterface*> MobileMaterialInterfaces; // 0x700 (0x10)
	struct TArray<class UTexture2D*> MobileWeightmapTextures; // 0x710 (0x10)
	unsigned char padding_720[0x30]; // 0x720 (0x30)

	/* Functions */

	// Function /Script/Landscape.LandscapeComponent.SetLODBias (Underlying native function: SetLODBias 0x992ac04)
	void SetLODBias(int& InLODBias); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeComponent.SetForcedLOD (Underlying native function: SetForcedLOD 0x992ab84)
	void SetForcedLOD(int& InForcedLOD); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/Landscape.LandscapeComponent.GetMaterialInstanceDynamic (Underlying native function: GetMaterialInstanceDynamic 0x992a794)
	class UMaterialInstanceDynamic* GetMaterialInstanceDynamic(int& InIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightByNameAtLocation (Underlying native function: EditorGetPaintLayerWeightByNameAtLocation 0x992a6e8)
	float EditorGetPaintLayerWeightByNameAtLocation(struct FVector& InLocation, struct FName& InPaintLayerName); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Landscape.LandscapeComponent.EditorGetPaintLayerWeightAtLocation (Underlying native function: EditorGetPaintLayerWeightAtLocation 0x992a63c)
	float EditorGetPaintLayerWeightAtLocation(struct FVector& InLocation, class ULandscapeLayerInfoObject*& PaintLayer); // (Final | 0x00000002 | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)
};

