// WidgetBlueprintGeneratedClass /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C
// Size: 0x1448
class ULeavePlatformPartyButton_C : public UCommonButtonLegacy
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x1430 (0x8)
	class UWidgetAnimation* OnHover; // 0x1438 (0x8)
	class UCommonTextBlock* CommonTextBlock41; // 0x1440 (0x8)

	/* Functions */

	// Function /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C.SetText (Has no native function)
	void SetText(struct FText& NewText); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnHovered (Has no native function)
	void BPOnHovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C.BP_OnUnhovered (Has no native function)
	void BPOnUnhovered(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/UI/Frontend/Parties/LeavePlatformPartyButton.LeavePlatformPartyButton_C.ExecuteUbergraph_LeavePlatformPartyButton (Has no native function)
	void ExecuteUbergraphLeavePlatformPartyButton(int& EntryPoint, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue, class UUMGSequencePlayer*& CallFuncPlayAnimationReturnValue1); // (Final | 0x00008000)
};

