// Class /Script/FortniteGame.FortEngine
// Size: 0x1058
class UFortEngine : public UGameEngine
{
	unsigned char unreflected_f50[0x18]; // 0xf50 (0x18) 
	struct TArray<struct FString> PreCSVProfileExecCommands; // 0xf68 (0x10)
	struct TArray<struct FString> PostCSVProfileExecCommands; // 0xf78 (0x10)
	unsigned char padding_f88[0xd0]; // 0xf88 (0xd0)

	/* Functions */

	// Function /Script/FortniteGame.FortEngine.StartFortBench (Underlying native function: StartFortBench 0x88c1b28)
	void StartFortBench(struct FString& ReplayName); // (Final | Exec | Native | Private)
};

