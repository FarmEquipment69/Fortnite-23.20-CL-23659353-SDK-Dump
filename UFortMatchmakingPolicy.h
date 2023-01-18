// Class /Script/FortniteGame.FortMatchmakingPolicy
// Size: 0x128
class UFortMatchmakingPolicy : public UObject
{
	unsigned char unreflected_28[0x20]; // 0x28 (0x20) 
	bool bMatchmakingInProgress; // 0x48 (0x1)
	unsigned char unreflected_49[0x3]; // 0x49 (0x3) 
	struct FName SessionName; // 0x4c (0x4)
	struct FMatchmakingParams CurrentParams; // 0x50 (0xb8)
	class UFortSearchPass* MMPass; // 0x108 (0x8)
	int ChanceToHostAttempt; // 0x110 (0x4)
	bool bShouldCampaignForceCrossplayConfig; // 0x114 (0x1)
	unsigned char padding_115[0x13]; // 0x115 (0x13)
};

