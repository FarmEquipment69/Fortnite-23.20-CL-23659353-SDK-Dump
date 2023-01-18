// ScriptStruct /Script/FortniteGame.CustomVerbMessage
// Size: 0x110
struct FCustomVerbMessage : FVerbMessage
{
	struct FGameplayTag Verb; // 0x68 (0x4)
	int Amount; // 0x6c (0x4)
	struct TMap<struct FName, struct FSubjectTagsPair> Subjects; // 0x70 (0x50)
	struct TMap<struct FName, float> Values; // 0xc0 (0x50)
};

