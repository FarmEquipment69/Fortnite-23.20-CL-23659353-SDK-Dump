// Class /Script/FortniteUI.AthenaReloadMtxScreenBaseLegacy
// Size: 0x700
class UAthenaReloadMtxScreenBaseLegacy : public UFortItemPreviewScreen
{
	unsigned char unreflected_668[0x8]; // 0x668 (0x8) 
	class UFortStoreFrontOfferInfo* OfferInfo; // 0x670 (0x8)
	unsigned char unreflected_678[0x10]; // 0x678 (0x10) 
	class UCommonTextBlock* TextAmountNeeded; // 0x688 (0x8)
	unsigned char unreflected_690[0x40]; // 0x690 (0x40) 
	struct TArray<class UFortAccountItemDefinition*> AccountItemDefinitions; // 0x6d0 (0x10)
	struct FDataTableRowHandle BackAction; // 0x6e0 (0x10)
	class UCommonButtonLegacy* ButtonMobileClose; // 0x6f0 (0x8)
	class UAthenaSmallOfferPreviewBase* SmallOfferPreviewWidget; // 0x6f8 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaReloadMtxScreenBaseLegacy.HandleBackButton (Underlying native function: HandleBackButton 0xa57d358)
	void HandleBackButton(bool& bPassThrough); // (Final | Native | Private | HasOutParms)
};

