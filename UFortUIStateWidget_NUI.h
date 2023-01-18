// Class /Script/FortniteUI.FortUIStateWidget_NUI
// Size: 0x548
class UFortUIStateWidget_NUI : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x20]; // 0x518 (0x20) 
	struct TArray<struct FContentPushState> StackStates; // 0x538 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.SetSocialButtonEnabled (Underlying native function: SetSocialButtonEnabled 0xa9550c8)
	void SetSocialButtonEnabled(bool& bEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.SetFrontEndVisibility (Underlying native function: SetFrontEndVisibility 0xa954e4c)
	void SetFrontEndVisibility(bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.RequestOpenSocialPanel (Underlying native function: RequestOpenSocialPanel 0xa954e30)
	void RequestOpenSocialPanel(); // (Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PushContentWidgetInternal (Underlying native function: PushContentWidgetInternal 0xa954cd8)
	void PushContentWidgetInternal(class UWidget*& Widget, struct FContentPushState& State); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PushContentWidgetAdvanced (Underlying native function: PushContentWidgetAdvanced 0xa954b88)
	void PushContentWidgetAdvanced(class UWidget*& Widget, bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PushContentWidget (Underlying native function: PushContentWidget 0xa954b04)
	void PushContentWidget(class UWidget*& Widget); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PopContentWidgetInternal (Underlying native function: PopContentWidgetInternal 0xa954a64)
	class UWidget* PopContentWidgetInternal(struct FContentPushState& State); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PopContentWidget (Underlying native function: PopContentWidget 0xa954a40)
	class UWidget* PopContentWidget(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.PopAllContentWidgets (Underlying native function: PopAllContentWidgets 0xa954a2c)
	void PopAllContentWidgets(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnSocialButtonEnabled (Has no native function)
	void OnSocialButtonEnabled(bool& bEnabled); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnOpenSocialMenu (Has no native function)
	void OnOpenSocialMenu(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnLoadingScreenVisibilityChanged (Has no native function)
	void OnLoadingScreenVisibilityChanged(bool& IsVisible); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnHUDScaleChanged (Has no native function)
	void OnHUDScaleChanged(float& HUDScale); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnFrontEndVisibilityUpdated (Has no native function)
	void OnFrontEndVisibilityUpdated(bool& bHideHeader, bool& bHideFooter, bool& bHideChatWidget); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnExitState (Has no native function)
	void OnExitState(enum EFortUIState& NextUIState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnEnterState (Has no native function)
	void OnEnterState(enum EFortUIState& PreviousUIState); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.OnAutoHideBuildingMaterialsChanged (Has no native function)
	void OnAutoHideBuildingMaterialsChanged(bool& AutoHide); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.IsContentOnStack (Underlying native function: IsContentOnStack 0xa954830)
	bool IsContentOnStack(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.GetTopBarWidget (Has no native function)
	class UWidget* GetTopBarWidget(); // (Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteUI.FortUIStateWidget_NUI.DynamicHandleLoadingScreenVisibilityChanged (Underlying native function: DynamicHandleLoadingScreenVisibilityChanged 0xa953b34)
	void DynamicHandleLoadingScreenVisibilityChanged(bool& IsVisible); // (Final | Native | Protected)
};

