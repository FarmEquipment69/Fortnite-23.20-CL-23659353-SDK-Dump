// ScriptStruct /Script/RigVM.RigVMUserWorkflow
// Size: 0x58
struct FRigVMUserWorkflow
{
	struct FString Title; // 0x8 (0x10)
	struct FString ToolTip; // 0x18 (0x10)
	enum ERigVMUserWorkflowType Type; // 0x28 (0x1)
	unsigned char unreflected_29[0x17]; // 0x29 (0x17) 
	struct FDelegate PerformDynamicDelegate; // 0x40 (0xc)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	unsigned char OptionsClass_50[0x8]; // 0x50 (0x8) (UNHANDLED PROPERTY TYPE: ClassPtrProperty UID: 0)
};

