// ScriptStruct /Script/ControlRig.RigUnit_SetCurveValue
// Size: 0x58
struct FRigUnit_SetCurveValue : FRigUnitMutable
{
	struct FName Curve; // 0x38 (0x4)
	float Value; // 0x3c (0x4)
	struct FCachedRigElement CachedCurveIndex; // 0x40 (0x18)
};

