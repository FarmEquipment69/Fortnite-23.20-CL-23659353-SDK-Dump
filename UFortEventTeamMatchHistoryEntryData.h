// Class /Script/FortniteUI.FortEventTeamMatchHistoryEntryData
// Size: 0x70
class UFortEventTeamMatchHistoryEntryData : public UObject
{
	int MatchNumber; // 0x28 (0x4)
	int Eliminations; // 0x2c (0x4)
	int CreativeScore; // 0x30 (0x4)
	int AlternativeStat; // 0x34 (0x4)
	int Placement; // 0x38 (0x4)
	int SecondsAlive; // 0x3c (0x4)
	bool bShowEliminations; // 0x40 (0x1)
	bool bIsLive; // 0x41 (0x1)
	bool bIsReplayAvailable; // 0x42 (0x1)
	unsigned char unreflected_43[0x5]; // 0x43 (0x5) 
	struct FString SessionId; // 0x48 (0x10)
	struct TArray<struct FString> TeamAccountIds; // 0x58 (0x10)
	bool bIsScoreContributor; // 0x68 (0x1)
	unsigned char padding_69[0x7]; // 0x69 (0x7)
};

