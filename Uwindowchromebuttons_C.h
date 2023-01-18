// WidgetBlueprintGeneratedClass /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C
// Size: 0x2b0
class Uwindowchromebuttons_C : public UCommonUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x290 (0x8)
	class UWidgetAnimation* FadeOut; // 0x298 (0x8)
	class UWidgetAnimation* FadeIn; // 0x2a0 (0x8)
	class UWindowTitleBarArea* WindowTitleBarArea107; // 0x2a8 (0x8)

	/* Functions */

	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/UI/Foundation/Shell/windowchromebuttons.windowchromebuttons_C.ExecuteUbergraph_windowchromebuttons (Has no native function)
	void ExecuteUbergraphwindowchromebuttons(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000 | HasDefaults)
};

