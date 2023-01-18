// Class /Script/FortniteUI.FortHeroLoadoutPedestal
// Size: 0x518
class AFortHeroLoadoutPedestal : public AFortItemPreviewPedestal
{
	struct FName SlotName; // 0x4e8 (0x4)
	struct TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> HeroLoadout; // 0x4ec (0x8)
	bool bIsSlotFocusedInUI; // 0x4f4 (0x1)
	unsigned char padding_4f5[0x23]; // 0x4f5 (0x23)

	/* Functions */

	// Function /Script/FortniteUI.FortHeroLoadoutPedestal.HandleSlotFocusInUIChanged (Has no native function)
	void HandleSlotFocusInUIChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortHeroLoadoutPedestal.HandleMcpProfilesInitialized (Underlying native function: HandleMcpProfilesInitialized 0xa9187ac)
	void HandleMcpProfilesInitialized(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHeroLoadoutPedestal.HandleDifferentLoadoutViewed (Underlying native function: HandleDifferentLoadoutViewed 0xa9186e8)
	void HandleDifferentLoadoutViewed(class UFortCampaignHeroLoadoutItem*& PreviousLoadout, class UFortCampaignHeroLoadoutItem*& CurrentLoadout); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortHeroLoadoutPedestal.HandleDifferentHeroLoadoutSlotFocused (Underlying native function: HandleDifferentHeroLoadoutSlotFocused 0xa918668)
	void HandleDifferentHeroLoadoutSlotFocused(struct FName& FocusedSlotName); // (Final | Native | Private)
};

