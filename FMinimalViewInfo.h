// ScriptStruct /Script/Engine.MinimalViewInfo
// Size: 0x7c0
struct FMinimalViewInfo
{
	struct FVector Location; // 0x0 (0x18)
	struct FRotator Rotation; // 0x18 (0x18)
	float FOV; // 0x30 (0x4)
	float DesiredFOV; // 0x34 (0x4)
	float OrthoWidth; // 0x38 (0x4)
	float OrthoNearClipPlane; // 0x3c (0x4)
	float OrthoFarClipPlane; // 0x40 (0x4)
	float PerspectiveNearClipPlane; // 0x44 (0x4)
	float AspectRatio; // 0x48 (0x4)
	unsigned char bConstrainAspectRatio; // 0x4c (0x1)
	unsigned char bUseFieldOfViewForLOD; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	struct TEnumAsByte<ECameraProjectionMode> ProjectionMode; // 0x50 (0x1)
	unsigned char unreflected_51[0x3]; // 0x51 (0x3) 
	float PostProcessBlendWeight; // 0x54 (0x4)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FPostProcessSettings PostProcessSettings; // 0x60 (0x6e0)
	struct FVector2D OffCenterProjectionOffset; // 0x740 (0x10)
	unsigned char padding_750[0x70]; // 0x750 (0x70)
};

