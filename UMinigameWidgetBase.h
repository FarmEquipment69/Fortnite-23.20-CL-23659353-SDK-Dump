// Class /Script/FortniteUI.MinigameWidgetBase
// Size: 0x328
class UMinigameWidgetBase : public UFortHUDElementWidget
{
	unsigned char unreflected_2d0[0x30]; // 0x2d0 (0x30) 
	bool bDisplayCaptureObjectiveRow; // 0x300 (0x1)
	unsigned char unreflected_301[0x7]; // 0x301 (0x7) 
	class AFortMinigame* CurrentMinigame; // 0x308 (0x8)
	unsigned char unreflected_310[0x10]; // 0x310 (0x10) 
	class AActor* CurrentContainer; // 0x320 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.MinigameWidgetBase.ResetDisplayValues (Has no native function)
	void ResetDisplayValues(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnVolumeMinigameChanged (Underlying native function: OnVolumeMinigameChanged 0xa57fec0)
	void OnVolumeMinigameChanged(class AFortMinigame*& Minigame); // (Final | Native | Private)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnPlayerStatUpdated (Has no native function)
	void OnPlayerStatUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnOwningPlayerChangedTeams (Has no native function)
	void OnOwningPlayerChangedTeams(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnObjectiveUpdated (Has no native function)
	void OnObjectiveUpdated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayMinigameStartUI (Has no native function)
	void OnDisplayMinigameStartUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayMinigamePregameCountdownUI (Has no native function)
	void OnDisplayMinigamePregameCountdownUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayMinigameInProgressUI (Underlying native function: OnDisplayMinigameInProgressUI 0xa57ea94)
	void OnDisplayMinigameInProgressUI(bool& bDisplay); // (Native | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayMinigameEndUI (Has no native function)
	void OnDisplayMinigameEndUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayMiniGameAbortUI (Has no native function)
	void OnDisplayMiniGameAbortUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnDisplayCaptureObjectiveUI (Has no native function)
	void OnDisplayCaptureObjectiveUI(bool& bDisplay); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.MinigameWidgetBase.OnCurrentStateChangedDelegate (Underlying native function: OnCurrentStateChangedDelegate 0xa57e9d0)
	void OnCurrentStateChangedDelegate(class AFortMinigame*& Minigame, enum EFortMinigameState& MinigameState); // (Final | Native | Private)

	// Function /Script/FortniteUI.MinigameWidgetBase.MakeMessageData (Underlying native function: MakeMessageData 0xa57e6bc)
	static struct FAthenaGameMessageData MakeMessageData(enum EAthenaGameMsgType& MsgType, struct FText& MsgText, class USoundCue*& MsgSound, float& DisplayTime); // (Final | Native | Static | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.MinigameWidgetBase.HideAllMinigameWidgetUI (Underlying native function: HideAllMinigameWidgetUI 0xa57e458)
	void HideAllMinigameWidgetUI(); // (Final | Native | Private)

	// Function /Script/FortniteUI.MinigameWidgetBase.HandlePlayerStatChanged (Underlying native function: HandlePlayerStatChanged 0x87b42ec)
	void HandlePlayerStatChanged(); // (Final | Native | Private)

	// Function /Script/FortniteUI.MinigameWidgetBase.HandleOwningPlayerChangedTeams (Underlying native function: HandleOwningPlayerChangedTeams 0x6194bd0)
	void HandleOwningPlayerChangedTeams(); // (Native | Protected)

	// Function /Script/FortniteUI.MinigameWidgetBase.GetStatValue (Underlying native function: GetStatValue 0xa57d0a0)
	int GetStatValue(class UFortMinigameStatFilter*& InFilter, bool& bGameTotal); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

