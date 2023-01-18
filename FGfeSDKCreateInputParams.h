// ScriptStruct /Script/NVIDIAGfeSDK.GfeSDKCreateInputParams
// Size: 0x28
struct FGfeSDKCreateInputParams
{
	struct FString AppName; // 0x0 (0x10)
	struct TArray<enum EGfeSDKScope> RequiredScopes; // 0x10 (0x10)
	bool PollForCallbacks; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

