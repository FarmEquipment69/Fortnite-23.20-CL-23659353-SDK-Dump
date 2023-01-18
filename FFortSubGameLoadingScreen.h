// ScriptStruct /Script/FortniteGame.FortSubGameLoadingScreen
// Size: 0x620
struct FFortSubGameLoadingScreen
{
	struct TArray<class UFortTips*> Tips; // 0x0 (0x10)
	struct TWeakObjectPtr<class UObject> BackgroundImage; // 0x10 (0x28)
	struct FVector2D BackgroundDesiredSize; // 0x38 (0x10)
	struct FLinearColor BackgroundColor; // 0x48 (0x10)
	struct FFortLogoLoadingScreen LogoLoadingScreen; // 0x58 (0x24)
	unsigned char unreflected_7c[0x4]; // 0x7c (0x4) 
	struct FFortLoadingBlockScreen LoadingBlockScreen; // 0x80 (0x590)
	struct FMargin SafeAreaMargin; // 0x610 (0x10)
};

