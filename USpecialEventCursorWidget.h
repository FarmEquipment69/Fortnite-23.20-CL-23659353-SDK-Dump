// Class /Script/SpecialEventGameplayUI.SpecialEventCursorWidget
// Size: 0x288
class USpecialEventCursorWidget : public UUserWidget
{
	unsigned char unreflected_268[0x8]; // 0x268 (0x8) 
	bool bAutomaticallyChangeVisibility; // 0x270 (0x1)
	unsigned char unreflected_271[0x7]; // 0x271 (0x7) 
	class USpecialEventCursorPawnComponent* CursorPawnComponent; // 0x278 (0x8)
	unsigned char padding_280[0x8]; // 0x280 (0x8)

	/* Functions */

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnViewportLocationChanged (Underlying native function: OnViewportLocationChanged 0x76cc360)
	void OnViewportLocationChanged(class USpecialEventCursorPawnComponent*& InCursorPawnComponent, struct FVector2D& NormalizedLocation, struct FVector2D& ViewportLocation); // (Native | Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnDesiredVisibilityChanged (Underlying native function: OnDesiredVisibilityChanged 0x76cc140)
	void OnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent*& InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool& bShouldBeVisible); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.OnCursorModeChanged (Underlying native function: OnCursorModeChanged 0x76cbf30)
	void OnCursorModeChanged(class USpecialEventCursorPawnComponent*& InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // (Final | Native | Private | HasOutParms)

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.GetCursorModeTags (Underlying native function: GetCursorModeTags 0x76cbd4c)
	struct FGameplayTagContainer GetCursorModeTags(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnDesiredVisibilityChanged (Has no native function)
	void BPOnDesiredVisibilityChanged(class USpecialEventCursorPawnComponent*& InCursorPawnComponent, struct FGameplayTag& CursorModeTag, bool& bShouldBeVisible); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/SpecialEventGameplayUI.SpecialEventCursorWidget.BP_OnCursorModeChanged (Has no native function)
	void BPOnCursorModeChanged(class USpecialEventCursorPawnComponent*& InCursorPawnComponent, struct FGameplayTag& NewCursorModeTag, struct FGameplayTag& OldCursorModeTag); // (Event | Protected | HasOutParms | BlueprintEvent)
};

