// Class /Script/Engine.GameViewportClient
// Size: 0x390
class UGameViewportClient : public UScriptViewportClient
{
	unsigned char unreflected_38[0x8]; // 0x38 (0x8) 
	class UConsole* ViewportConsole; // 0x40 (0x8)
	struct TArray<struct FDebugDisplayProperty> DebugProperties; // 0x48 (0x10)
	unsigned char unreflected_58[0x10]; // 0x58 (0x10) 
	int MaxSplitscreenPlayers; // 0x68 (0x4)
	unsigned char unreflected_6c[0xc]; // 0x6c (0xc) 
	class UWorld* World; // 0x78 (0x8)
	class UGameInstance* GameInstance; // 0x80 (0x8)
	unsigned char padding_88[0x308]; // 0x88 (0x308)

	/* Functions */

	// Function /Script/Engine.GameViewportClient.SSSwapControllers (Underlying native function: SSSwapControllers 0x145ca48)
	void SSSwapControllers(); // (Exec | Native | Public)

	// Function /Script/Engine.GameViewportClient.ShowTitleSafeArea (Underlying native function: ShowTitleSafeArea 0x735d960)
	void ShowTitleSafeArea(); // (Exec | Native | Public)

	// Function /Script/Engine.GameViewportClient.SetConsoleTarget (Underlying native function: SetConsoleTarget 0x9da0aa4)
	void SetConsoleTarget(int& PlayerIndex); // (Exec | Native | Public)
};

