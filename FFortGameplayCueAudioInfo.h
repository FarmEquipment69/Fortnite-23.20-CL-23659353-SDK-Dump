// ScriptStruct /Script/FortniteGame.FortGameplayCueAudioInfo
// Size: 0xb0
struct FFortGameplayCueAudioInfo
{
	struct FFortGameplayCueSpawnCondition Condition; // 0x0 (0x38)
	struct FFortGameplayCueAttachInfo Attachment; // 0x38 (0x58)
	class USoundBase* SoundCue; // 0x90 (0x8)
	struct FGameplayTag SoundLibraryTag; // 0x98 (0x4)
	unsigned char unreflected_9c[0x4]; // 0x9c (0x4) 
	class UClass* SoundLibraryContextClass; // 0xa0 (0x8)
	float DelayBeforePlayInSeconds; // 0xa8 (0x4)
	unsigned char bOverrideCondition; // 0xac (0x1)
	unsigned char bOverrideAttachment; // 0xac (0x1)
	unsigned char padding_ad[0x3]; // 0xad (0x3)
};

