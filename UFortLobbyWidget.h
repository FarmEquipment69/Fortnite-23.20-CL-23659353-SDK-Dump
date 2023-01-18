// Class /Script/FortniteUI.FortLobbyWidget
// Size: 0x580
class UFortLobbyWidget : public UFortActivatablePanel
{
	unsigned char unreflected_518[0x10]; // 0x518 (0x10) 
	class AAthenaSquadPedestalGroup* SquadPedestalGroup; // 0x528 (0x8)
	struct TArray<class AFortTeamMemberPedestal*> VisualOrderedPedestals; // 0x530 (0x10)
	unsigned char unreflected_540[0x20]; // 0x540 (0x20) 
	class UFortRadialPicker* RadialEmotePicker; // 0x560 (0x8)
	class UFortLobbyPlayerPanel* PlayerPanelPlayerOptions; // 0x568 (0x8)
	struct FDataTableRowHandle EmoteInputAction; // 0x570 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.FortLobbyWidget.OnPlayerPanelHidden (Has no native function)
	void OnPlayerPanelHidden(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortLobbyWidget.OnPlayerClicked (Has no native function)
	void OnPlayerClicked(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteUI.FortLobbyWidget.HandleEmoteClicked (Underlying native function: HandleEmoteClicked 0x1f829d0)
	void HandleEmoteClicked(bool& bPassThrough); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteUI.FortLobbyWidget.DynamicHandleLoadingScreenVisibilityChanged (Underlying native function: DynamicHandleLoadingScreenVisibilityChanged 0x150dd68)
	void DynamicHandleLoadingScreenVisibilityChanged(bool& IsVisible); // (Final | Native | Protected)
};

