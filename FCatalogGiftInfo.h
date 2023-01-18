// ScriptStruct /Script/GameSubCatalog.CatalogGiftInfo
// Size: 0x28
struct FCatalogGiftInfo
{
	bool bIsEnabled; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString ForcedGiftBoxTemplateId; // 0x8 (0x10)
	struct TArray<struct FCatalogOfferRequirement> PurchaseRequirements; // 0x18 (0x10)
};

