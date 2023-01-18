// WidgetBlueprintGeneratedClass /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C
// Size: 0x1571
class UMainMenuButton_C : public UFortMainMenuButton
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1560 (0x8)
	class UImage* ImageIconRightSide; // 0x1568 (0x8)
	bool ShowExternalLinkIcon; // 0x1570 (0x1)

	/* Functions */

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.UpdateRightSideIcon (Has no native function)
	void UpdateRightSideIcon(struct TWeakObjectPtr<class UMaterialInterface>& SoftMaterial); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.UpdateRightSideIconColor (Has no native function)
	void UpdateRightSideIconColor(struct FLinearColor& Color); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnSelected (Has no native function)
	void BPOnSelected(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/Frontend/MainMenu/MainMenuButton.MainMenuButton_C.ExecuteUbergraph_MainMenuButton (Has no native function)
	void ExecuteUbergraphMainMenuButton(int& EntryPoint, bool& TempboolVariable, enum ESlateVisibility& TempbyteVariable, enum ESlateVisibility& TempbyteVariable1, struct TWeakObjectPtr<class UMaterialInterface>& K2NodeCustomEventSoftMaterial, bool& K2NodeEventIsDesignTime, struct FLinearColor& K2NodeCustomEventColor, enum ESlateVisibility& K2NodeSelectDefault); // (Final | 0x00008000 | HasDefaults)
};

