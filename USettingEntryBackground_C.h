// WidgetBlueprintGeneratedClass /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C
// Size: 0x290
class USettingEntryBackground_C : public UUserWidget
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x268 (0x8)
	class UWidgetAnimation* OnHover; // 0x270 (0x8)
	class UNamedSlot* Content; // 0x278 (0x8)
	struct FMulticastInlineDelegate OnMouseEnterChanged; // 0x280 (0x10)

	/* Functions */

	// Function /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C.OnMouseEnter (Has no native function)
	void OnMouseEnter(struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C.OnMouseLeave (Has no native function)
	void OnMouseLeave(struct FPointerEvent& MouseEvent); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C.ExecuteUbergraph_SettingEntryBackground (Has no native function)
	void ExecuteUbergraphSettingEntryBackground(int& EntryPoint, bool& CallFuncIsUsingTouchReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationForwardReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReverseReturnValue, struct FGeometry& K2NodeEventMyGeometry, struct FPointerEvent& K2NodeEventMouseEvent1, struct FPointerEvent& K2NodeEventMouseEvent); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/Settings/SettingEntryBackground.SettingEntryBackground_C.OnMouseEnterChanged__DelegateSignature (Has no native function)
	void OnMouseEnterChangedDelegateSignature(bool& IsEnterEvent); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

