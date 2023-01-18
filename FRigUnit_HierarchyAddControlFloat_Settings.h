// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlFloat_Settings
// Size: 0xd0
struct FRigUnit_HierarchyAddControlFloat_Settings : FRigUnit_HierarchyAddControl_Settings
{
	enum ERigControlAxis PrimaryAxis; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FRigUnit_HierarchyAddControlFloat_LimitSettings Limits; // 0x14 (0x10)
	unsigned char unreflected_24[0xc]; // 0x24 (0xc) 
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x30 (0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xb0 (0x20)
};

