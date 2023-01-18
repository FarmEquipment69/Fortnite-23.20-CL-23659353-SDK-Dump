// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_CameraShakeInfo
// Size: 0x98
struct FGameplayCueNotify_CameraShakeInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class UClass* CameraShake; // 0x78 (0x8)
	float ShakeScale; // 0x80 (0x4)
	enum EGameplayCueNotify_EffectPlaySpace Playspace; // 0x84 (0x1)
	unsigned char unreflected_85[0x3]; // 0x85 (0x3) 
	unsigned char bOverrideSpawnCondition; // 0x88 (0x1)
	unsigned char bOverridePlacementInfo; // 0x88 (0x1)
	unsigned char bPlayInWorld; // 0x88 (0x1)
	unsigned char unreflected_89[0x3]; // 0x89 (0x3) 
	float WorldInnerRadius; // 0x8c (0x4)
	float WorldOuterRadius; // 0x90 (0x4)
	float WorldFalloffExponent; // 0x94 (0x4)
};

