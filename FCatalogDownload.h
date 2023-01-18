// ScriptStruct /Script/GameSubCatalog.CatalogDownload
// Size: 0x20
struct FCatalogDownload
{
	int RefreshIntervalHrs; // 0x0 (0x4)
	int DailyPurchaseHrs; // 0x4 (0x4)
	struct FDateTime* Expiration; // 0x8 (0x8)
	struct TArray<struct FStorefront> Storefronts; // 0x10 (0x10)
};

