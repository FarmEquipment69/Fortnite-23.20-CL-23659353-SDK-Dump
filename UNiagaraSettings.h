// Class /Script/Niagara.NiagaraSettings
// Size: 0xf8
class UNiagaraSettings : public UDeveloperSettings
{
	bool bSystemsSupportLargeWorldCoordinates; // 0x30 (0x1)
	bool bEnforceStrictStackTypes; // 0x31 (0x1)
	bool bExperimentalVMEnabled; // 0x32 (0x1)
	unsigned char unreflected_33[0x5]; // 0x33 (0x5) 
	struct FSoftObjectPath DefaultEffectType; // 0x38 (0x18)
	struct FLinearColor PositionPinTypeColor; // 0x50 (0x10)
	struct TArray<struct FText> QualityLevels; // 0x60 (0x10)
	struct TMap<struct FString, struct FText> ComponentRendererWarningsPerClass; // 0x70 (0x50)
	struct TEnumAsByte<ETextureRenderTargetFormat> DefaultRenderTargetFormat; // 0xc0 (0x1)
	enum ENiagaraGpuBufferFormat DefaultGridFormat; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x2]; // 0xc2 (0x2) 
	enum ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting; // 0xc4 (0x4)
	enum ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode; // 0xc8 (0x1)
	enum ENiagaraDefaultSortPrecision DefaultSortPrecision; // 0xc9 (0x1)
	enum ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency; // 0xca (0x1)
	unsigned char unreflected_cb[0x1]; // 0xcb (0x1) 
	float DefaultLightInverseExposureBlend; // 0xcc (0x4)
	struct TEnumAsByte<ENDISkelMesh_GpuMaxInfluences> NDISkelMeshGpuMaxInfluences; // 0xd0 (0x1)
	struct TEnumAsByte<ENDISkelMesh_GpuUniformSamplingFormat> NDISkelMeshGpuUniformSamplingFormat; // 0xd1 (0x1)
	struct TEnumAsByte<ENDISkelMesh_AdjacencyTriangleIndexFormat> NDISkelMeshAdjacencyTriangleIndexFormat; // 0xd2 (0x1)
	bool NDIStaticMeshAllowDistanceFields; // 0xd3 (0x1)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct TArray<struct TEnumAsByte<ENDICollisionQuery_AsyncGpuTraceProvider>> NDICollisionQueryAsyncGpuTraceProviderOrder; // 0xd8 (0x10)
	struct TArray<struct FNiagaraPlatformSetRedirect> PlatformSetRedirects; // 0xe8 (0x10)
};

