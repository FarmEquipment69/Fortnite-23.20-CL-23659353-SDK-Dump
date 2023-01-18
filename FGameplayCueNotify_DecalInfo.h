// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_DecalInfo
// Size: 0xa8
struct FGameplayCueNotify_DecalInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class UMaterialInterface* DecalMaterial; // 0x78 (0x8)
	struct FVector DecalSize; // 0x80 (0x18)
	unsigned char bOverrideSpawnCondition; // 0x98 (0x1)
	unsigned char bOverridePlacementInfo; // 0x98 (0x1)
	unsigned char bOverrideFadeOut; // 0x98 (0x1)
	unsigned char unreflected_99[0x3]; // 0x99 (0x3) 
	float FadeOutStartDelay; // 0x9c (0x4)
	float FadeOutDuration; // 0xa0 (0x4)
	unsigned char padding_a4[0x4]; // 0xa4 (0x4)
};

