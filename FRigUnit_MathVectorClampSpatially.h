// ScriptStruct /Script/ControlRig.RigUnit_MathVectorClampSpatially
// Size: 0xc0
struct FRigUnit_MathVectorClampSpatially : FRigUnit_MathVectorBase
{
	struct FVector Value; // 0x8 (0x18)
	struct TEnumAsByte<EAxis> Axis; // 0x20 (0x1)
	struct TEnumAsByte<EControlRigClampSpatialMode> Type; // 0x21 (0x1)
	unsigned char unreflected_22[0x2]; // 0x22 (0x2) 
	float Minimum; // 0x24 (0x4)
	float Maximum; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct FTransform Space; // 0x30 (0x60)
	bool bDrawDebug; // 0x90 (0x1)
	unsigned char unreflected_91[0x3]; // 0x91 (0x3) 
	struct FLinearColor DebugColor; // 0x94 (0x10)
	float DebugThickness; // 0xa4 (0x4)
	struct FVector Result; // 0xa8 (0x18)
};

