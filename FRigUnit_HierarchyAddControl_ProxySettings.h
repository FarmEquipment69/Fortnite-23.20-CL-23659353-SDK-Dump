// ScriptStruct /Script/ControlRig.RigUnit_HierarchyAddControl_ProxySettings
// Size: 0x20
struct FRigUnit_HierarchyAddControl_ProxySettings
{
	bool bIsProxy; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct TArray<struct FRigElementKey*> DrivenControls; // 0x8 (0x10)
	enum ERigControlVisibility ShapeVisibility; // 0x18 (0x1)
	unsigned char padding_19[0x7]; // 0x19 (0x7)
};

