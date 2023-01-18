// ScriptStruct /Script/Engine.URL
// Size: 0x68
struct FURL
{
	struct FString Protocol; // 0x0 (0x10)
	struct FString Host; // 0x10 (0x10)
	int Port; // 0x20 (0x4)
	int Valid; // 0x24 (0x4)
	struct FString Map; // 0x28 (0x10)
	struct FString RedirectUrl; // 0x38 (0x10)
	struct TArray<struct FString> Op; // 0x48 (0x10)
	struct FString Portal; // 0x58 (0x10)
};

