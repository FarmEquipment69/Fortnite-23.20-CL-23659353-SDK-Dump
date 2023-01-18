// ScriptStruct /Script/FortniteGame.FortInGameLeaderboardPlacementData
// Size: 0x48
struct FFortInGameLeaderboardPlacementData : FFortChangeMonitoringStruct
{
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString DisplayName; // 0x8 (0x10)
	int Score; // 0x18 (0x4)
	int ScoreToWin; // 0x1c (0x4)
	unsigned char TeamNum; // 0x20 (0x1)
	unsigned char unreflected_21[0x7]; // 0x21 (0x7) 
	struct TArray<class AFortPlayerStateAthena*> TeamMembers; // 0x28 (0x10)
	int Placement; // 0x38 (0x4)
	int SortIndex; // 0x3c (0x4)
	bool bRepresentsLocalPlayer; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float PctToWin; // 0x44 (0x4)
};

