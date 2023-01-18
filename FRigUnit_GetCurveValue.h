// ScriptStruct /Script/ControlRig.RigUnit_GetCurveValue
// Size: 0x30
struct FRigUnit_GetCurveValue : FRigUnit
{
	struct FName Curve; // 0x8 (0x4)
	bool Valid; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	float Value; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FCachedRigElement CachedCurveIndex; // 0x18 (0x18)
};

