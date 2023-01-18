// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_ParticleInfo
// Size: 0x88
struct FGameplayCueNotify_ParticleInfo
{
	struct FGameplayCueNotify_SpawnCondition SpawnConditionOverride; // 0x0 (0x38)
	struct FGameplayCueNotify_PlacementInfo PlacementInfoOverride; // 0x38 (0x40)
	class UNiagaraSystem* NiagaraSystem; // 0x78 (0x8)
	unsigned char bOverrideSpawnCondition; // 0x80 (0x1)
	unsigned char bOverridePlacementInfo; // 0x80 (0x1)
	unsigned char bCastShadow; // 0x80 (0x1)
	unsigned char padding_81[0x7]; // 0x81 (0x7)
};

