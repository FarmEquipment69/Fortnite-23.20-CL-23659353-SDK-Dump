// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_LimitSettings
// Size: 0x30
struct FRigUnit_HierarchyAddControlVector2D_LimitSettings
{
	struct FRigControlLimitEnabled LimitX; // 0x0 (0x2)
	struct FRigControlLimitEnabled LimitY; // 0x2 (0x2)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FVector2D MinValue; // 0x8 (0x10)
	struct FVector2D MaxValue; // 0x18 (0x10)
	bool bDrawLimits; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

