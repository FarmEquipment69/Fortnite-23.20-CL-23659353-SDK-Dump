// ScriptStruct /Script/ControlRig.RigUnit_VisualDebugVector
// Size: 0x40
struct FRigUnit_VisualDebugVector : FRigUnit_DebugBase
{
	struct FVector Value; // 0x8 (0x18)
	bool bEnabled; // 0x20 (0x1)
	enum ERigUnitVisualDebugPointMode Mode; // 0x21 (0x1)
	unsigned char unreflected_22[0x2]; // 0x22 (0x2) 
	struct FLinearColor Color; // 0x24 (0x10)
	float Thickness; // 0x34 (0x4)
	float Scale; // 0x38 (0x4)
	struct FName BoneSpace; // 0x3c (0x4)
};

