// ScriptStruct /Script/ControlRig.RigUnit_SwitchParent
// Size: 0x50
struct FRigUnit_SwitchParent : FRigUnit_DynamicHierarchyBaseMutable
{
	enum ERigSwitchParentMode Mode; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FRigElementKey* Child; // 0x3c (0x8)
	struct FRigElementKey* Parent; // 0x44 (0x8)
	bool bMaintainGlobal; // 0x4c (0x1)
	unsigned char padding_4d[0x3]; // 0x4d (0x3)
};

