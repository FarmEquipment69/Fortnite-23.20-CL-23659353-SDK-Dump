// Class /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface
// Size: 0x28
class IFortClientAnnouncement_ConversationCodeInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.StopConversation (Underlying native function: StopConversation 0x8267768)
	void StopConversation(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentenceIndex (Underlying native function: PlayConversationFromSentenceIndex 0x8266d78)
	bool PlayConversationFromSentenceIndex(int& StartingSentenceIndex); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversationFromSentence (Underlying native function: PlayConversationFromSentence 0x8266cc4)
	bool PlayConversationFromSentence(struct FFortConversationSentence& StartingSentence); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.PlayConversation (Underlying native function: PlayConversation 0x8266ca0)
	bool PlayConversation(); // (BlueprintCosmetic | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentenceIndex (Underlying native function: IsPlayingSentenceIndex 0x8265c18)
	bool IsPlayingSentenceIndex(int& SentenceIndex); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingSentence (Underlying native function: IsPlayingSentence 0x8265b64)
	bool IsPlayingSentence(struct FFortConversationSentence& Sentence); // (BlueprintCosmetic | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortClientAnnouncement_ConversationCodeInterface.IsPlayingConversation (Underlying native function: IsPlayingConversation 0x8265ad0)
	bool IsPlayingConversation(bool& bCheckAudioComponent); // (BlueprintCosmetic | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

