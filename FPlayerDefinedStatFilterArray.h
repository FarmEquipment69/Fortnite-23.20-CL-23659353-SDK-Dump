// ScriptStruct /Script/FortniteGame.PlayerDefinedStatFilterArray
// Size: 0x120
struct FPlayerDefinedStatFilterArray : FFastArraySerializer
{
	struct TArray<struct FPlayerDefinedStatFilterEntry> ReplicatedEntries; // 0x108 (0x10)
	class UFortMinigameStatsComponent* Owner; // 0x118 (0x8)
};

