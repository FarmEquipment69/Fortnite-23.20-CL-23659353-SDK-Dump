// Class /Script/FortniteConversationUI.FortConversationMessageWidget
// Size: 0x268
class UFortConversationMessageWidget : public UUserWidget
{

	/* Functions */

	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.SetPreviewMessage (Underlying native function: SetPreviewMessage 0x7172348)
	void SetPreviewMessage(struct FText& MessageToSet); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnPreviewMessageSet (Has no native function)
	void OnPreviewMessageSet(struct FText& PreviewText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageShown (Has no native function)
	void OnMessageShown(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMessageHidden (Has no native function)
	void OnMessageHidden(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteConversationUI.FortConversationMessageWidget.OnMainMessageSet (Has no native function)
	void OnMainMessageSet(struct FText& NPCName, struct FText& MessageBody); // (Event | Protected | HasOutParms | BlueprintEvent)
};

