// ScriptStruct /Script/FortniteGame.FortGameplayCueDecalInfo
// Size: 0xa8
struct FFortGameplayCueDecalInfo
{
	struct FFortGameplayCueSpawnCondition Condition; // 0x0 (0x38)
	struct FFortGameplayCueAttachInfo Attachment; // 0x38 (0x58)
	unsigned char bOverrideCondition; // 0x90 (0x1)
	unsigned char bOverrideAttachment; // 0x90 (0x1)
	unsigned char bOverrideFadeOut; // 0x90 (0x1)
	unsigned char unreflected_91[0x7]; // 0x91 (0x7) 
	class UClass* Decal; // 0x98 (0x8)
	float FadeOutStartDelay; // 0xa0 (0x4)
	float FadeOutDuration; // 0xa4 (0x4)
};

