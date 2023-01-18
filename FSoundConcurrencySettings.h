// ScriptStruct /Script/Engine.SoundConcurrencySettings
// Size: 0x20
struct FSoundConcurrencySettings
{
	int MaxCount; // 0x0 (0x4)
	unsigned char bLimitToOwner; // 0x4 (0x1)
	unsigned char bVolumeScaleCanRelease; // 0x4 (0x1)
	struct TEnumAsByte<EMaxConcurrentResolutionRule> ResolutionRule; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	float RetriggerTime; // 0x8 (0x4)
	float VolumeScale; // 0xc (0x4)
	enum EConcurrencyVolumeScaleMode VolumeScaleMode; // 0x10 (0x4)
	float VolumeScaleAttackTime; // 0x14 (0x4)
	float VolumeScaleReleaseTime; // 0x18 (0x4)
	float VoiceStealReleaseTime; // 0x1c (0x4)
};

