// ScriptStruct /Script/SoundLibrary.SoundLibraryAnimContextSettings
// Size: 0x24
struct FSoundLibraryAnimContextSettings
{
	struct FFloatInterval* AnimRateThreshold; // 0x0 (0x8)
	struct FGameplayTag EventName; // 0x8 (0x4)
	bool bAttachToActor; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FName AttachName; // 0x10 (0x4)
	bool bFadeOutOnEnd; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	float FadeTime; // 0x18 (0x4)
	float NotifyTriggerChance; // 0x1c (0x4)
	float VolumeMultiplier; // 0x20 (0x4)
};

