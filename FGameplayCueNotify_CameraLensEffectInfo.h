// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_CameraLensEffectInfo
// Size: 0x90
struct FGameplayCueNotify_CameraLensEffectInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class UClass* CameraLensEffect; // 0x78 (0x8)
	unsigned char bOverrideSpawnCondition; // 0x80 (0x1)
	unsigned char bOverridePlacementInfo; // 0x80 (0x1)
	unsigned char bPlayInWorld; // 0x80 (0x1)
	unsigned char unreflected_81[0x3]; // 0x81 (0x3) 
	float WorldInnerRadius; // 0x84 (0x4)
	float WorldOuterRadius; // 0x88 (0x4)
	unsigned char padding_8c[0x4]; // 0x8c (0x4)
};

