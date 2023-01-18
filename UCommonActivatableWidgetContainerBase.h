// Class /Script/CommonUI.CommonActivatableWidgetContainerBase
// Size: 0x268
class UCommonActivatableWidgetContainerBase : public UWidget
{
	unsigned char unreflected_148[0x18]; // 0x148 (0x18) 
	enum ECommonSwitcherTransition TransitionType; // 0x160 (0x1)
	enum ETransitionCurve TransitionCurveType; // 0x161 (0x1)
	unsigned char unreflected_162[0x2]; // 0x162 (0x2) 
	float TransitionDuration; // 0x164 (0x4)
	struct TArray<class UCommonActivatableWidget*> WidgetList; // 0x168 (0x10)
	class UCommonActivatableWidget* DisplayedWidget; // 0x178 (0x8)
	struct FUserWidgetPool GeneratedWidgetsPool; // 0x180 (0x88)
	unsigned char padding_208[0x60]; // 0x208 (0x60)

	/* Functions */

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.SetTransitionDuration (Underlying native function: SetTransitionDuration 0x6a4eb38)
	void SetTransitionDuration(float& Duration); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.RemoveWidget (Underlying native function: RemoveWidget 0x6a4c9a8)
	void RemoveWidget(class UCommonActivatableWidget*& WidgetToRemove); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetTransitionDuration (Underlying native function: GetTransitionDuration 0x6a4be20)
	float GetTransitionDuration(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.GetActiveWidget (Underlying native function: GetActiveWidget 0x6a4abb0)
	class UCommonActivatableWidget* GetActiveWidget(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.ClearWidgets (Underlying native function: ClearWidgets 0x6a4a6dc)
	void ClearWidgets(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonActivatableWidgetContainerBase.BP_AddWidget (Underlying native function: BP_AddWidget 0x6a4a2b8)
	class UCommonActivatableWidget* BPAddWidget(class UClass*& ActivatableWidgetClass); // (Final | Native | Private | BlueprintCallable)
};

