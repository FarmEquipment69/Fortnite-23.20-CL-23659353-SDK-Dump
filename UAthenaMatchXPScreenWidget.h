// Class /Script/FortniteUI.AthenaMatchXPScreenWidget
// Size: 0x4c8
class UAthenaMatchXPScreenWidget : public UFortPostGameScreen
{
	bool bAutoTransitionScreen; // 0x420 (0x1)
	unsigned char unreflected_421[0x17]; // 0x421 (0x17) 
	struct FDataTableRowHandle ToggleMapInputAction; // 0x438 (0x10)
	int NumWidgetsFinished; // 0x448 (0x4)
	unsigned char unreflected_44c[0x4]; // 0x44c (0x4) 
	class UAthenaPreserveSquadButton* ButtonStayTogether; // 0x450 (0x8)
	class UCommonButtonBase* ButtonBack; // 0x458 (0x8)
	class UCommonVisibilitySwitcher* VisibilitySwitcherNextMatch; // 0x460 (0x8)
	class UCommonButtonBase* ButtonNextMatch; // 0x468 (0x8)
	class UCommonButtonBase* ButtonPlayWithNewTeam; // 0x470 (0x8)
	class UCommonButtonBase* ButtonPrevPlayer; // 0x478 (0x8)
	class UCommonButtonBase* ButtonNextPlayer; // 0x480 (0x8)
	class UCommonButtonBase* ButtonPrevTeam; // 0x488 (0x8)
	class UCommonButtonBase* ButtonNextTeam; // 0x490 (0x8)
	class UCommonButtonBase* ButtonReplay; // 0x498 (0x8)
	class UCommonButtonBase* ButtonCancel; // 0x4a0 (0x8)
	class UCommonButtonBase* ButtonStatToggle; // 0x4a8 (0x8)
	class UCommonWidgetSwitcherLegacy* CommonWidgetSwitcherDetailSwitch; // 0x4b0 (0x8)
	class UFortMatchXPDetails* SectionDetailsRecap; // 0x4b8 (0x8)
	class UFortMatchXPRecap* SectionXPRecap; // 0x4c0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.UpdateElementsVisibility (Underlying native function: UpdateElementsVisibility 0xa532364)
	void UpdateElementsVisibility(); // (Final | Native | Private)

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.SpectatorStreamingChanged (Underlying native function: SpectatorStreamingChanged 0xa5318ac)
	void SpectatorStreamingChanged(bool& bSpectatorStreaming); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.SetStatButtonText (Has no native function)
	void SetStatButtonText(struct FText& InText); // (Event | Protected | HasOutParms | BlueprintEvent)

	// DelegateFunction /Script/FortniteUI.AthenaMatchXPScreenWidget.OnXPScreenFinishedLoading__DelegateSignature (Has no native function)
	void OnXPScreenFinishedLoadingDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.OnToggleDetailsRecap (Has no native function)
	void OnToggleDetailsRecap(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0xa5320d0)
	void OnGamePhaseChanged(enum EAthenaGamePhase& NewPhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.AthenaMatchXPScreenWidget.HandleResurrectingNow (Underlying native function: HandleResurrectingNow 0xa5318ac)
	void HandleResurrectingNow(bool& bResurrectingNow); // (Final | Native | Protected)
};

