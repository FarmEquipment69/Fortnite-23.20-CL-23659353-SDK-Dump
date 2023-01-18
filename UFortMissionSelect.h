// Class /Script/FortniteUI.FortMissionSelect
// Size: 0x500
class UFortMissionSelect : public UCommonActivatablePanelLegacy
{
	unsigned char unreflected_4e0[0x10]; // 0x4e0 (0x10) 
	struct FMulticastInlineDelegate OnNavigation; // 0x4f0 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortMissionSelect.NavigateMissionTiles (Underlying native function: NavigateMissionTiles 0xa9191fc)
	bool NavigateMissionTiles(enum EUINavigation& Direction); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortMissionSelect.CanCaptureAcceptInput (Has no native function)
	bool CanCaptureAcceptInput(); // (Event | Protected | BlueprintEvent)
};

