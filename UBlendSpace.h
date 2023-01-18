// Class /Script/Engine.BlendSpace
// Size: 0x1a0
class UBlendSpace : public UAnimationAsset
{
	unsigned char unreflected_80[0x8]; // 0x80 (0x8) 
	bool bContainsRotationOffsetMeshSpaceSamples; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	struct FInterpolationParameter InterpolationParam[0x3]; // 0x8c (0x10) (ARRAY) 
	float TargetWeightInterpolationSpeedPerSec; // 0xbc (0x4)
	bool bTargetWeightInterpolationEaseInOut; // 0xc0 (0x1)
	bool bAllowMeshSpaceBlending; // 0xc1 (0x1)
	bool bLoop; // 0xc2 (0x1)
	unsigned char unreflected_c3[0x1]; // 0xc3 (0x1) 
	float AnimLength; // 0xc4 (0x4)
	struct TEnumAsByte<ENotifyTriggerMode> NotifyTriggerMode; // 0xc8 (0x1)
	bool bInterpolateUsingGrid; // 0xc9 (0x1)
	enum EPreferredTriangulationDirection PreferredTriangulationDirection; // 0xca (0x1)
	unsigned char unreflected_cb[0x5]; // 0xcb (0x5) 
	struct TArray<struct FPerBoneInterpolation> PerBoneBlend; // 0xd0 (0x10)
	int SampleIndexWithMarkers; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct TArray<struct FBlendSample> SampleData; // 0xe8 (0x10)
	struct TArray<struct FEditorElement> GridSamples; // 0xf8 (0x10)
	struct FBlendSpaceData BlendSpaceData; // 0x108 (0x20)
	struct FBlendParameter BlendParameters[0x3]; // 0x128 (0x20) (ARRAY) 
	struct TEnumAsByte<EBlendSpaceAxis> AxisToScaleAnimation; // 0x188 (0x1)
	unsigned char unreflected_189[0x7]; // 0x189 (0x7) 
	struct TArray<int> DimensionIndices; // 0x190 (0x10)
};

