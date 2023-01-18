// ScriptStruct /Script/ControlRig.RigUnit_SetMultiControlRotator_Entry
// Size: 0x28
struct FRigUnit_SetMultiControlRotator_Entry
{
	struct FName Control; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FRotator Rotator; // 0x8 (0x18)
	enum EBoneGetterSetterMode Space; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

