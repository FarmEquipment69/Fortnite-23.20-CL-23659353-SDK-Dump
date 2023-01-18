// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlVector_Settings
// Size: 0x100
struct FRigUnit_HierarchyAddControlVector_Settings : FRigUnit_HierarchyAddControl_Settings
{
	bool bIsPosition; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FRigUnit_HierarchyAddControlVector_LimitSettings Limits; // 0x18 (0x40)
	unsigned char unreflected_58[0x8]; // 0x58 (0x8) 
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x60 (0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xe0 (0x20)
};

