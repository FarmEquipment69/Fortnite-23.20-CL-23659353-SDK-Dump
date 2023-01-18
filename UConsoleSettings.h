// Class /Script/EngineSettings.ConsoleSettings
// Size: 0x70
class UConsoleSettings : public UObject
{
	int MaxScrollbackSize; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FAutoCompleteCommand> ManualAutoCompleteList; // 0x30 (0x10)
	struct TArray<struct FString> AutoCompleteMapPaths; // 0x40 (0x10)
	float BackgroundOpacityPercentage; // 0x50 (0x4)
	bool bOrderTopToBottom; // 0x54 (0x1)
	bool bDisplayHelpInAutoComplete; // 0x55 (0x1)
	unsigned char unreflected_56[0x2]; // 0x56 (0x2) 
	struct FColor InputColor; // 0x58 (0x4)
	struct FColor HistoryColor; // 0x5c (0x4)
	struct FColor AutoCompleteCommandColor; // 0x60 (0x4)
	struct FColor AutoCompleteCVarColor; // 0x64 (0x4)
	struct FColor AutoCompleteFadedColor; // 0x68 (0x4)
	unsigned char padding_6c[0x4]; // 0x6c (0x4)
};

