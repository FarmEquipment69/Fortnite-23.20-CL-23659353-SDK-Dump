// ScriptStruct /Script/CommonUI.UIInputAction
// Size: 0x30
struct FUIInputAction
{
	struct FUIActionTag ActionTag; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText DefaultDisplayName; // 0x8 (0x18)
	struct TArray<struct FUIActionKeyMapping> KeyMappings; // 0x20 (0x10)
};

