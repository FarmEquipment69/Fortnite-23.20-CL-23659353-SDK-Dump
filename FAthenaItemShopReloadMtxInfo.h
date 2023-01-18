// ScriptStruct /Script/FortniteUI.AthenaItemShopReloadMtxInfo
// Size: 0x90
struct FAthenaItemShopReloadMtxInfo
{
	struct TArray<struct FName> StaticStorefrontNames; // 0x0 (0x10)
	struct TArray<struct FName> DynamicStorefrontNames; // 0x10 (0x10)
	struct FName IncrementalStorefrontName; // 0x20 (0x4)
	unsigned char unreflected_24[0x4]; // 0x24 (0x4) 
	struct FString DynamicOtherOptionOfferId; // 0x28 (0x10)
	int MaxMtxQuantityToShowDynamicReloadMtx; // 0x38 (0x4)
	unsigned char unreflected_3c[0x4]; // 0x3c (0x4) 
	struct TWeakObjectPtr<class UClass> StaticReloadMtxScreenClass; // 0x40 (0x28)
	struct TWeakObjectPtr<class UClass> DynamicReloadMtxScreenClass; // 0x68 (0x28)
};

