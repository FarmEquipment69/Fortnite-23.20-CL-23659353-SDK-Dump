// Class /Script/CommonUI.CommonAnimatedSwitcher
// Size: 0x1e8
class UCommonAnimatedSwitcher : public UWidgetSwitcher
{
	unsigned char unreflected_178[0x30]; // 0x178 (0x30) 
	enum ECommonSwitcherTransition TransitionType; // 0x1a8 (0x1)
	enum ETransitionCurve TransitionCurveType; // 0x1a9 (0x1)
	unsigned char unreflected_1aa[0x2]; // 0x1aa (0x2) 
	float TransitionDuration; // 0x1ac (0x4)
	unsigned char padding_1b0[0x38]; // 0x1b0 (0x38)

	/* Functions */

	// Function /Script/CommonUI.CommonAnimatedSwitcher.SetDisableTransitionAnimation (Underlying native function: SetDisableTransitionAnimation 0x6a4d424)
	void SetDisableTransitionAnimation(bool& bDisableAnimation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsTransitionPlaying (Underlying native function: IsTransitionPlaying 0x6a4c5b0)
	bool IsTransitionPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonAnimatedSwitcher.IsCurrentlySwitching (Underlying native function: IsCurrentlySwitching 0x6a4c418)
	bool IsCurrentlySwitching(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonAnimatedSwitcher.HasWidgets (Underlying native function: HasWidgets 0x6a4c23c)
	bool HasWidgets(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivatePreviousWidget (Underlying native function: ActivatePreviousWidget 0x6a4a130)
	void ActivatePreviousWidget(bool& bCanWrap); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonAnimatedSwitcher.ActivateNextWidget (Underlying native function: ActivateNextWidget 0x6a4a0b0)
	void ActivateNextWidget(bool& bCanWrap); // (Final | Native | Public | BlueprintCallable)
};

