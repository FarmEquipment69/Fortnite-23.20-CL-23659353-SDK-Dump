// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionGetAxis
// Size: 0x50
struct FRigUnit_MathQuaternionGetAxis : FRigUnit_MathQuaternionBase
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Quaternion; // 0x10 (0x20)
	struct TEnumAsByte<EAxis> Axis; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FVector Result; // 0x38 (0x18)
};

