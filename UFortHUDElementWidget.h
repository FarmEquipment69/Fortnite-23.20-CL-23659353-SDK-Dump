// Class /Script/FortniteUI.FortHUDElementWidget
// Size: 0x2d0
class UFortHUDElementWidget : public UCommonUserWidget
{
	unsigned char unreflected_290[0x8]; // 0x290 (0x8) 
	struct FGameplayTag ElementTag; // 0x298 (0x4)
	unsigned char unreflected_29c[0x4]; // 0x29c (0x4) 
	struct FGameplayTagContainer HUDElementTag; // 0x2a0 (0x20)
	enum ESlateVisibility HiddenVisibility; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	class UTutorialHighlight* TutorialHighlight; // 0x2c8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortHUDElementWidget.OnVisibilitySetEvent (Has no native function)
	void OnVisibilitySetEvent(enum ESlateVisibility& InVisibility); // (0x00000002 | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHUDElementWidget.HasAnyTags (Underlying native function: HasAnyTags 0xa6d9988)
	bool HasAnyTags(struct FGameplayTagContainer& InTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortHUDElementWidget.HandleOnHUDElementVisibilityChanged (Underlying native function: HandleOnHUDElementVisibilityChanged 0xa6d953c)
	void HandleOnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenHUDElementTags); // (0x00000002 | Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortHUDElementWidget.HandleGetHUDElementWidgetsForTags (Underlying native function: HandleGetHUDElementWidgetsForTags 0x61d79e0)
	void HandleGetHUDElementWidgetsForTags(struct FGameplayTagContainer& HUDElementTags, struct TArray<class UFortHUDElementWidget*>& OutWidgets); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteUI.FortHUDElementWidget.AppendHUDElementTags (Underlying native function: AppendHUDElementTags 0xa6d6ff8)
	void AppendHUDElementTags(struct FGameplayTagContainer& AdditionalTags); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

