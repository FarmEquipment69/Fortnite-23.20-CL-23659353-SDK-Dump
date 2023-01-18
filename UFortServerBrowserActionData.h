// Class /Script/FortniteUI.FortServerBrowserActionData
// Size: 0x130
class UFortServerBrowserActionData : public UPrimaryDataAsset
{
	enum EFortServerBrowserAction ActionType; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FText Title; // 0x38 (0x18)
	struct FText Description; // 0x50 (0x18)
	unsigned char unreflected_68[0x8]; // 0x68 (0x8) 
	struct FSlateBrush TileImage; // 0x70 (0xc0)
};

