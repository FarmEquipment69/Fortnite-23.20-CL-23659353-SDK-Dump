// ScriptStruct /Script/FortniteGame.ObjectiveFilterCustom
// Size: 0x180
struct FObjectiveFilterCustom : FObjectiveFilter
{
	struct FGameplayTag Verb; // 0xd8 (0x4)
	unsigned char unreflected_dc[0x4]; // 0xdc (0x4) 
	struct TMap<struct FName, struct FObjectiveSubjectTags> Subjects; // 0xe0 (0x50)
	struct TMap<struct FName, struct FDoubleRange> Values; // 0x130 (0x50)
};

