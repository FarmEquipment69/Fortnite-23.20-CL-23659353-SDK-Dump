// ScriptStruct /Script/FortniteUI.FortUITutorialData
// Size: 0x58
struct FFortUITutorialData : FTableRowBase
{
	struct FName TutorialWidgetName; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FText Title; // 0x10 (0x18)
	struct FString DevComment; // 0x28 (0x10)
	struct TArray<struct FText> Descriptions; // 0x38 (0x10)
	struct TArray<struct TWeakObjectPtr<class UTexture2D>> PreviewImages; // 0x48 (0x10)
};

