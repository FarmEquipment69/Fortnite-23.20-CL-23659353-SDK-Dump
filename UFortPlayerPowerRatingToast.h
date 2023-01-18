// Class /Script/FortniteUI.FortPlayerPowerRatingToast
// Size: 0x2e8
class UFortPlayerPowerRatingToast : public UFortToastWidget
{
	class UCommonTextBlock* TextPowerDifference; // 0x2b8 (0x8)
	class UFortPlayerBanner* BannerMemberBanner; // 0x2c0 (0x8)
	class UCommonTextBlock* TextPowerRating; // 0x2c8 (0x8)
	class UCommonTextBlock* TextTitle; // 0x2d0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x2d8 (0x8)
	unsigned char padding_2e0[0x8]; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortPlayerPowerRatingToast.ShowToast (Has no native function)
	void ShowToast(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortPlayerPowerRatingToast.HideToast (Underlying native function: HideToast 0xa73d50c)
	void HideToast(); // (Final | Native | Protected | BlueprintCallable)
};

