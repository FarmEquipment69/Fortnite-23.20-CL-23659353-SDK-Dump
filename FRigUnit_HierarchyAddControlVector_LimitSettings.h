// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlVector_LimitSettings
// Size: 0x40
struct FRigUnit_HierarchyAddControlVector_LimitSettings
{
	struct FRigControlLimitEnabled LimitX; // 0x0 (0x2)
	struct FRigControlLimitEnabled LimitY; // 0x2 (0x2)
	struct FRigControlLimitEnabled LimitZ; // 0x4 (0x2)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	struct FVector MinValue; // 0x8 (0x18)
	struct FVector MaxValue; // 0x20 (0x18)
	bool bDrawLimits; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

