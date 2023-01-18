// Class /Script/FortniteGame.FortClientPilot_FrontendCampaign
// Size: 0x1d0
class UFortClientPilot_FrontendCampaign : public UFortClientPilot_FrontendBase
{
	bool bShouldPickRandomMap; // 0x198 (0x1)
	unsigned char unreflected_199[0x3]; // 0x199 (0x3) 
	int iSelectedTheater; // 0x19c (0x4)
	struct TArray<int> SelectedTheaterList; // 0x1a0 (0x10)
	int iSelectedTile; // 0x1b0 (0x4)
	unsigned char unreflected_1b4[0x4]; // 0x1b4 (0x4) 
	struct TArray<int> SelectedTileList; // 0x1b8 (0x10)
	float RandomZoneDifficultyMinimum; // 0x1c8 (0x4)
	float RandomZoneDifficultyMaximum; // 0x1cc (0x4)
};

