// Class /Script/UIFramework.UIFrameworkWidget
// Size: 0x90
class UUIFrameworkWidget : public UObject
{
	bool bIsEnabled; // 0x28 (0x1)
	enum ESlateVisibility Visibility; // 0x29 (0x1)
	unsigned char unreflected_2a[0x6]; // 0x2a (0x6) 
	struct TWeakObjectPtr<class UClass> WidgetClass; // 0x30 (0x28)
	struct FUIFrameworkWidgetId* ID; // 0x58 (0x8)
	struct TScriptInterface<class IUIFrameworkWidgetWrapperInterface> Wrapper; // 0x60 (0x10)
	unsigned char unreflected_70[0x8]; // 0x70 (0x8) 
	struct FUIFrameworkParentWidget AuthorityParent; // 0x78 (0x10)
	class UWidget* LocalUMGWidget; // 0x88 (0x8)

	/* Functions */

	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_Visibility (Underlying native function: OnRep_Visibility 0x70c5874)
	void OnRepVisibility(); // (Final | Native | Private)

	// Function /Script/UIFramework.UIFrameworkWidget.OnRep_IsEnabled (Underlying native function: OnRep_IsEnabled 0x70c5710)
	void OnRepIsEnabled(); // (Final | Native | Private)
};

