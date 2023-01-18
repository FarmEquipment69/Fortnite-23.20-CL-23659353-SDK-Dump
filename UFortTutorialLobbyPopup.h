// Class /Script/FortniteUI.FortTutorialLobbyPopup
// Size: 0x590
class UFortTutorialLobbyPopup : public UFortActivatablePanel
{
	class UFortPlaylistAthena* TutorialPlaylistData; // 0x518 (0x8)
	class UFortPlaylistAthena* TutorialDefensiveBuildingPlaylistData; // 0x520 (0x8)
	class UFortPlaylistAthena* SoloPlaylistData; // 0x528 (0x8)
	class UWidgetSwitcher* WidgetSwitcherPopupTutorial; // 0x530 (0x8)
	unsigned char padding_538[0x58]; // 0x538 (0x58)

	/* Functions */

	// Function /Script/FortniteUI.FortTutorialLobbyPopup.StartTutorial (Underlying native function: StartTutorial 0xa50b808)
	void StartTutorial(); // (Final | Native | Private | BlueprintCallable)

	// Function /Script/FortniteUI.FortTutorialLobbyPopup.SkipTutorial (Underlying native function: SkipTutorial 0xa50b7cc)
	void SkipTutorial(); // (Final | Native | Private | BlueprintCallable)
};

