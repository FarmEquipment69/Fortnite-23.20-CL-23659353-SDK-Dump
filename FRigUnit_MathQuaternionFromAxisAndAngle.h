// ScriptStruct /Script/ControlRig.RigUnit_MathQuaternionFromAxisAndAngle
// Size: 0x50
struct FRigUnit_MathQuaternionFromAxisAndAngle : FRigUnit_MathQuaternionBase
{
	struct FVector Axis; // 0x8 (0x18)
	float Angle; // 0x20 (0x4)
	unsigned char unreflected_24[0xc]; // 0x24 (0xc) 
	struct FQuat Result; // 0x30 (0x20)
};

