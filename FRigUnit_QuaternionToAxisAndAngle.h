// ScriptStruct /Script/ControlRig.RigUnit_QuaternionToAxisAndAngle
// Size: 0x50
struct FRigUnit_QuaternionToAxisAndAngle : FRigUnit
{
	unsigned char unreflected_8[0x8]; // 0x8 (0x8) 
	struct FQuat Argument; // 0x10 (0x20)
	struct FVector Axis; // 0x30 (0x18)
	float Angle; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

