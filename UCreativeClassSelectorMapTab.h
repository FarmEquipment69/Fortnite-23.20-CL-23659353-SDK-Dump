// Class /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab
// Size: 0x410
class UCreativeClassSelectorMapTab : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x10]; // 0x3a8 (0x10) 
	struct FAthenaMapScreenContainerTabInfo MapTabInfo; // 0x3b8 (0x50)
	class UCreativeClassSelector* CreativeClassSelector; // 0x408 (0x8)

	/* Functions */

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab.SetTabName (Underlying native function: SetTabName 0x7362ee0)
	void SetTabName(struct FText& TabName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CRD_ClassSelectorUI.CreativeClassSelectorMapTab.OnTabAdded (Has no native function)
	void OnTabAdded(); // (Event | Public | BlueprintEvent)
};

