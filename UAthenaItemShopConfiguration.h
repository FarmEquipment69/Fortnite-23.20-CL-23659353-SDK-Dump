// Class /Script/FortniteUI.AthenaItemShopConfiguration
// Size: 0x150
class UAthenaItemShopConfiguration : public UDataAsset
{
	struct FString SubscriptionOfferId; // 0x30 (0x10)
	struct FString CrewBlingOfferId; // 0x40 (0x10)
	struct TArray<struct FName> LimitedTimeStorefrontNames; // 0x50 (0x10)
	struct FAthenaItemShopReloadMtxInfo ItemShopReloadMtxInfo; // 0x60 (0x90)
	struct FName BattlePassSectionId; // 0xf0 (0x4)
	struct FName SubscriptionSectionId; // 0xf4 (0x4)
	class UCatalogMessaging* TileViolatorTextTable; // 0xf8 (0x8)
	struct TWeakObjectPtr<class UClass> SectionWidgetClass; // 0x100 (0x28)
	struct TWeakObjectPtr<class UClass> CarouselWidgetClass; // 0x128 (0x28)
};

