// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControlVector2D_Settings
// Size: 0xf0
struct FRigUnit_HierarchyAddControlVector2D_Settings : FRigUnit_HierarchyAddControl_Settings
{
	enum ERigControlAxis PrimaryAxis; // 0x10 (0x1)
	unsigned char unreflected_11[0x7]; // 0x11 (0x7) 
	struct FRigUnit_HierarchyAddControlVector2D_LimitSettings Limits; // 0x18 (0x30)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	struct FRigUnit_HierarchyAddControl_ShapeSettings Shape; // 0x50 (0x80)
	struct FRigUnit_HierarchyAddControl_ProxySettings Proxy; // 0xd0 (0x20)
};

