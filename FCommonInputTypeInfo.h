// ScriptStruct /Script/CommonUI.CommonInputTypeInfo
// Size: 0xe0
struct FCommonInputTypeInfo
{
	struct FKey Key; // 0x0 (0x18)
	enum EInputActionState OverrrideState; // 0x18 (0x1)
	bool bActionRequiresHold; // 0x19 (0x1)
	unsigned char unreflected_1a[0x2]; // 0x1a (0x2) 
	float HoldTime; // 0x1c (0x4)
	struct FSlateBrush OverrideBrush; // 0x20 (0xc0)
};

