// Class /Script/FortniteUI.BacchusPluginContentWidget
// Size: 0x330
class UBacchusPluginContentWidget : public UBacchusHUDElement
{
	struct FName PluginContentTagName; // 0x318 (0x4)
	unsigned char unreflected_31c[0x4]; // 0x31c (0x4) 
	class UOverlay* MyOverlay; // 0x320 (0x8)
	unsigned char padding_328[0x8]; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.BacchusPluginContentWidget.OnPluginHUDWidgetRemoved (Underlying native function: OnPluginHUDWidgetRemoved 0xa5d1bb0)
	void OnPluginHUDWidgetRemoved(struct FGameplayTag& WidgetTag); // (Final | Native | Private)

	// Function /Script/FortniteUI.BacchusPluginContentWidget.OnPluginHUDWidgetAdded (Underlying native function: OnPluginHUDWidgetAdded 0xa5d1ab4)
	void OnPluginHUDWidgetAdded(struct FGameplayTag& WidgetTag, struct TWeakObjectPtr<class UClass>& SoftWidgetClass); // (Final | Native | Private)
};

