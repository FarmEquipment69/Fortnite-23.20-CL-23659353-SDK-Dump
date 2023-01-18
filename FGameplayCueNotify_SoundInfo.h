// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_SoundInfo
// Size: 0x98
struct FGameplayCueNotify_SoundInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class USoundBase* sound; // 0x78 (0x8)
	class USoundBase* SoundCue; // 0x80 (0x8)
	float LoopingFadeOutDuration; // 0x88 (0x4)
	float LoopingFadeVolumeLevel; // 0x8c (0x4)
	struct FGameplayCueNotify_SoundParameterInterfaceInfo SoundParameterInterfaceInfo; // 0x90 (0x4)
	unsigned char bOverrideSpawnCondition; // 0x94 (0x1)
	unsigned char bOverridePlacementInfo; // 0x94 (0x1)
	unsigned char bUseSoundParameterInterface; // 0x94 (0x1)
	unsigned char padding_95[0x3]; // 0x95 (0x3)
};

