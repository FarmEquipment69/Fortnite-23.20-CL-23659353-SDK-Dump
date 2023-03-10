// Class /Script/Engine.RendererSettings
// Size: 0x1c0
class URendererSettings : public UDeveloperSettings
{
	struct TEnumAsByte<EMobileShadingPath> MobileShadingPath; // 0x30 (0x1)
	unsigned char unreflected_31[0x3]; // 0x31 (0x3) 
	unsigned char bMobileSupportGPUScene; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct TEnumAsByte<EMobileAntiAliasingMethod> MobileAntiAliasing; // 0x38 (0x1)
	struct TEnumAsByte<EMobileFloatPrecisionMode> MobileFloatPrecisionMode; // 0x39 (0x1)
	unsigned char unreflected_3a[0x2]; // 0x3a (0x2) 
	unsigned char bMobileAllowDitheredLODTransition; // 0x3c (0x1)
	unsigned char bMobileVirtualTextures; // 0x3c (0x1)
	unsigned char bDiscardUnusedQualityLevels; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	struct TEnumAsByte<EShaderCompressionFormat> ShaderCompressionFormat; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	unsigned char bOcclusionCulling; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float MinScreenRadiusForLights; // 0x48 (0x4)
	float MinScreenRadiusForEarlyZPass; // 0x4c (0x4)
	float MinScreenRadiusForCSMdepth; // 0x50 (0x4)
	unsigned char bPrecomputedVisibilityWarning; // 0x54 (0x1)
	unsigned char bTextureStreaming; // 0x54 (0x1)
	unsigned char bUseDXT5NormalMaps; // 0x54 (0x1)
	unsigned char bVirtualTextures; // 0x54 (0x1)
	unsigned char bVirtualTextureEnableAutoImport; // 0x54 (0x1)
	unsigned char bVirtualTexturedLightmaps; // 0x54 (0x1)
	unsigned char bVirtualTextureAnisotropicFiltering; // 0x54 (0x1)
	unsigned char bEnableVirtualTextureOpacityMask; // 0x54 (0x1)
	unsigned char unreflected_55[0x3]; // 0x55 (0x3) 
	uint32_t VirtualTextureTileSize; // 0x58 (0x4)
	uint32_t VirtualTextureTileBorderSize; // 0x5c (0x4)
	uint32_t VirtualTextureFeedbackFactor; // 0x60 (0x4)
	struct TEnumAsByte<EWorkingColorSpace> WorkingColorSpaceChoice; // 0x64 (0x1)
	unsigned char unreflected_65[0x3]; // 0x65 (0x3) 
	struct FVector2D RedChromaticityCoordinate; // 0x68 (0x10)
	struct FVector2D GreenChromaticityCoordinate; // 0x78 (0x10)
	struct FVector2D BlueChromaticityCoordinate; // 0x88 (0x10)
	struct FVector2D WhiteChromaticityCoordinate; // 0x98 (0x10)
	unsigned char bClearCoatEnableSecondNormal; // 0xa8 (0x1)
	unsigned char unreflected_a9[0x3]; // 0xa9 (0x3) 
	struct TEnumAsByte<EDynamicGlobalIlluminationMethod> DynamicGlobalIllumination; // 0xac (0x1)
	struct TEnumAsByte<EReflectionMethod> Reflections; // 0xad (0x1)
	unsigned char unreflected_ae[0x2]; // 0xae (0x2) 
	int ReflectionCaptureResolution; // 0xb0 (0x4)
	unsigned char ReflectionEnvironmentLightmapMixBasedOnRoughness; // 0xb4 (0x1)
	unsigned char bUseHardwareRayTracingForLumen; // 0xb4 (0x1)
	unsigned char unreflected_b5[0x3]; // 0xb5 (0x3) 
	enum ELumenRayLightingMode LumenRayLightingMode; // 0xb8 (0x1)
	unsigned char unreflected_b9[0x3]; // 0xb9 (0x3) 
	unsigned char LumenFrontLayerTranslucencyReflections; // 0xbc (0x1)
	unsigned char unreflected_bd[0x3]; // 0xbd (0x3) 
	struct TEnumAsByte<ELumenSoftwareTracingMode> LumenSoftwareTracingMode; // 0xc0 (0x1)
	struct TEnumAsByte<EShadowMapMethod> ShadowMapMethod; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x2]; // 0xc2 (0x2) 
	unsigned char bEnableRayTracing; // 0xc4 (0x1)
	unsigned char bEnableRayTracingShadows; // 0xc4 (0x1)
	unsigned char bEnableRayTracingSkylight; // 0xc4 (0x1)
	unsigned char bEnableRayTracingTextureLOD; // 0xc4 (0x1)
	unsigned char bEnablePathTracing; // 0xc4 (0x1)
	unsigned char bGenerateMeshDistanceFields; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	float DistanceFieldVoxelDensity; // 0xc8 (0x4)
	unsigned char bNanite; // 0xcc (0x1)
	unsigned char bAllowStaticLighting; // 0xcc (0x1)
	unsigned char bUseNormalMapsForStaticLighting; // 0xcc (0x1)
	unsigned char bForwardShading; // 0xcc (0x1)
	unsigned char bVertexFoggingForOpaque; // 0xcc (0x1)
	unsigned char bSeparateTranslucency; // 0xcc (0x1)
	unsigned char unreflected_cd[0x3]; // 0xcd (0x3) 
	struct TEnumAsByte<ETranslucentSortPolicy> TranslucentSortPolicy; // 0xd0 (0x1)
	unsigned char unreflected_d1[0x7]; // 0xd1 (0x7) 
	struct FVector TranslucentSortAxis; // 0xd8 (0x18)
	struct TEnumAsByte<EFixedFoveationLevels> HMDFixedFoveationLevel; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x3]; // 0xf1 (0x3) 
	unsigned char bHMDFixedFoveationDynamic; // 0xf4 (0x1)
	unsigned char unreflected_f5[0x3]; // 0xf5 (0x3) 
	struct TEnumAsByte<ECustomDepthStencil> CustomDepthStencil; // 0xf8 (0x1)
	unsigned char unreflected_f9[0x3]; // 0xf9 (0x3) 
	unsigned char bCustomDepthTaaJitter; // 0xfc (0x1)
	unsigned char unreflected_fd[0x3]; // 0xfd (0x3) 
	struct TEnumAsByte<EAlphaChannelMode> bEnableAlphaChannelInPostProcessing; // 0x100 (0x1)
	unsigned char unreflected_101[0x3]; // 0x101 (0x3) 
	unsigned char bDefaultFeatureBloom; // 0x104 (0x1)
	unsigned char bDefaultFeatureAmbientOcclusion; // 0x104 (0x1)
	unsigned char bDefaultFeatureAmbientOcclusionStaticFraction; // 0x104 (0x1)
	unsigned char bDefaultFeatureAutoExposure; // 0x104 (0x1)
	unsigned char unreflected_105[0x3]; // 0x105 (0x3) 
	struct TEnumAsByte<EAutoExposureMethodUI> DefaultFeatureAutoExposure; // 0x108 (0x1)
	unsigned char unreflected_109[0x3]; // 0x109 (0x3) 
	float DefaultFeatureAutoExposureBias; // 0x10c (0x4)
	unsigned char bExtendDefaultLuminanceRangeInAutoExposureSettings; // 0x110 (0x1)
	unsigned char bDefaultFeatureMotionBlur; // 0x110 (0x1)
	unsigned char bDefaultFeatureLensFlare; // 0x110 (0x1)
	unsigned char bTemporalUpsampling; // 0x110 (0x1)
	unsigned char unreflected_111[0x3]; // 0x111 (0x3) 
	struct TEnumAsByte<EAntiAliasingMethod> DefaultFeatureAntiAliasing; // 0x114 (0x1)
	struct TEnumAsByte<ECompositingSampleCount> MSAASampleCount; // 0x115 (0x1)
	enum ELightUnits DefaultLightUnits; // 0x116 (0x1)
	struct TEnumAsByte<EDefaultBackBufferPixelFormat> DefaultBackBufferPixelFormat; // 0x117 (0x1)
	unsigned char bRenderUnbuiltPreviewShadowsInGame; // 0x118 (0x1)
	unsigned char bStencilForLODDither; // 0x118 (0x1)
	unsigned char unreflected_119[0x3]; // 0x119 (0x3) 
	struct TEnumAsByte<EEarlyZPass> EarlyZPass; // 0x11c (0x1)
	unsigned char unreflected_11d[0x3]; // 0x11d (0x3) 
	unsigned char bEarlyZPassOnlyMaterialMasking; // 0x120 (0x1)
	unsigned char bEnableCSMCaching; // 0x120 (0x1)
	unsigned char bDBuffer; // 0x120 (0x1)
	unsigned char unreflected_121[0x3]; // 0x121 (0x3) 
	struct TEnumAsByte<EClearSceneOptions> ClearSceneMethod; // 0x124 (0x1)
	struct TEnumAsByte<EVelocityOutputPass> VelocityPass; // 0x125 (0x1)
	struct TEnumAsByte<EVertexDeformationOutputsVelocity> VertexDeformationOutputsVelocity; // 0x126 (0x1)
	unsigned char unreflected_127[0x1]; // 0x127 (0x1) 
	unsigned char bSelectiveBasePassOutputs; // 0x128 (0x1)
	unsigned char bDefaultParticleCutouts; // 0x128 (0x1)
	unsigned char unreflected_129[0x3]; // 0x129 (0x3) 
	int GPUSimulationTextureSizeX; // 0x12c (0x4)
	int GPUSimulationTextureSizeY; // 0x130 (0x4)
	unsigned char bGlobalClipPlane; // 0x134 (0x1)
	unsigned char unreflected_135[0x3]; // 0x135 (0x3) 
	struct TEnumAsByte<EGBufferFormat> GBufferFormat; // 0x138 (0x1)
	unsigned char unreflected_139[0x3]; // 0x139 (0x3) 
	unsigned char bUseGPUMorphTargets; // 0x13c (0x1)
	unsigned char bNvidiaAftermathEnabled; // 0x13c (0x1)
	unsigned char bMultiView; // 0x13c (0x1)
	unsigned char bMobilePostProcessing; // 0x13c (0x1)
	unsigned char bMobileMultiView; // 0x13c (0x1)
	unsigned char bMobileUseHWsRGBEncoding; // 0x13c (0x1)
	unsigned char bRoundRobinOcclusion; // 0x13c (0x1)
	unsigned char bMeshStreaming; // 0x13c (0x1)
	unsigned char bEnableHeterogeneousVolumes; // 0x13d (0x1)
	unsigned char unreflected_13e[0x2]; // 0x13e (0x2) 
	float WireframeCullThreshold; // 0x140 (0x4)
	unsigned char bSupportStationarySkylight; // 0x144 (0x1)
	unsigned char bSupportLowQualityLightmaps; // 0x144 (0x1)
	unsigned char bSupportPointLightWholeSceneShadows; // 0x144 (0x1)
	unsigned char bSupportSkyAtmosphere; // 0x144 (0x1)
	unsigned char bSupportSkyAtmosphereAffectsHeightFog; // 0x144 (0x1)
	unsigned char bSupportCloudShadowOnForwardLitTranslucent; // 0x144 (0x1)
	unsigned char bSupportTranslucentPerObjectShadow; // 0x144 (0x1)
	unsigned char bSupportCloudShadowOnSingleLayerWater; // 0x144 (0x1)
	unsigned char bEnableStrata; // 0x145 (0x1)
	unsigned char unreflected_146[0x2]; // 0x146 (0x2) 
	uint32_t StrataBytePerPixel; // 0x148 (0x4)
	unsigned char StrataOpaqueMaterialRoughRefraction; // 0x14c (0x1)
	unsigned char StrataDebugAdvancedVisualizationShaders; // 0x14c (0x1)
	unsigned char bMaterialRoughDiffuse; // 0x14c (0x1)
	unsigned char bMaterialEnergyConservation; // 0x14c (0x1)
	unsigned char bOrderedIndependentTransparencyEnable; // 0x14c (0x1)
	unsigned char bSupportSkinCacheShaders; // 0x14c (0x1)
	unsigned char bSkipCompilingGPUSkinVF; // 0x14c (0x1)
	unsigned char unreflected_14d[0x3]; // 0x14d (0x3) 
	enum ESkinCacheDefaultBehavior DefaultSkinCacheBehavior; // 0x150 (0x1)
	unsigned char unreflected_151[0x3]; // 0x151 (0x3) 
	float SkinCacheSceneMemoryLimitInMB; // 0x154 (0x4)
	unsigned char bMobileEnableStaticAndCSMShadowReceivers; // 0x158 (0x1)
	unsigned char bMobileEnableMovableLightCSMShaderCulling; // 0x158 (0x1)
	unsigned char bMobileForwardEnableLocalLights; // 0x158 (0x1)
	unsigned char bMobileForwardEnableClusteredReflections; // 0x158 (0x1)
	unsigned char bMobileEnableNoPrecomputedLightingCSMShader; // 0x158 (0x1)
	unsigned char bMobileAllowDistanceFieldShadows; // 0x158 (0x1)
	unsigned char bMobileAllowMovableDirectionalLights; // 0x158 (0x1)
	unsigned char bMobileAllowMovableSpotlightShadows; // 0x158 (0x1)
	unsigned char bSupport16BitBoneIndex; // 0x159 (0x1)
	unsigned char bGPUSkinLimit2BoneInfluences; // 0x159 (0x1)
	unsigned char bSupportDepthOnlyIndexBuffers; // 0x159 (0x1)
	unsigned char bSupportReversedIndexBuffers; // 0x159 (0x1)
	unsigned char bMobileAmbientOcclusion; // 0x159 (0x1)
	unsigned char bUseUnlimitedBoneInfluences; // 0x159 (0x1)
	unsigned char unreflected_15a[0x2]; // 0x15a (0x2) 
	int UnlimitedBonInfluencesThreshold; // 0x15c (0x4)
	struct FPerPlatformInt DefaultBoneInfluenceLimit; // 0x160 (0x4)
	struct FPerPlatformInt MaxSkinBones; // 0x164 (0x4)
	struct TEnumAsByte<EMobilePlanarReflectionMode> MobilePlanarReflectionMode; // 0x168 (0x1)
	unsigned char unreflected_169[0x3]; // 0x169 (0x3) 
	unsigned char bMobileSupportsGen4TAA; // 0x16c (0x1)
	unsigned char unreflected_16d[0x3]; // 0x16d (0x3) 
	struct FPerPlatformBool bStreamSkeletalMeshLODs; // 0x170 (0x1)
	struct FPerPlatformBool bDiscardSkeletalMeshOptionalLODs; // 0x171 (0x1)
	unsigned char unreflected_172[0x6]; // 0x172 (0x6) 
	struct FSoftObjectPath VisualizeCalibrationColorMaterialPath; // 0x178 (0x18)
	struct FSoftObjectPath VisualizeCalibrationCustomMaterialPath; // 0x190 (0x18)
	struct FSoftObjectPath VisualizeCalibrationGrayscaleMaterialPath; // 0x1a8 (0x18)
};

