// ScriptStruct /Script/ControlRig.RigUnit_SphericalPoseReader
// Size: 0x1d0
struct FRigUnit_SphericalPoseReader : FRigUnit_HighlevelBaseMutable
{
	float OutputParam; // 0x38 (0x4)
	struct FRigElementKey* DriverItem; // 0x3c (0x8)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FVector DriverAxis; // 0x48 (0x18)
	struct FVector RotationOffset; // 0x60 (0x18)
	float ActiveRegionSize; // 0x78 (0x4)
	struct FRegionScaleFactors ActiveRegionScaleFactors; // 0x7c (0x10)
	float FalloffSize; // 0x8c (0x4)
	struct FRegionScaleFactors FalloffRegionScaleFactors; // 0x90 (0x10)
	bool FlipWidthScaling; // 0xa0 (0x1)
	bool FlipHeightScaling; // 0xa1 (0x1)
	unsigned char unreflected_a2[0x2]; // 0xa2 (0x2) 
	struct FRigElementKey* OptionalParentItem; // 0xa4 (0x8)
	struct FSphericalPoseReaderDebugSettings Debug; // 0xac (0x10)
	struct FSphericalRegion InnerRegion; // 0xbc (0x14)
	struct FSphericalRegion OuterRegion; // 0xd0 (0x14)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	struct FVector DriverNormal; // 0xe8 (0x18)
	struct FVector Driver2D; // 0x100 (0x18)
	struct FCachedRigElement DriverCache; // 0x118 (0x18)
	struct FCachedRigElement OptionalParentCache; // 0x130 (0x18)
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FTransform LocalDriverTransformInit; // 0x150 (0x60)
	struct FVector CachedRotationOffset; // 0x1b0 (0x18)
	bool bCachedInitTransforms; // 0x1c8 (0x1)
	unsigned char padding_1c9[0x7]; // 0x1c9 (0x7)
};

