// Class /Script/FortniteGame.CatalogMessaging
// Size: 0x120
class UCatalogMessaging : public UPrimaryDataAsset
{
	struct TMap<struct FString, struct FText> StoreToastHeader; // 0x30 (0x50)
	struct TMap<struct FString, struct FText> StoreToastBody; // 0x80 (0x50)
	struct TMap<struct FString, struct FText> Banners; // 0xd0 (0x50)
};

