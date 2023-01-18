// ScriptStruct /Script/FortniteGame.FortPlayerScoreReport
// Size: 0x2b0
struct FFortPlayerScoreReport
{
	struct FUniqueNetIdRepl PlayerId; // 0x0 (0x30)
	struct FString PlayerName; // 0x30 (0x10)
	struct TWeakObjectPtr<class AFortPlayerState> PlayerState; // 0x40 (0x8)
	struct TEnumAsByte<EFortTeam> PlayerTeam; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FReplicatedStatValues* ReplicatedStatsCampaign[0x23]; // 0x4c (0x8) (ARRAY) 
	struct FReplicatedStatValues* ReplicatedStatsZone[0x23]; // 0x164 (0x8) (ARRAY) 
	int InitialLevel; // 0x27c (0x4)
	int InitialExperienceAmount; // 0x280 (0x4)
	struct FFortExperienceDelta ExperienceInfoDelta; // 0x284 (0x24)
	int LastExperienceDeltaAmount; // 0x2a8 (0x4)
	int LastScoreDeltaAmount; // 0x2ac (0x4)
};

