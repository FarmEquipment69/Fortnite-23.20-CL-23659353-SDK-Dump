// ScriptStruct /Script/ControlRig.RigUnit_SendEvent
// Size: 0x50
struct FRigUnit_SendEvent : FRigUnitMutable
{
	enum ERigEvent Event; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	struct FRigElementKey* Item; // 0x3c (0x8)
	float OffsetInSeconds; // 0x44 (0x4)
	bool bEnable; // 0x48 (0x1)
	bool bOnlyDuringInteraction; // 0x49 (0x1)
	unsigned char padding_4a[0x6]; // 0x4a (0x6)
};

