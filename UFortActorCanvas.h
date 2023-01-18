// Class /Script/FortniteUI.FortActorCanvas
// Size: 0x1b8
class UFortActorCanvas : public UPanelWidget
{
	struct FGameplayTagContainer DefaultHUDElementTags; // 0x160 (0x20)
	bool bDrawElementsInOrder; // 0x180 (0x1)
	unsigned char padding_181[0x37]; // 0x181 (0x37)

	/* Functions */

	// Function /Script/FortniteUI.FortActorCanvas.OnHUDElementVisibilityChanged (Underlying native function: OnHUDElementVisibilityChanged 0x2617d84)
	void OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortActorCanvas.AddActorIndicator (Underlying native function: AddActorIndicator 0x28579b8)
	class UFortActorCanvasSlot* AddActorIndicator(class UFortActorIndicatorWidget*& Indicator); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

