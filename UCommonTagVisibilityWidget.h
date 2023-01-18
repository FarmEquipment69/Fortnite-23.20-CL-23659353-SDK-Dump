// Class /Script/FortniteUI.CommonTagVisibilityWidget
// Size: 0x1a8
class UCommonTagVisibilityWidget : public UContentWidget
{
	struct FGameplayTagContainer HUDElementTag; // 0x160 (0x20)
	unsigned char padding_180[0x28]; // 0x180 (0x28)

	/* Functions */

	// Function /Script/FortniteUI.CommonTagVisibilityWidget.OnVisibilitySetEvent (Has no native function)
	void OnVisibilitySetEvent(enum ESlateVisibility& InVisibility); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.CommonTagVisibilityWidget.Initialize (Underlying native function: Initialize 0x1743228)
	void Initialize(class ULocalPlayer*& OwningLocalPlayer, class APlayerController*& OwningPlayerController); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.CommonTagVisibilityWidget.HandleOnHUDElementVisibilityChanged (Underlying native function: HandleOnHUDElementVisibilityChanged 0x27d39d4)
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags); // (Final | Native | Protected | HasOutParms)
};

