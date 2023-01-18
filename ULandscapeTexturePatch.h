// Class /Script/LandscapePatch.LandscapeTexturePatch
// Size: 0x3a0
class ULandscapeTexturePatch : public ULandscapePatchComponent
{
	int ResolutionX; // 0x320 (0x4)
	int ResolutionY; // 0x324 (0x4)
	struct FVector2D UnscaledPatchCoverage; // 0x328 (0x10)
	enum ELandscapeTexturePatchBlendMode BlendMode; // 0x338 (0x1)
	enum ELandscapeTexturePatchFalloffMode FalloffMode; // 0x339 (0x1)
	unsigned char unreflected_33a[0x2]; // 0x33a (0x2) 
	float Falloff; // 0x33c (0x4)
	enum ELandscapeTexturePatchSourceMode HeightSourceMode; // 0x340 (0x1)
	enum ELandscapeTexturePatchSourceMode DetailPanelHeightSourceMode; // 0x341 (0x1)
	unsigned char unreflected_342[0x6]; // 0x342 (0x6) 
	class ULandscapeHeightTextureBackedRenderTarget* HeightInternalData; // 0x348 (0x8)
	class UTexture* HeightTextureAsset; // 0x350 (0x8)
	bool bUseTextureAlphaForHeight; // 0x358 (0x1)
	enum ELandscapeTextureHeightPatchEncoding HeightEncoding; // 0x359 (0x1)
	unsigned char unreflected_35a[0x6]; // 0x35a (0x6) 
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings; // 0x360 (0x10)
	enum ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning; // 0x370 (0x1)
	bool bApplyComponentZScale; // 0x371 (0x1)
	unsigned char unreflected_372[0x6]; // 0x372 (0x6) 
	struct TArray<class ULandscapeWeightPatchTextureInfo*> WeightPatches; // 0x378 (0x10)
	int NumWeightPatches; // 0x388 (0x4)
	unsigned char unreflected_38c[0x1]; // 0x38c (0x1) 
	bool bBaseResolutionOffLandscape; // 0x38d (0x1)
	unsigned char unreflected_38e[0x2]; // 0x38e (0x2) 
	float ResolutionMultiplier; // 0x390 (0x4)
	int InitTextureSizeX; // 0x394 (0x4)
	int InitTextureSizeY; // 0x398 (0x4)
	struct TEnumAsByte<ETextureRenderTargetFormat> HeightRenderTargetFormat; // 0x39c (0x1)
	unsigned char padding_39d[0x3]; // 0x39d (0x3)

	/* Functions */

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SnapToLandscape (Underlying native function: SnapToLandscape 0x26daa0c)
	void SnapToLandscape(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning (Underlying native function: SetZeroHeightMeaning 0x7fb9208)
	void SetZeroHeightMeaning(enum ELandscapeTextureHeightPatchZeroHeightMeaning& ZeroHeightMeaningIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset (Underlying native function: SetWeightPatchTextureAsset 0x7fb90c4)
	void SetWeightPatchTextureAsset(struct FName& InWeightmapLayerName, class UTexture*& TextureIn); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode (Underlying native function: SetWeightPatchSourceMode 0x7fb8ff0)
	void SetWeightPatchSourceMode(struct FName& InWeightmapLayerName, enum ELandscapeTexturePatchSourceMode& NewMode); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride (Underlying native function: SetWeightPatchBlendModeOverride 0x7fb8f1c)
	void SetWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName, enum ELandscapeTexturePatchBlendMode& BlendMode); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch (Underlying native function: SetUseAlphaChannelForWeightPatch 0x7fb8e48)
	void SetUseAlphaChannelForWeightPatch(struct FName& InWeightmapLayerName, bool& bUseAlphaChannel); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight (Underlying native function: SetUseAlphaChannelForHeight 0x7fb8dc8)
	void SetUseAlphaChannelForHeight(bool& bUse); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage (Underlying native function: SetUnscaledCoverage 0x7fb8d3c)
	void SetUnscaledCoverage(struct FVector2D& Coverage); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetResolution (Underlying native function: SetResolution 0x7fb8cb0)
	void SetResolution(struct FVector2D& ResolutionIn); // (Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset (Underlying native function: SetHeightTextureAsset 0x7fb8aa0)
	void SetHeightTextureAsset(class UTexture*& TextureIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode (Underlying native function: SetHeightSourceMode 0x7fb8a1c)
	void SetHeightSourceMode(enum ELandscapeTexturePatchSourceMode& NewMode); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat (Underlying native function: SetHeightRenderTargetFormat 0x7fb8988)
	void SetHeightRenderTargetFormat(struct TEnumAsByte<ETextureRenderTargetFormat>& Format); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings (Underlying native function: SetHeightEncodingSettings 0x7fb88f4)
	void SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode (Underlying native function: SetHeightEncodingMode 0x7fb8878)
	void SetHeightEncodingMode(enum ELandscapeTextureHeightPatchEncoding& EncodingMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetFalloff (Underlying native function: SetFalloff 0x7fb87f4)
	void SetFalloff(float& FalloffIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.SetBlendMode (Underlying native function: SetBlendMode 0x7fb8778)
	void SetBlendMode(enum ELandscapeTexturePatchBlendMode& BlendModeIn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode (Underlying native function: ResetHeightEncodingMode 0x7fb86c8)
	void ResetHeightEncodingMode(enum ELandscapeTextureHeightPatchEncoding& EncodingMode); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch (Underlying native function: RemoveWeightPatch 0x7fb85bc)
	void RemoveWeightPatch(struct FName& InWeightmapLayerName); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches (Underlying native function: RemoveAllWeightPatches 0x7fb85a4)
	void RemoveAllWeightPatches(); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeWeights (Underlying native function: ReinitializeWeights 0x26daa0c)
	void ReinitializeWeights(); // (Final | Native | Protected)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.ReinitializeHeight (Underlying native function: ReinitializeHeight 0x26daa0c)
	void ReinitializeHeight(); // (Final | Native | Protected)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode (Underlying native function: GetWeightPatchSourceMode 0x7fb84f0)
	enum ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(struct FName& InWeightmapLayerName); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget (Underlying native function: GetWeightPatchRenderTarget 0x7fb8450)
	class UTextureRenderTarget2D* GetWeightPatchRenderTarget(struct FName& InWeightmapLayerName); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage (Underlying native function: GetUnscaledCoverage 0x7fb841c)
	struct FVector2D GetUnscaledCoverage(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetResolution (Underlying native function: GetResolution 0x7fb83e8)
	struct FVector2D GetResolution(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform (Underlying native function: GetPatchToWorldTransform 0x7fb8368)
	struct FTransform GetPatchToWorldTransform(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape (Underlying native function: GetInitResolutionFromLandscape 0x7fb81e0)
	bool GetInitResolutionFromLandscape(float& ResolutionMultiplier, struct FVector2D& ResolutionOut); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode (Underlying native function: GetHeightSourceMode 0x7fb81b8)
	enum ELandscapeTexturePatchSourceMode GetHeightSourceMode(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget (Underlying native function: GetHeightRenderTarget 0x7fb8190)
	class UTextureRenderTarget2D* GetHeightRenderTarget(); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize (Underlying native function: GetFullUnscaledWorldSize 0x7fb815c)
	struct FVector2D GetFullUnscaledWorldSize(); // (Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames (Underlying native function: GetAllWeightPatchLayerNames 0x7fb80e8)
	struct TArray<struct FName> GetAllWeightPatchLayerNames(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches (Underlying native function: DisableAllWeightPatches 0x7fb80d0)
	void DisableAllWeightPatches(); // (Native | Public | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride (Underlying native function: ClearWeightPatchBlendModeOverride 0x7fb8040)
	void ClearWeightPatchBlendModeOverride(struct FName& InWeightmapLayerName); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/LandscapePatch.LandscapeTexturePatch.AddWeightPatch (Underlying native function: AddWeightPatch 0x7fb7f34)
	void AddWeightPatch(struct FName& InWeightmapLayerName, enum ELandscapeTexturePatchSourceMode& SourceMode, bool& bUseAlphaChannel); // (Native | Public | HasOutParms | BlueprintCallable)
};

