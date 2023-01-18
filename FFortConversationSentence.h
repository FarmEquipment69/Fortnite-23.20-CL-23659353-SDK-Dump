// ScriptStruct /Script/FortniteGame.FortConversationSentence
// Size: 0xc0
struct FFortConversationSentence
{
	struct FFortSentenceAudio SpeechAudio; // 0x0 (0x38)
	struct FText SpeechText; // 0x38 (0x18)
	struct TWeakObjectPtr<class UTexture2D> TalkingHeadTexture; // 0x50 (0x28)
	struct FText TalkingHeadTitle; // 0x78 (0x18)
	struct TWeakObjectPtr<class UAnimMontage> AnimMontage; // 0x90 (0x28)
	float PostSentenceDelay; // 0xb8 (0x4)
	float DisplayDuration; // 0xbc (0x4)
};

