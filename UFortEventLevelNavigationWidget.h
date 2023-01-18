// Class /Script/FortniteGame.FortEventLevelNavigationWidget
// Size: 0x2c0
class UFortEventLevelNavigationWidget : public UCommonUserWidget
{
	class UCommonButtonLegacy* ButtonNavigation; // 0x290 (0x8)
	unsigned char padding_298[0x28]; // 0x298 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortEventLevelNavigationWidget.SetBangState (Has no native function)
	void SetBangState(bool& bShowBang); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationWidget.OnObjectHoverEnd (Has no native function)
	void OnObjectHoverEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationWidget.OnObjectHoverBegin (Has no native function)
	void OnObjectHoverBegin(struct FNavWidgetSettings& NavWidgetSettings); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortEventLevelNavigationWidget.HandleInputMethodChanged (Underlying native function: HandleInputMethodChanged 0x8545f6c)
	void HandleInputMethodChanged(enum ECommonInputType& CurrentInputType); // (Final | Native | Public)
};

