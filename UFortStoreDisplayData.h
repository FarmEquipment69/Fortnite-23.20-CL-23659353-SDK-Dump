// Class /Script/FortniteUI.FortStoreDisplayData
// Size: 0xc0
class UFortStoreDisplayData : public UDataAsset
{
	struct TArray<struct FString> AthenaRMTStorefrontNames; // 0x30 (0x10)
	struct TArray<struct FString> CampaignRMTStorefrontNames; // 0x40 (0x10)
	struct FString RequiredTokenOfferMetaKey; // 0x50 (0x10)
	struct FString GiftableOfferStorefront; // 0x60 (0x10)
	struct TWeakObjectPtr<class UClass> StandaloneMTXStoreClass; // 0x70 (0x28)
	struct TWeakObjectPtr<class UClass> PlatformPurchaseErrorCodeModalClass; // 0x98 (0x28)
};

