// Class /Script/FortniteUI.FortSubgameTile
// Size: 0x1560
class UFortSubgameTile : public UCommonButtonLegacy
{
	enum ESubgameTileType SubgameType; // 0x1430 (0x1)
	enum ESubgameLoadFromCMS CMSLoadType; // 0x1431 (0x1)
	unsigned char unreflected_1432[0x6]; // 0x1432 (0x6) 
	class UTexture2D* KeyArt; // 0x1438 (0x8)
	struct FText Title; // 0x1440 (0x18)
	struct FText Description; // 0x1458 (0x18)
	struct FText StandardMessageLine1; // 0x1470 (0x18)
	struct FText StandardMessageLine2; // 0x1488 (0x18)
	struct FLinearColor StandardMessageBackgroundColor; // 0x14a0 (0x10)
	struct FText SpecialMessage; // 0x14b0 (0x18)
	struct FLinearColor SpecialMessageBackgroundColor; // 0x14c8 (0x10)
	struct FLinearColor UnfocusedOverlayColor; // 0x14d8 (0x10)
	class UMaterialInstance* GradientBrush; // 0x14e8 (0x8)
	struct FLinearColor GradientColor; // 0x14f0 (0x10)
	class UEpicCMSImage* ImageKeyArt; // 0x1500 (0x8)
	class UCommonTextBlock* TextTitle; // 0x1508 (0x8)
	class UCommonTextBlock* TextDescription; // 0x1510 (0x8)
	class UCommonTextBlock* TextStandardMessageLine1; // 0x1518 (0x8)
	class UCommonTextBlock* TextStandardMessageLine2; // 0x1520 (0x8)
	class UBorder* BorderStandardMessageBackground; // 0x1528 (0x8)
	class UCommonTextBlock* TextSpecialMessage; // 0x1530 (0x8)
	class UBorder* BorderSpecialMessageBackground; // 0x1538 (0x8)
	class UImage* ImageUnfocusedOverlay; // 0x1540 (0x8)
	class UImage* ImageGradient; // 0x1548 (0x8)
	unsigned char padding_1550[0x10]; // 0x1550 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortSubgameTile.TrySetSubgameImageFromCMS (Underlying native function: TrySetSubgameImageFromCMS 0xa91b3f4)
	bool TrySetSubgameImageFromCMS(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortSubgameTile.TryGetSubgameDataFromCMS (Underlying native function: TryGetSubgameDataFromCMS 0xa91b344)
	bool TryGetSubgameDataFromCMS(struct FSubgameDisplayData& SubgameData); // (Final | Native | Private | HasOutParms | BlueprintCallable)
};

