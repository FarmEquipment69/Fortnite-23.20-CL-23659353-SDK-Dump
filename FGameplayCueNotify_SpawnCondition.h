// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_SpawnCondition
// Size: 0x38
struct FGameplayCueNotify_SpawnCondition
{
	enum EGameplayCueNotify_LocallyControlledSource LocallyControlledSource; // 0x0 (0x1)
	enum EGameplayCueNotify_LocallyControlledPolicy LocallyControlledPolicy; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	float ChanceToPlay; // 0x4 (0x4)
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> AllowedSurfaceTypes; // 0x8 (0x10)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct TArray<struct TEnumAsByte<EPhysicalSurface>> RejectedSurfaceTypes; // 0x20 (0x10)
	unsigned char padding_30[0x8]; // 0x30 (0x8)
};

