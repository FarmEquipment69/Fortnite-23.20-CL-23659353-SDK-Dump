// ScriptStruct /Script/BattlePassBase.BattlePassLandingPageButtonDisplayDetails
// Size: 0x70
struct FBattlePassLandingPageButtonDisplayDetails
{
	struct FBattlePassLandingPageButtonTexts ButtonTexts; // 0x0 (0x48)
	bool bIsBPLocked; // 0x48 (0x1)
	unsigned char unreflected_49[0x7]; // 0x49 (0x7) 
	struct FText MissingCosmeticNameText; // 0x50 (0x18)
	struct FTimespan* DelayTimespan; // 0x68 (0x8)
};

