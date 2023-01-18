// ScriptStruct /Script/Engine.DPMatchingRulestructBase
// Size: 0x48
struct FDPMatchingRulestructBase
{
	struct FString RuleName; // 0x8 (0x10)
	struct TArray<struct FDPMatchingIfCondition> IfConditions; // 0x18 (0x10)
	struct FString AppendFragments; // 0x28 (0x10)
	struct FString SetUserVar; // 0x38 (0x10)
};

