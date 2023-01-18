// ScriptStruct /Script/ControlRig.RigUnit_MathTransformClampSpatially
// Size: 0x160
struct FRigUnit_MathTransformClampSpatially : FRigUnit_MathTransformBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FTransform Value; // 0x10 (0x60)
	struct TEnumAsByte<EAxis> Axis; // 0x70 (0x1)
	struct TEnumAsByte<EControlRigClampSpatialMode> Type; // 0x71 (0x1)
	unsigned char unreflected_72[0x2]; // 0x72 (0x2) 
	float Minimum; // 0x74 (0x4)
	float Maximum; // 0x78 (0x4)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FTransform Space; // 0x80 (0x60)
	bool bDrawDebug; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x3]; // 0xe1 (0x3) 
	struct FLinearColor DebugColor; // 0xe4 (0x10)
	float DebugThickness; // 0xf4 (0x4)
	unsigned char unreflected_f8[0x8]; // 0xf8 (0x8) 
	struct FTransform Result; // 0x100 (0x60)
};

