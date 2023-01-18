// ScriptStruct /Script/SpecialEventGameplayRuntime.SpecialEventStatArray
// Size: 0x120
struct FSpecialEventStatArray : FFastArraySerializer
{
	struct TArray<struct FSpecialEventStatArrayEntry> Stats; // 0x108 (0x10)
	class USpecialEventStatComponent* StatComponent; // 0x118 (0x8)
};

