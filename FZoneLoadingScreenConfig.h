// ScriptStruct /Script/FortniteGame.ZoneLoadingScreenConfig
// Size: 0x118
struct FZoneLoadingScreenConfig
{
	struct TWeakObjectPtr<class UTexture2D> BackgroundImage; // 0x0 (0x28)
	struct FText TitleDescription; // 0x28 (0x18)
	struct FText Title; // 0x40 (0x18)
	struct FZoneLoadingScreenHeadingConfig Headings[0x3]; // 0x58 (0x38) (ARRAY) 
	struct TArray<class UFortTips*> LoadingTips; // 0x100 (0x10)
	class USoundBase* LoadingMusic; // 0x110 (0x8)
};

