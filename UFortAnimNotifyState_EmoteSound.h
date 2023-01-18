// Class /Script/FortniteGame.FortAnimNotifyState_EmoteSound
// Size: 0x60
class UFortAnimNotifyState_EmoteSound : public UAnimNotifyState
{
	class USoundBase* EmoteSound1P; // 0x30 (0x8)
	class USoundBase* EmoteSound3P; // 0x38 (0x8)
	struct FGameplayTag MusicEventTagOverride1P; // 0x40 (0x4)
	struct FGameplayTag MusicEventTagOverride3P; // 0x44 (0x4)
	bool bPrimarySound; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FName SoundName; // 0x4c (0x4)
	float FadeOutTime; // 0x50 (0x4)
	bool bEmoteLeaderOnly; // 0x54 (0x1)
	bool bStopAudioOnNotifyEnd; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	struct FName AttachName; // 0x58 (0x4)
	unsigned char padding_5c[0x4]; // 0x5c (0x4)
};

