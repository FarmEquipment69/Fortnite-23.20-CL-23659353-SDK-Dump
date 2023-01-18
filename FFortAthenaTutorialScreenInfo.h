// ScriptStruct /Script/FortniteUI.FortAthenaTutorialScreenInfo
// Size: 0x100
struct FFortAthenaTutorialScreenInfo
{
	enum EFortAthenaTutorialSubstep Substep; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FVector2D TextPromptPosition; // 0x8 (0x10)
	struct FVector2D TextPromptPositionAthenaHUD; // 0x18 (0x10)
	struct FAnchors TextPromptAnchors; // 0x28 (0x20)
	struct FAnchors TextPromptAnchorsAthenaHUD; // 0x48 (0x20)
	struct FText TextPromptTextTouch; // 0x68 (0x18)
	struct FText TextPromptTextGamepad; // 0x80 (0x18)
	struct FText TextPromptTextTouchLegacy; // 0x98 (0x18)
	struct FDataTableRowHandle ActionWidgetDataTableRow; // 0xb0 (0x10)
	struct TArray<struct FName> KeybindWidgetNameArray; // 0xc0 (0x10)
	struct TArray<struct FName> KeybindWidgetGamepadNameArray; // 0xd0 (0x10)
	bool ForceSingleInputKeybind; // 0xe0 (0x1)
	unsigned char unreflected_e1[0x7]; // 0xe1 (0x7) 
	struct TArray<struct FFortAthenaTutorialHighlightInfo> HighlightInfo; // 0xe8 (0x10)
	bool DisplayNextButton; // 0xf8 (0x1)
	bool DisplayTextPromptTarget; // 0xf9 (0x1)
	enum EFortAthenaTutorialScreenExtraWidget ExtraWidget; // 0xfa (0x1)
	unsigned char padding_fb[0x5]; // 0xfb (0x5)
};

