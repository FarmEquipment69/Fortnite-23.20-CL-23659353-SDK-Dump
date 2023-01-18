// ScriptStruct /Script/AmbientAudio.AmbientAudioBase
// Size: 0xc0
struct FAmbientAudioBase
{
	struct TWeakObjectPtr<class USoundBase> sound; // 0x0 (0x28)
	struct FGameplayTagQuery Requirements; // 0x28 (0x48)
	struct FAudioGameplayRequirements PlaybackRequirements; // 0x70 (0x50)
};

