// Class /Script/FortniteUI.FortAthenaViewQuestsButton
// Size: 0x1440
class UFortAthenaViewQuestsButton : public UCommonButtonLegacy
{
	unsigned char unreflected_1440[0x1440]; 

	/* Functions */

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HasUnseenQuests (Underlying native function: HasUnseenQuests 0xa73d4e0)
	bool HasUnseenQuests(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleUnseenQuestsChanged (Has no native function)
	void HandleUnseenQuestsChanged(bool& bHasUnseenQuests); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleToggleFullscreenMap (Underlying native function: HandleToggleFullscreenMap 0xa73d464)
	void HandleToggleFullscreenMap(bool& bVisible); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandlePlaylistChanged (Underlying native function: HandlePlaylistChanged 0xa73d21c)
	void HandlePlaylistChanged(struct FPlaylistData& PlaylistData); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteUI.FortAthenaViewQuestsButton.HandleOwningPanelActivated (Underlying native function: HandleOwningPanelActivated 0xa73cd04)
	void HandleOwningPanelActivated(); // (Final | Native | Private)
};

