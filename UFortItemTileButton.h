// Class /Script/FortniteUI.FortItemTileButton
// Size: 0x1470
class UFortItemTileButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1430[0x10]; // 0x1430 (0x10) 
	class UFortMultiSizeItemCard* ItemWidget; // 0x1440 (0x8)
	struct TWeakObjectPtr<class UFortItem> Item; // 0x1448 (0x8)
	enum EFortItemCardSize ItemCardSize; // 0x1450 (0x1)
	bool IsRewardCard; // 0x1451 (0x1)
	unsigned char unreflected_1452[0x6]; // 0x1452 (0x6) 
	struct TScriptInterface<class IFortItemViewContextInterface> ItemViewContext; // 0x1458 (0x10)
	unsigned char padding_1468[0x8]; // 0x1468 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortItemTileButton.OnTileSizeOverrideCheck (Has no native function)
	void OnTileSizeOverrideCheck(enum EFortItemCardSize& SizeIn, enum EFortItemCardSize& SizeOut); // (Event | Protected | HasOutParms | BlueprintEvent | Const)
};

