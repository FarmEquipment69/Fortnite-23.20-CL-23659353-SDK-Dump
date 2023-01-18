// Class /Script/FortniteUI.FortFlagSelectionModal
// Size: 0x5d0
class UFortFlagSelectionModal : public UFortActivatablePanel
{
	class UFortFlagObject* SelectedFlag; // 0x518 (0x8)
	float FlagConfirmSpinnerDelay; // 0x520 (0x4)
	unsigned char unreflected_524[0x1c]; // 0x524 (0x1c) 
	class UCommonTextBlock* TextConfirmation; // 0x540 (0x8)
	class UCommonTextBlock* TextCurrentFlagRegionName; // 0x548 (0x8)
	class UFortFlagImage* CurrentFlagImage; // 0x550 (0x8)
	class UFortFlagImage* ConfirmationCurrentFlagImage; // 0x558 (0x8)
	class UFortFlagImage* ConfirmationTargetFlagImage; // 0x560 (0x8)
	class UCommonTileView* TileViewFlagOptions; // 0x568 (0x8)
	class UCommonTextBlock* TextFlagRegionName; // 0x570 (0x8)
	class UCommonTextBlock* TextChangeRegionBlock; // 0x578 (0x8)
	class UCommonButtonBase* ButtonChange; // 0x580 (0x8)
	class UCommonButtonBase* ButtonConfirmationCancel; // 0x588 (0x8)
	class UCommonButtonBase* ButtonConfirmationConfirm; // 0x590 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x598 (0x8)
	class UCommonButtonLegacy* ButtonCloseMobile; // 0x5a0 (0x8)
	class UImage* ImageSpinner; // 0x5a8 (0x8)
	unsigned char padding_5b0[0x20]; // 0x5b0 (0x20)
};

