// ScriptStruct /Script/FortniteGame.WaxRespawnLogicData
// Size: 0x280
struct FWaxRespawnLogicData
{
	struct FFortRespawnLogicData BaseRespawnData; // 0x0 (0x140)
	struct FScalableFloat TryPlaceByTeammates; // 0x140 (0x28)
	struct FScalableFloat AlsoPlaceBehindTeammates; // 0x168 (0x28)
	struct FScalableFloat MaxDistanceFromTeammates; // 0x190 (0x28)
	struct FScalableFloat MinDistanceFromTeammates; // 0x1b8 (0x28)
	struct FScalableFloat TryPlaceAwayFromLeaders; // 0x1e0 (0x28)
	struct FScalableFloat OnlyCountLeadersAboveWaxState; // 0x208 (0x28)
	struct FScalableFloat UseDirectionFromTeam; // 0x230 (0x28)
	struct FScalableFloat SpawnBehindTeammateBias; // 0x258 (0x28)
};

