// Class /Script/FortniteUI.FortMtxOfferData
// Size: 0x530
class UFortMtxOfferData : public UPrimaryDataAsset
{
	struct FText Header; // 0x30 (0x18)
	struct FText DisplayName; // 0x48 (0x18)
	struct FText ShortDisplayName; // 0x60 (0x18)
	struct FText ShortDescription; // 0x78 (0x18)
	struct FText SubTitleText; // 0x90 (0x18)
	struct FText DisclaimerText; // 0xa8 (0x18)
	struct TArray<struct FFortItemQuantityPair> GrantOverride; // 0xc0 (0x10)
	struct FSlateBrush TileImage; // 0xd0 (0xc0)
	struct FSlateBrush BadgeImage; // 0x190 (0xc0)
	struct FSlateBrush DetailsImage; // 0x250 (0xc0)
	struct FSlateBrush SimpleImage; // 0x310 (0xc0)
	class UMaterialInterface* DetailsBadge; // 0x3d0 (0x8)
	struct TArray<struct FFortMtxDetailsAttribute> DetailsAttributes; // 0x3d8 (0x10)
	struct FFortMtxGradient Gradient; // 0x3e8 (0x20)
	struct FLinearColor Background; // 0x408 (0x10)
	unsigned char unreflected_418[0x8]; // 0x418 (0x8) 
	struct FSlateBrush BackgroundImage; // 0x420 (0xc0)
	struct FLinearColor UpsellPrimaryColor; // 0x4e0 (0x10)
	struct FLinearColor UpsellSecondaryColor; // 0x4f0 (0x10)
	struct FLinearColor UpsellTextColor; // 0x500 (0x10)
	bool bUseBaseColors; // 0x510 (0x1)
	enum EFortMtxOfferDisplaySize DisplaySize; // 0x511 (0x1)
	unsigned char unreflected_512[0x6]; // 0x512 (0x6) 
	struct TArray<struct FFortMtxDescriptionAndDetails> DescriptionAndDetailsList; // 0x518 (0x10)
	unsigned char padding_528[0x8]; // 0x528 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortMtxOfferData.GetDescriptionAndDetailsList (Underlying native function: GetDescriptionAndDetailsList 0xa872cf8)
	struct TArray<struct FFortMtxDescriptionAndDetails> GetDescriptionAndDetailsList(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

