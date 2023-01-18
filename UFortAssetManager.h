// Class /Script/FortniteGame.FortAssetManager
// Size: 0x928
class UFortAssetManager : public UAssetManager
{
	struct TMap<class UObject*, struct FName> GCPreventionPool; // 0x4e8 (0x50)
	unsigned char unreflected_538[0x10]; // 0x538 (0x10) 
	struct TArray<struct FName> DefaultBundleState; // 0x548 (0x10)
	struct TArray<struct FName> PlatformBundleState; // 0x558 (0x10)
	unsigned char unreflected_568[0x50]; // 0x568 (0x50) 
	class UFortGameData* GameDataCommon; // 0x5b8 (0x8)
	struct FString GameDataNameCommon; // 0x5c0 (0x10)
	class UGameDataCosmetics* GameDataCosmetics; // 0x5d0 (0x8)
	struct FString GameDataNameCosmetics; // 0x5d8 (0x10)
	class UGameDataBR* GameDataBR; // 0x5e8 (0x8)
	struct FString GameDataNameBR; // 0x5f0 (0x10)
	class UGameDataSTW* GameDataSTW; // 0x600 (0x8)
	struct FString FastCookTheaterPath; // 0x608 (0x10)
	struct FString PerfMemTheaterPath; // 0x618 (0x10)
	struct FString BROnlyTheaterPath; // 0x628 (0x10)
	struct FString ActiveTheaterListPath; // 0x638 (0x10)
	struct FString DanceRoyaleMapPath; // 0x648 (0x10)
	unsigned char padding_658[0x2d0]; // 0x658 (0x2d0)
};

