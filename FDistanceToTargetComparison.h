// ScriptStruct /Script/FortniteAI.DistanceToTargetComparison
// Size: 0x38
struct FDistanceToTargetComparison
{
	bool bUseOverriddenValue; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float OverriddenValue; // 0x4 (0x4)
	struct FGameplayTagContainer DistanceDataTags; // 0x8 (0x20)
	bool bUseAddedOffset; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float AddedOffset; // 0x2c (0x4)
	struct TEnumAsByte<EArithmeticKeyOperation> Operator; // 0x30 (0x1)
	struct TEnumAsByte<ETargetDistanceComparisonType> ComparisonType; // 0x31 (0x1)
	unsigned char padding_32[0x6]; // 0x32 (0x6)
};

