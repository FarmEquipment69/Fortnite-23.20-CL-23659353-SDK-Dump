// Class /Script/FortniteConversationUI.FortNPCTextDisplay
// Size: 0x278
class UFortNPCTextDisplay : public UUserWidget
{
	class UCommonRichTextBlock* TextMessage; // 0x268 (0x8)
	class UFortLazyImage* LazyImageNPCImage; // 0x270 (0x8)

	/* Functions */

	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnTextUpdated (Has no native function)
	void OnTextUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortNPCTextDisplay.OnItemNameUpdated (Has no native function)
	void OnItemNameUpdated(struct FString& ItemName); // (Event | Public | BlueprintEvent)
};

