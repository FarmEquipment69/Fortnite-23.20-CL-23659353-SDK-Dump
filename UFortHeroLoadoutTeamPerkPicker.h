// Class /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker
// Size: 0x3d8
class UFortHeroLoadoutTeamPerkPicker : public UFortItemPickerBase
{
	struct TWeakObjectPtr<class UFortCampaignHeroLoadoutItem> TargetLoadoutItem; // 0x3d0 (0x8)

	/* Functions */

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.SetTargetLoadout (Underlying native function: SetTargetLoadout 0x759ad6c)
	void SetTargetLoadout(class UFortCampaignHeroLoadoutItem*& LoadoutItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/SaveTheWorldUI.FortHeroLoadoutTeamPerkPicker.HandleDifferentTargetLoadoutSetBP (Has no native function)
	void HandleDifferentTargetLoadoutSetBP(); // (Event | Protected | BlueprintEvent)
};

