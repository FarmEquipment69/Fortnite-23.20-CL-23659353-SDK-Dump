// ScriptStruct /Script/FortniteGame.CosmeticScreenshotTestConfig
// Size: 0x198
struct FCosmeticScreenshotTestConfig
{
	int ScreenshotResX; // 0x0 (0x4)
	int ScreenshotResY; // 0x4 (0x4)
	struct TSet<struct FString> CosmeticIgnores; // 0x8 (0x50)
	struct TSet<struct FString> VariantIgnores; // 0x58 (0x50)
	struct TSet<struct FString> CosmeticWhitelist; // 0xa8 (0x50)
	struct TMap<struct FString, struct FScreenshotTransformPair> IndividualOverrides; // 0xf8 (0x50)
	struct TMap<struct FString, struct FCosmeticScreenshotChannelArray> VariantChannelIgnores; // 0x148 (0x50)
};

