// Class /Script/FortniteUI.FortBannerSlotButton
// Size: 0x1440
class UFortBannerSlotButton : public UCommonButtonLegacy
{
	class UFortPlayerBanner* PlayerBanner; // 0x1430 (0x8)
	unsigned char padding_1438[0x8]; // 0x1438 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortBannerSlotButton.HandleInventoryUpdated (Underlying native function: HandleInventoryUpdated 0xa5098ec)
	void HandleInventoryUpdated(struct TSet<struct FString>& ItemChangeFlags, int64_t& ProfileRevision); // (Final | Native | Protected | HasOutParms)
};

