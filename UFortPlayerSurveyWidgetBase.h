// Class /Script/FortniteUI.FortPlayerSurveyWidgetBase
// Size: 0x5b0
class UFortPlayerSurveyWidgetBase : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x8]; // 0x3a8 (0x8) 
	class UCommonTextBlock* TextTitle; // 0x3b0 (0x8)
	class URichTextBlock* TextQuestion; // 0x3b8 (0x8)
	class UCanvasPanel* CanvasPanelResponseFrame; // 0x3c0 (0x8)
	class UCommonButtonLegacy* ButtonSkip; // 0x3c8 (0x8)
	class UWidgetSwitcher* SwitcherNextButton; // 0x3d0 (0x8)
	class UCommonButtonLegacy* ButtonNextQuestion; // 0x3d8 (0x8)
	class UCommonButtonLegacy* ButtonSubmit; // 0x3e0 (0x8)
	class UCommonTextBlock* TextQuestionCount; // 0x3e8 (0x8)
	struct FDataTableRowHandle DeselectInputAction; // 0x3f0 (0x10)
	struct FDataTableRowHandle ExitInputAction; // 0x400 (0x10)
	struct TMap<enum EFortPlayerSurveyQuestionType, class UClass*> ResponseWidgetMap; // 0x410 (0x50)
	struct FPrimaryContentSetup PrimaryContentSetup; // 0x460 (0x3)
	unsigned char unreflected_463[0x5]; // 0x463 (0x5) 
	struct TMap<enum EFortPlayerSurveyQuestionType, class UFortPlayerSurveyResponseWidget*> ResponseWidgetInstances; // 0x468 (0x50)
	unsigned char padding_4b8[0xf8]; // 0x4b8 (0xf8)
};

