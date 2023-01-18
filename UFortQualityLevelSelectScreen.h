// Class /Script/FortniteUI.FortQualityLevelSelectScreen
// Size: 0x538
class UFortQualityLevelSelectScreen : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x20]; // 0x4e0 (0x20) 
	enum EFortGameFeature GameFeature; // 0x500 (0x1)
	unsigned char unreflected_501[0x7]; // 0x501 (0x7) 
	class UFortQualityModeTile* ButtonSelectMediumQuality; // 0x508 (0x8)
	class UFortQualityModeTile* ButtonSelectHighQuality; // 0x510 (0x8)
	class UCommonButtonLegacy* ButtonConfirm; // 0x518 (0x8)
	class UFortHUDQualityLevelSelectTimer* QualityLevelSelectTimer; // 0x520 (0x8)
	unsigned char padding_528[0x10]; // 0x528 (0x10)
};

