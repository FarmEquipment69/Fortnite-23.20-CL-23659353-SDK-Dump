// ScriptStruct /Script/DynamicUI.DynamicUIWidgetTarget
// Size: 0x88
struct FDynamicUIWidgetTarget
{
	struct FName WidgetPath; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TWeakObjectPtr<class UClass> WidgetClass; // 0x8 (0x28)
	struct FName UniqueId; // 0x30 (0x4)
	unsigned char bUseUniqueID; // 0x34 (0x1)
	unsigned char padding_35[0x53]; // 0x35 (0x53)
};

