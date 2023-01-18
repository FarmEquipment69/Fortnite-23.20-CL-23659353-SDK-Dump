// Class /Script/FortniteUI.FortSettingDetailView
// Size: 0x340
class UFortSettingDetailView : public UUserWidget
{
	class UFortSettingVisualData* VisualData; // 0x268 (0x8)
	struct FUserWidgetPool ExtensionWidgetPool; // 0x270 (0x88)
	class UFortSetting* CurrentSetting; // 0x2f8 (0x8)
	unsigned char unreflected_300[0x10]; // 0x300 (0x10) 
	class UCommonTextBlock* TextSettingName; // 0x310 (0x8)
	class UCommonRichTextBlock* RichTextDescription; // 0x318 (0x8)
	class UCommonRichTextBlock* RichTextDynamicDetails; // 0x320 (0x8)
	class UCommonRichTextBlock* RichTextWarningDetails; // 0x328 (0x8)
	class UCommonRichTextBlock* RichTextDisabledDetails; // 0x330 (0x8)
	class UVerticalBox* BoxDetailsExtension; // 0x338 (0x8)
};

