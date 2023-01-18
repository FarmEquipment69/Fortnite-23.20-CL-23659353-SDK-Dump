// ScriptStruct /Script/FortniteGame.FortCommunityVotesState
// Size: 0x30
struct FFortCommunityVotesState
{
	struct FString ElectionId; // 0x0 (0x10)
	struct TArray<struct FCatalogOffer> Candidates; // 0x10 (0x10)
	struct FDateTime* ElectionEnds; // 0x20 (0x8)
	int NumWinners; // 0x28 (0x4)
	int WinnerStateHours; // 0x2c (0x4)
};

