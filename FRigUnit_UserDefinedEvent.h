// ScriptStruct /Script/ControlRig.RigUnit_UserDefinedEvent
// Size: 0x40
struct FRigUnit_UserDefinedEvent : FRigUnit
{
	struct FControlRigExecuteContext ExecuteContext; // 0x8 (0x30)
	struct FName EventName; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

