// ScriptStruct /Script/FortniteGame.FortGameFeatureResponse
// Size: 0x30
struct FFortGameFeatureResponse
{
	struct FString ErrorCode; // 0x0 (0x10)
	struct FText ErrorText; // 0x10 (0x18)
	enum EFortErrorSeverity ErrorSeverity; // 0x28 (0x1)
	unsigned char padding_29[0x7]; // 0x29 (0x7)
};

