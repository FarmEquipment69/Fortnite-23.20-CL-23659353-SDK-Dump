// ScriptStruct /Script/FortniteGame.PlayerStartInfo
// Size: 0x38
struct FPlayerStartInfo
{
	unsigned char TeamNum; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FGameplayTagContainer RequiredTags; // 0x8 (0x20)
	struct TArray<class AFortPlayerStart*> PlayerStartActors; // 0x28 (0x10)
};

