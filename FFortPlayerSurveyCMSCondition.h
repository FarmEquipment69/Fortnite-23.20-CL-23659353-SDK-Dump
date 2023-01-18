// ScriptStruct /Script/FortniteUI.FortPlayerSurveyCMSCondition
// Size: 0x50
struct FFortPlayerSurveyCMSCondition
{
	struct FString Type; // 0x0 (0x10)
	struct FString Operation; // 0x10 (0x10)
	struct FString ComparisonValue; // 0x20 (0x10)
	struct TArray<struct FString> ConditionInfo; // 0x30 (0x10)
	struct TArray<struct FJsonObjectWrapper> ChildConditions; // 0x40 (0x10)
};

