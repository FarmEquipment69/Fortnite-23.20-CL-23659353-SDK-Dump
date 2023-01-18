// ScriptStruct /Script/ControlRig.RigUnit_IsInteracting
// Size: 0x20
struct FRigUnit_IsInteracting : FRigUnit
{
	bool bIsInteracting; // 0x8 (0x1)
	bool bIsTranslating; // 0x9 (0x1)
	bool bIsRotating; // 0xa (0x1)
	bool bIsScaling; // 0xb (0x1)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FRigElementKey*> Items; // 0x10 (0x10)
};

