// Class /Script/FortniteUI.FortTabButton
// Size: 0x1410
class UFortTabButton : public UCommonButtonBase
{
	unsigned char unreflected_13e0[0x8]; // 0x13e0 (0x8) 
	class UCommonLazyImage* LazyImageIcon; // 0x13e8 (0x8)
	class UCommonTextBlock* TextTitle; // 0x13f0 (0x8)
	struct FVector2D ImageSizeMobile; // 0x13f8 (0x10)
	unsigned char padding_1408[0x8]; // 0x1408 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTabButton.SetTabLabelInfo_Implementation (Underlying native function: SetTabLabelInfo_Implementation 0xa955228)
	void SetTabLabelInfoImplementation(struct FFortTabButtonLabelInfo& TabLabelInfo); // (0x00000002 | Native | Protected | HasOutParms)
};

