// ScriptStruct /Script/MantisRuntime.FortMantisTargetData
// Size: 0x40
struct FFortMantisTargetData : FGameplayAbilityTargetData
{
	struct FFortMantisRootMotionWarpInfo TechniqueWarpInfo; // 0x8 (0x28)
	int TechniqueDataIndex; // 0x30 (0x4)
	bool bIsLockedOn; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	struct FName DynamicMontageStartSection; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

