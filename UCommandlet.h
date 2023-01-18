// Class /Script/Engine.Commandlet
// Size: 0x80
class UCommandlet : public UObject
{
	struct FString HelpDescription; // 0x28 (0x10)
	struct FString HelpUsage; // 0x38 (0x10)
	struct FString HelpWebLink; // 0x48 (0x10)
	struct TArray<struct FString> HelpParamNames; // 0x58 (0x10)
	struct TArray<struct FString> HelpParamDescriptions; // 0x68 (0x10)
	unsigned char IsServer; // 0x78 (0x1)
	unsigned char IsClient; // 0x78 (0x1)
	unsigned char IsEditor; // 0x78 (0x1)
	unsigned char LogToConsole; // 0x78 (0x1)
	unsigned char ShowErrorCount; // 0x78 (0x1)
	unsigned char ShowProgress; // 0x78 (0x1)
	unsigned char padding_79[0x7]; // 0x79 (0x7)
};

