// Class /Script/FortniteUI.MashPhaseWidget
// Size: 0x358
class UMashPhaseWidget : public ULTMWidgetBase
{
	struct TEnumAsByte<EMashPhase> CurrentPhase; // 0x328 (0x1)
	unsigned char unreflected_329[0xf]; // 0x329 (0xf) 
	int CurrentObjectiveAreaIndex; // 0x338 (0x4)
	unsigned char unreflected_33c[0x4]; // 0x33c (0x4) 
	class AFortAthenaMutator_Mash* MashMutatorRef; // 0x340 (0x8)
	class AFortPlayerControllerAthena* CachedLocalPlayerController; // 0x348 (0x8)
	bool CachedIsLocalPlayerAlive; // 0x350 (0x1)
	unsigned char padding_351[0x7]; // 0x351 (0x7)

	/* Functions */

	// Function /Script/FortniteUI.MashPhaseWidget.OnPhaseChanged (Has no native function)
	void OnPhaseChanged(struct TEnumAsByte<EMashPhase>& NewPhase, int& CurrentObjectiveIndex, int& TotalObjectiveArea); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnMashBossPawnChanged (Has no native function)
	void OnMashBossPawnChanged(class AFortPawn*& NewBossPawn); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnLocalPlayerDead (Has no native function)
	void OnLocalPlayerDead(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnLocalPlayerAlive (Has no native function)
	void OnLocalPlayerAlive(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnCountdownUpdate (Has no native function)
	void OnCountdownUpdate(int& TimeRemaining); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnCountdownStarted (Has no native function)
	void OnCountdownStarted(int& TimeRemaining); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.OnCountdownFinished (Has no native function)
	void OnCountdownFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.MashPhaseWidget.HandlePlayersLeftChanged (Underlying native function: HandlePlayersLeftChanged 0xa57e128)
	void HandlePlayersLeftChanged(int& InPlayersLeft); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashPhaseWidget.HandleMashPhaseChanged (Underlying native function: HandleMashPhaseChanged 0xa57de7c)
	void HandleMashPhaseChanged(int& NewPhase); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashPhaseWidget.HandleCountdownUpdate (Underlying native function: HandleCountdownUpdate 0xa57d7ec)
	void HandleCountdownUpdate(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashPhaseWidget.HandleCountdownStarted (Underlying native function: HandleCountdownStarted 0xa57d624)
	void HandleCountdownStarted(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.MashPhaseWidget.HandleCountdownFinished (Underlying native function: HandleCountdownFinished 0xa57d55c)
	void HandleCountdownFinished(); // (Final | Native | Protected)
};

