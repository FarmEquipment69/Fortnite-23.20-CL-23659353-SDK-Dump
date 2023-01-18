// Class /Script/FortniteUI.LTMCountdownWidgetBase
// Size: 0x328
class ULTMCountdownWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x40]; // 0x2d0 (0x40) 
	struct FFortPrioritizedWidgetData PrioritizationData; // 0x310 (0x2)
	unsigned char unreflected_312[0x6]; // 0x312 (0x6) 
	struct TArray<struct FFortCountdownSounds> TrackList; // 0x318 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.OnFinalCountdownStarted (Has no native function)
	void OnFinalCountdownStarted(int& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.OnCountdownUpdate (Has no native function)
	void OnCountdownUpdate(int& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.OnCountdownStarted (Has no native function)
	void OnCountdownStarted(int& TimeRemaining); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.OnCountdownFinished (Has no native function)
	void OnCountdownFinished(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.OnCountdownActivated (Has no native function)
	void OnCountdownActivated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.HandleFinalCountdownStarted (Underlying native function: HandleFinalCountdownStarted 0xa57da94)
	void HandleFinalCountdownStarted(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.HandleCountdownUpdate (Underlying native function: HandleCountdownUpdate 0xa57d744)
	void HandleCountdownUpdate(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.HandleCountdownStarted (Underlying native function: HandleCountdownStarted 0xa57d5a4)
	void HandleCountdownStarted(int& TimeRemaining); // (Final | Native | Protected)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.HandleCountdownFinished (Underlying native function: HandleCountdownFinished 0xa57d548)
	void HandleCountdownFinished(); // (Final | Native | Protected)

	// Function /Script/FortniteUI.LTMCountdownWidgetBase.GetTimeText (Underlying native function: GetTimeText 0xa57d180)
	struct FText GetTimeText(int& TimeRemaining); // (Final | Native | Protected | BlueprintCallable)
};

