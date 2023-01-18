// Class /Script/GiftingUI.AthenaGiftingWrapOptionsPanel
// Size: 0x410
class UAthenaGiftingWrapOptionsPanel : public UCommonActivatableWidget
{
	unsigned char unreflected_3a8[0x28]; // 0x3a8 (0x28) 
	struct TArray<struct TWeakObjectPtr<class UFortGiftBoxItemDefinition>> GiftBoxes; // 0x3d0 (0x10)
	struct TArray<class UFortGiftBoxItemDefinition*> GiftBoxItemDefs; // 0x3e0 (0x10)
	unsigned char unreflected_3f0[0x10]; // 0x3f0 (0x10) 
	class UCommonButtonLegacy* ButtonConfirmWrap; // 0x400 (0x8)
	class UTileView* TileViewWrapOptions; // 0x408 (0x8)
};

