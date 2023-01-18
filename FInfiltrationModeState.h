// ScriptStruct /Script/FortniteGame.InfiltrationModeState
// Size: 0x30
struct FInfiltrationModeState
{
	int IntelDownloaded; // 0x0 (0x4)
	int IntelCaptured; // 0x4 (0x4)
	float TotalTime; // 0x8 (0x4)
	float TotalGroundTime; // 0xc (0x4)
	struct TArray<struct FIntelState> IntelStates; // 0x10 (0x10)
	int CurrentRound; // 0x20 (0x4)
	bool bGameOver; // 0x24 (0x1)
	unsigned char unreflected_25[0x3]; // 0x25 (0x3) 
	struct FGameplayTag CurrentPOITag; // 0x28 (0x4)
	unsigned char padding_2c[0x4]; // 0x2c (0x4)
};

