// WidgetBlueprintGeneratedClass /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C
// Size: 0x1480
class USocialConfirmationButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UWidgetAnimation* OnHover; // 0x1438 (0x8)
	class UBorder* BorderInteractionIndicator; // 0x1440 (0x8)
	class UImage* InteractionIcon; // 0x1448 (0x8)
	class UMenuAnchor* MenuAnchorActions; // 0x1450 (0x8)
	class UCommonTextBlock* TextInteractionName; // 0x1458 (0x8)
	bool bIsAccept; // 0x1460 (0x1)
	unsigned char unreflected_1461[0x7]; // 0x1461 (0x7) 
	struct FText DisplayText; // 0x1468 (0x18)

	/* Functions */

	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.PreConstruct (Has no native function)
	void PreConstruct(bool& IsDesignTime); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Game/UI/SocialPanel/SocialConfirmationButton.SocialConfirmationButton_C.ExecuteUbergraph_SocialConfirmationButton (Has no native function)
	void ExecuteUbergraphSocialConfirmationButton(int& EntryPoint, bool& TempboolVariable, struct FLinearColor& TempstructVariable, struct FLinearColor& TempstructVariable1, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1, bool& K2NodeEventIsDesignTime, struct FLinearColor& K2NodeSelectDefault); // (Final | 0x00008000)
};

