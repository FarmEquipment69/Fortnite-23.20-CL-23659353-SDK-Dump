// ScriptStruct /Script/FortniteGame.FortCreativeDiscoveryTestCohort
// Size: 0xa0
struct FFortCreativeDiscoveryTestCohort
{
	struct FName TestName; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString CategoryRecommendationModelName; // 0x8 (0x10)
	enum EFortCreativeDiscoveryDeterminism CohortSelector; // 0x18 (0x1)
	unsigned char unreflected_19[0x3]; // 0x19 (0x3) 
	float SelectionChance; // 0x1c (0x4)
	struct TArray<struct FString> PlatformWhitelist; // 0x20 (0x10)
	struct TArray<struct FString> PlatformBlacklist; // 0x30 (0x10)
	struct TArray<struct FString> MMRegionAllowlist; // 0x40 (0x10)
	struct TArray<struct FString> MMRegionBlocklist; // 0x50 (0x10)
	struct TArray<struct FString> CountryCodeAllowlist; // 0x60 (0x10)
	struct TArray<struct FString> CountryCodeBlocklist; // 0x70 (0x10)
	struct TArray<struct FFortCreativeDiscoveryContentPanel> ContentPanels; // 0x80 (0x10)
	struct FString AnalyticsId; // 0x90 (0x10)
};

