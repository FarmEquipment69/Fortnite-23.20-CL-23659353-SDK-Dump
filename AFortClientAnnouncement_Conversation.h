// Class /Script/FortniteGame.FortClientAnnouncement_Conversation
// Size: 0x378
class AFortClientAnnouncement_Conversation : public AFortClientAnnouncement
{
	unsigned char unreflected_2f8[0x10]; // 0x2f8 (0x10) 
	struct FFortClientAnnouncementData_Conversation ConversationData; // 0x308 (0x10)
	struct FMulticastInlineDelegate OnConversationStarted; // 0x318 (0x10)
	struct FMulticastInlineDelegate OnConversationStopped; // 0x328 (0x10)
	class UAudioComponent* SpeechComponent; // 0x338 (0x8)
	bool bAutoPlayConversation; // 0x340 (0x1)
	bool bCurrentlyPlaying; // 0x341 (0x1)
	unsigned char unreflected_342[0x2]; // 0x342 (0x2) 
	int CurrentSentenceIndex; // 0x344 (0x4)
	unsigned char padding_348[0x30]; // 0x348 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortClientAnnouncement_Conversation.CurrentSentenceAudioTimeout (Underlying native function: CurrentSentenceAudioTimeout 0x8265264)
	void CurrentSentenceAudioTimeout(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortClientAnnouncement_Conversation.CurrentSentenceAudioFinished (Underlying native function: CurrentSentenceAudioFinished 0x8265264)
	void CurrentSentenceAudioFinished(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortClientAnnouncement_Conversation.AssetLoadTimeout (Underlying native function: AssetLoadTimeout 0x8264a34)
	void AssetLoadTimeout(); // (Final | Native | Private)
};

