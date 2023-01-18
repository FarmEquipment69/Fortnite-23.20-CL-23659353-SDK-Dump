// ScriptStruct /Script/FortniteGame.MinigameEndCondition
// Size: 0x30
struct FMinigameEndCondition
{
	struct FFortMinigameStatQuery StatQuery; // 0x0 (0x18)
	enum EMinigameTeamListType TeamListType; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct TArray<unsigned char> TeamList; // 0x20 (0x10)
};

