// ScriptStruct /Script/Engine.MeshApproximationSettings
// Size: 0x118
struct FMeshApproximationSettings
{
	enum EMeshApproximationType OutputType; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float ApproximationAccuracy; // 0x4 (0x4)
	int ClampVoxelDimension; // 0x8 (0x4)
	bool bAttemptAutoThickening; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float TargetMinThicknessMultiplier; // 0x10 (0x4)
	bool bIgnoreTinyParts; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float TinyPartSizeMultiplier; // 0x18 (0x4)
	enum EMeshApproximationBaseCappingType BaseCapping; // 0x1c (0x1)
	unsigned char unreflected_1d[0x3]; // 0x1d (0x3) 
	float WindingThreshold; // 0x20 (0x4)
	bool bFillGaps; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	float GapDistance; // 0x28 (0x4)
	enum EOccludedGeometryFilteringPolicy OcclusionMethod; // 0x2c (0x1)
	bool bOccludeFromBottom; // 0x2d (0x1)
	enum EMeshApproximationSimplificationPolicy SimplifyMethod; // 0x2e (0x1)
	unsigned char unreflected_2f[0x1]; // 0x2f (0x1) 
	int TargetTriCount; // 0x30 (0x4)
	float TrianglesPerM; // 0x34 (0x4)
	float GeometricDeviation; // 0x38 (0x4)
	enum EMeshApproximationGroundPlaneClippingPolicy GroundClipping; // 0x3c (0x1)
	unsigned char unreflected_3d[0x3]; // 0x3d (0x3) 
	float GroundClippingZHeight; // 0x40 (0x4)
	bool bEstimateHardNormals; // 0x44 (0x1)
	unsigned char unreflected_45[0x3]; // 0x45 (0x3) 
	float HardNormalAngle; // 0x48 (0x4)
	enum EMeshApproximationUVGenerationPolicy UVGenerationMethod; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	int InitialPatchCount; // 0x50 (0x4)
	float CurvatureAlignment; // 0x54 (0x4)
	float MergingThreshold; // 0x58 (0x4)
	float MaxAngleDeviation; // 0x5c (0x4)
	bool bGenerateNaniteEnabledMesh; // 0x60 (0x1)
	unsigned char unreflected_61[0x3]; // 0x61 (0x3) 
	float NaniteProxyTrianglePercent; // 0x64 (0x4)
	bool bSupportRayTracing; // 0x68 (0x1)
	bool bAllowDistanceField; // 0x69 (0x1)
	unsigned char unreflected_6a[0x2]; // 0x6a (0x2) 
	int MultiSamplingAA; // 0x6c (0x4)
	int RenderCaptureResolution; // 0x70 (0x4)
	struct FMaterialProxySettings MaterialSettings; // 0x74 (0x94)
	float CaptureFieldOfView; // 0x108 (0x4)
	float NearPlaneDist; // 0x10c (0x4)
	bool bUseRenderLODMeshes; // 0x110 (0x1)
	bool bEnableSimplifyPrePass; // 0x111 (0x1)
	bool bEnableParallelBaking; // 0x112 (0x1)
	bool bPrintDebugMessages; // 0x113 (0x1)
	bool bEmitFullDebugMesh; // 0x114 (0x1)
	unsigned char padding_115[0x3]; // 0x115 (0x3)
};

