// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_ForceFeedbackInfo
// Size: 0x98
struct FGameplayCueNotify_ForceFeedbackInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class UForceFeedbackEffect* ForceFeedbackEffect; // 0x78 (0x8)
	struct FName ForceFeedbackTag; // 0x80 (0x4)
	unsigned char bIsLooping; // 0x84 (0x1)
	unsigned char bOverrideSpawnCondition; // 0x84 (0x1)
	unsigned char bOverridePlacementInfo; // 0x84 (0x1)
	unsigned char bPlayInWorld; // 0x84 (0x1)
	unsigned char unreflected_85[0x3]; // 0x85 (0x3) 
	float WorldIntensity; // 0x88 (0x4)
	unsigned char unreflected_8c[0x4]; // 0x8c (0x4) 
	class UForceFeedbackAttenuation* WorldAttenuation; // 0x90 (0x8)
};

