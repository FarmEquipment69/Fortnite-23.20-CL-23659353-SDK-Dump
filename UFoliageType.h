// Class /Script/Foliage.FoliageType
// Size: 0x4b8
class UFoliageType : public UObject
{
	struct FGuid UpdateGuid; // 0x28 (0x10)
	float Density; // 0x38 (0x4)
	float DensityAdjustmentFactor; // 0x3c (0x4)
	float Radius; // 0x40 (0x4)
	bool bSingleInstanceModeOverrideRadius; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float SingleInstanceModeRadius; // 0x48 (0x4)
	enum EFoliageScaling Scaling; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct FFloatInterval* ScaleX; // 0x50 (0x8)
	struct FFloatInterval* ScaleY; // 0x58 (0x8)
	struct FFloatInterval* ScaleZ; // 0x60 (0x8)
	struct FFoliageVertexColorChannelMask VertexColorMaskByChannel[0x4]; // 0x68 (0xc) (ARRAY) 
	struct TEnumAsByte<FoliageVertexColorMask> VertexColorMask; // 0x98 (0x1)
	unsigned char unreflected_99[0x3]; // 0x99 (0x3) 
	float VertexColorMaskThreshold; // 0x9c (0x4)
	unsigned char VertexColorMaskInvert; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x3]; // 0xa1 (0x3) 
	struct FFloatInterval* ZOffset; // 0xa4 (0x8)
	unsigned char AlignToNormal; // 0xac (0x1)
	unsigned char AverageNormal; // 0xac (0x1)
	unsigned char AverageNormalSingleComponent; // 0xac (0x1)
	unsigned char unreflected_ad[0x3]; // 0xad (0x3) 
	float AlignMaxAngle; // 0xb0 (0x4)
	unsigned char RandomYaw; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	float RandomPitchAngle; // 0xb8 (0x4)
	struct FFloatInterval* GroundSlopeAngle; // 0xbc (0x8)
	struct FFloatInterval* Height; // 0xc4 (0x8)
	unsigned char unreflected_cc[0x4]; // 0xcc (0x4) 
	struct TArray<struct FName> LandscapeLayers; // 0xd0 (0x10)
	float MinimumLayerWeight; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct TArray<struct FName> ExclusionLandscapeLayers; // 0xe8 (0x10)
	float MinimumExclusionLayerWeight; // 0xf8 (0x4)
	struct FName LandscapeLayer; // 0xfc (0x4)
	unsigned char CollisionWithWorld; // 0x100 (0x1)
	unsigned char unreflected_101[0x7]; // 0x101 (0x7) 
	struct FVector CollisionScale; // 0x108 (0x18)
	int AverageNormalSampleCount; // 0x120 (0x4)
	unsigned char unreflected_124[0x4]; // 0x124 (0x4) 
	struct FBoxSphereBounds MeshBounds; // 0x128 (0x38)
	struct FVector LowBoundOriginRadius; // 0x160 (0x18)
	struct TEnumAsByte<EComponentMobility> Mobility; // 0x178 (0x1)
	unsigned char unreflected_179[0x3]; // 0x179 (0x3) 
	struct FInt32Interval* CullDistance; // 0x17c (0x8)
	unsigned char bEnableStaticLighting; // 0x184 (0x1)
	unsigned char CastShadow; // 0x184 (0x1)
	unsigned char bAffectDynamicIndirectLighting; // 0x184 (0x1)
	unsigned char bAffectDistanceFieldLighting; // 0x184 (0x1)
	unsigned char bCastDynamicShadow; // 0x184 (0x1)
	unsigned char bCastStaticShadow; // 0x184 (0x1)
	unsigned char unreflected_185[0x3]; // 0x185 (0x3) 
	unsigned char bCastContactShadow; // 0x188 (0x1)
	unsigned char unreflected_189[0x3]; // 0x189 (0x3) 
	unsigned char bCastShadowAsTwoSided; // 0x18c (0x1)
	unsigned char bReceivesDecals; // 0x18c (0x1)
	unsigned char bOverrideLightMapRes; // 0x18c (0x1)
	unsigned char unreflected_18d[0x3]; // 0x18d (0x3) 
	int OverriddenLightMapRes; // 0x190 (0x4)
	enum ELightmapType LightmapType; // 0x194 (0x1)
	unsigned char unreflected_195[0x3]; // 0x195 (0x3) 
	unsigned char bUseAsOccluder; // 0x198 (0x1)
	unsigned char unreflected_199[0x3]; // 0x199 (0x3) 
	unsigned char bVisibleInRayTracing; // 0x19c (0x1)
	unsigned char bEvaluateWorldPositionOffset; // 0x19c (0x1)
	unsigned char unreflected_19d[0x3]; // 0x19d (0x3) 
	int WorldPositionOffsetDisableDistance; // 0x1a0 (0x4)
	unsigned char unreflected_1a4[0x4]; // 0x1a4 (0x4) 
	struct FBodyInstance BodyInstance; // 0x1a8 (0x188)
	struct TEnumAsByte<EHasCustomNavigableGeometry> CustomNavigableGeometry; // 0x330 (0x1)
	struct FLightingChannels LightingChannels; // 0x331 (0x1)
	unsigned char unreflected_332[0x2]; // 0x332 (0x2) 
	unsigned char bRenderCustomDepth; // 0x334 (0x1)
	unsigned char unreflected_335[0x3]; // 0x335 (0x3) 
	enum ERendererStencilMask CustomDepthStencilWriteMask; // 0x338 (0x1)
	unsigned char unreflected_339[0x3]; // 0x339 (0x3) 
	int CustomDepthStencilValue; // 0x33c (0x4)
	int TranslucencySortPriority; // 0x340 (0x4)
	float CollisionRadius; // 0x344 (0x4)
	float ShadeRadius; // 0x348 (0x4)
	int numSteps; // 0x34c (0x4)
	float InitialSeedDensity; // 0x350 (0x4)
	float AverageSpreadDistance; // 0x354 (0x4)
	float SpreadVariance; // 0x358 (0x4)
	int SeedsPerStep; // 0x35c (0x4)
	int DistributionSeed; // 0x360 (0x4)
	float MaxInitialSeedOffset; // 0x364 (0x4)
	bool bCanGrowInShade; // 0x368 (0x1)
	bool bSpawnsInShade; // 0x369 (0x1)
	unsigned char unreflected_36a[0x2]; // 0x36a (0x2) 
	float MaxInitialAge; // 0x36c (0x4)
	float MaxAge; // 0x370 (0x4)
	float OverlapPriority; // 0x374 (0x4)
	struct FFloatInterval* ProceduralScale; // 0x378 (0x8)
	struct FRuntimeFloatCurve ScaleCurve; // 0x380 (0x88)
	struct FFoliageDensityFalloff DensityFalloff; // 0x408 (0x90)
	int ChangeCount; // 0x498 (0x4)
	unsigned char ReapplyDensity; // 0x49c (0x1)
	unsigned char ReapplyRadius; // 0x49c (0x1)
	unsigned char ReapplyAlignToNormal; // 0x49c (0x1)
	unsigned char ReapplyRandomYaw; // 0x49c (0x1)
	unsigned char ReapplyScaling; // 0x49c (0x1)
	unsigned char ReapplyScaleX; // 0x49c (0x1)
	unsigned char ReapplyScaleY; // 0x49c (0x1)
	unsigned char ReapplyScaleZ; // 0x49c (0x1)
	unsigned char ReapplyRandomPitchAngle; // 0x49d (0x1)
	unsigned char ReapplyGroundSlope; // 0x49d (0x1)
	unsigned char ReapplyHeight; // 0x49d (0x1)
	unsigned char ReapplyLandscapeLayers; // 0x49d (0x1)
	unsigned char ReapplyZOffset; // 0x49d (0x1)
	unsigned char ReapplyCollisionWithWorld; // 0x49d (0x1)
	unsigned char ReapplyVertexColorMask; // 0x49d (0x1)
	unsigned char bEnableDensityScaling; // 0x49d (0x1)
	unsigned char bEnableDiscardOnLoad; // 0x49e (0x1)
	unsigned char bEnableCullDistanceScaling; // 0x49e (0x1)
	unsigned char unreflected_49f[0x1]; // 0x49f (0x1) 
	struct TArray<class URuntimeVirtualTexture*> RuntimeVirtualTextures; // 0x4a0 (0x10)
	int VirtualTextureCullMips; // 0x4b0 (0x4)
	enum ERuntimeVirtualTextureMainPassType VirtualTextureRenderPassType; // 0x4b4 (0x1)
	unsigned char padding_4b5[0x3]; // 0x4b5 (0x3)
};

