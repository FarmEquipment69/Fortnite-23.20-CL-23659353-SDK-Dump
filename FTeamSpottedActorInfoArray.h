// ScriptStruct /Script/FortniteGame.TeamSpottedActorInfoArray
// Size: 0x120
struct FTeamSpottedActorInfoArray : FFastArraySerializer
{
	struct TArray<struct FTeamSpottedActorInfo> SpottedActorInfo; // 0x108 (0x10)
	class AFortTeamInfo* OwningTeam; // 0x118 (0x8)
};

