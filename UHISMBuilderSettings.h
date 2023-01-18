// Class /Script/Procedural.HISMBuilderSettings
// Size: 0x200
class UHISMBuilderSettings : public UObject
{
	struct TEnumAsByte<EComponentMobility> Mobility; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FInt32Interval* CullDistance; // 0x2c (0x8)
	unsigned char bCastShadow; // 0x34 (0x1)
	unsigned char bAffectDynamicIndirectLighting; // 0x34 (0x1)
	unsigned char bAffectDistanceFieldLighting; // 0x34 (0x1)
	unsigned char bCastDynamicShadow; // 0x34 (0x1)
	unsigned char bCastStaticShadow; // 0x34 (0x1)
	unsigned char bCastShadowAsTwoSided; // 0x34 (0x1)
	unsigned char bReceivesDecals; // 0x34 (0x1)
	unsigned char bOverrideLightMapRes; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	int OverriddenLightMapRes; // 0x38 (0x4)
	enum ELightmapType LightmapType; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	unsigned char bUseAsOccluder; // 0x40 (0x1)
	unsigned char unreflected_41[0x7]; // 0x41 (0x7) 
	struct FBodyInstance BodyInstance; // 0x48 (0x188)
	struct TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry; // 0x1d0 (0x1)
	struct FLightingChannels LightingChannels; // 0x1d1 (0x1)
	unsigned char unreflected_1d2[0x2]; // 0x1d2 (0x2) 
	unsigned char bRenderCustomDepth; // 0x1d4 (0x1)
	unsigned char unreflected_1d5[0x3]; // 0x1d5 (0x3) 
	enum ERendererStencilMask CustomDepthStencilWriteMask; // 0x1d8 (0x1)
	unsigned char unreflected_1d9[0x3]; // 0x1d9 (0x3) 
	int CustomDepthStencilValue; // 0x1dc (0x4)
	int TranslucencySortPriority; // 0x1e0 (0x4)
	unsigned char bEnableDensityScaling; // 0x1e4 (0x1)
	unsigned char unreflected_1e5[0x3]; // 0x1e5 (0x3) 
	struct TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x1e8 (0x10)
	int VirtualTextureCullMips; // 0x1f8 (0x4)
	enum ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x1fc (0x1)
	unsigned char padding_1fd[0x3]; // 0x1fd (0x3)

	/* Functions */

	// Function /Script/Procedural.HISMBuilderSettings.SetOverriddenLightMapRes (Underlying native function: SetOverriddenLightMapRes 0x7f92aac)
	void SetOverriddenLightMapRes(int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Procedural.HISMBuilderSettings.GetOverriddenLightMapRes (Underlying native function: GetOverriddenLightMapRes 0x6d2c944)
	int GetOverriddenLightMapRes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

