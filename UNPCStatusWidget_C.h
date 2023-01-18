// WidgetBlueprintGeneratedClass /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C
// Size: 0x3a8
class UNPCStatusWidget_C : public UNPCStatusWidgetBase
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x340 (0x8)
	class UNPCStatusWidgetBar_C* BarHealth; // 0x348 (0x8)
	class UNPCStatusWidgetBar_C* BarShield; // 0x350 (0x8)
	class UOverlay* OverlayBarsPrefix; // 0x358 (0x8)
	class UVerticalBox* VerticalBoxBarExtensions; // 0x360 (0x8)
	struct FTimerHandle* VisibiltyTimer; // 0x368 (0x8)
	struct FMulticastInlineDelegate VisibilityChanged; // 0x370 (0x10)
	double StatusWidgetVisibleDuration; // 0x380 (0x8)
	double CurrentHealthPercent; // 0x388 (0x8)
	double CurrentShieldPercent; // 0x390 (0x8)
	bool KeepVisibilityOn; // 0x398 (0x1)
	unsigned char unreflected_399[0x7]; // 0x399 (0x7) 
	class AFortPawn* FortPawn; // 0x3a0 (0x8)

	/* Functions */

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.EventUpdateStatus (Has no native function)
	void EventUpdateStatus(double& Health, double& Shield, bool& ShowShield); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.EventHideStatus (Has no native function)
	void EventHideStatus(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.ChangeWidgetVisibleDuration (Has no native function)
	void ChangeWidgetVisibleDuration(double& StatusWidgetVisibleDuration); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.SetKeepVisibilityOn (Has no native function)
	void SetKeepVisibilityOn(bool& KeepVisibilityOn); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.TryCallEventHideByTimer (Has no native function)
	void TryCallEventHideByTimer(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.BP_HandlePlaylistExtensionWidgetCreated (Has no native function)
	void BPHandlePlaylistExtensionWidgetCreated(class UUserWidget*& Widget, enum EUIExtensionSlot& SlotType); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.Construct (Has no native function)
	void Construct(); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.OnPawnFocused (Has no native function)
	void OnPawnFocused(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.ExecuteUbergraph_NPCStatusWidget (Has no native function)
	void ExecuteUbergraphNPCStatusWidget(int& EntryPoint, double& K2NodeCustomEventStatusWidgetVisibleDuration, bool& CallFuncK2IsValidTimerHandleReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, bool& CallFuncBooleanORReturnValue, bool& K2NodeCustomEventKeepVisibilityOn, bool& CallFuncK2IsValidTimerHandleReturnValue1, class UUserWidget*& K2NodeEventWidget, enum EUIExtensionSlot& K2NodeEventSlotType, bool& K2NodeSwitchEnumCmpSuccess, class UVerticalBoxSlot*& CallFuncAddChildToVerticalBoxReturnValue, class UNPCStatusWidgetExtensionBase*& K2NodeDynamicCastAsNPCStatusWidgetExtensionBase, bool& K2NodeDynamicCastbSuccess, class UOverlaySlot*& CallFuncAddChildToOverlayReturnValue, double& K2NodeCustomEventhealth, double& K2NodeCustomEventshield, bool& K2NodeCustomEventShowShield, bool& CallFuncBooleanNANDReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, bool& CallFuncNotEqualDoubleDoubleReturnValue, bool& CallFuncNotEqualDoubleDoubleReturnValue1, bool& CallFuncBooleanORReturnValue1, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1); // (Final | 0x00008000 | HasDefaults)

	// Function /Game/Athena/HUD/Actors/NPCStatusWidget.NPCStatusWidget_C.VisibilityChanged__DelegateSignature (Has no native function)
	void VisibilityChangedDelegateSignature(bool& bVisible); // (Public | Delegate | BlueprintCallable | BlueprintEvent)
};

