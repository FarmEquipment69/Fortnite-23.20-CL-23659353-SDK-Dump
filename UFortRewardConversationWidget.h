// Class /Script/SaveTheWorldUI.FortRewardConversationWidget
// Size: 0x2b8
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget
{

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.IsValidConversation (Underlying native function: IsValidConversation 0x75c0a10)
	bool IsValidConversation(class UFortConversation*& Conversation); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortRewardConversationWidget.GetDataFromSentence (Underlying native function: GetDataFromSentence 0x75be878)
	void GetDataFromSentence(struct FFortConversationSentence& Sentence, struct FText& Text, class UTexture2D*& TalkingHeadTexture); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

