// Class /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget
// Size: 0x290
class UFortPlayerAugmentHUDQuickbarWidget : public UCommonUserWidget
{

	/* Functions */

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnNumAugmentGrantRoundsForPlaylistUpdated (Has no native function)
	void OnNumAugmentGrantRoundsForPlaylistUpdated(int& NumGrantRounds); // (Event | Protected | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.OnAugmentsUpdated (Has no native function)
	void OnAugmentsUpdated(struct TArray<class UFortPlayerAugmentItemDefinition*>& ActiveAugments); // (Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/PlayerAugmentsUI.FortPlayerAugmentHUDQuickbarWidget.GetNumAugmentGrantRoundsForPlaylist (Underlying native function: GetNumAugmentGrantRoundsForPlaylist 0x75283e0)
	int GetNumAugmentGrantRoundsForPlaylist(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

