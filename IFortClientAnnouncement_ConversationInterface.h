// Class /Script/FortniteGame.FortClientAnnouncement_ConversationInterface
// Size: 0x28
class IFortClientAnnouncement_ConversationInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationInterface.ShouldPlaySentence (Underlying native function: ShouldPlaySentence 0x82676b4)
	bool ShouldPlaySentence(struct FFortConversationSentence& NewSentence); // (BlueprintCosmetic | Native | Event | Public | HasOutParms | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationInterface.OnSentenceStarted (Has no native function)
	void OnSentenceStarted(struct FFortConversationSentence& Sentence, int& SentenceIndex); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationInterface.OnSentenceFinished (Has no native function)
	void OnSentenceFinished(struct FFortConversationSentence& Sentence, int& SentenceIndex); // (BlueprintCosmetic | Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationInterface.OnConversationStarted (Has no native function)
	void OnConversationStarted(struct FFortConversationSentence& StartingSentence, int& StartingSentenceIndex); // (BlueprintCosmetic | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationInterface.OnConversationFinished (Has no native function)
	void OnConversationFinished(struct FFortConversationSentence& FinishingSentence, int& FinishingSentenceSentenceIndex); // (BlueprintCosmetic | Event | Public | BlueprintEvent)
};

