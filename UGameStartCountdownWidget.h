// Class /Script/FortniteUI.GameStartCountdownWidget
// Size: 0x338
class UGameStartCountdownWidget : public ULTMWidgetBase
{
	class USoundBase* CountdownMusicStinger; // 0x328 (0x8)
	class AFortAthenaMutator_GameStartCountdown* GameStartCountdownMutator; // 0x330 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.GameStartCountdownWidget.HandleGameStartCountdownEnd (Has no native function)
	void HandleGameStartCountdownEnd(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.GameStartCountdownWidget.HandleGameStartCountdownBegin (Has no native function)
	void HandleGameStartCountdownBegin(float& Duration, int& StartingCountdownInteger); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.GameStartCountdownWidget.GetCountdownMusicStinger (Underlying native function: GetCountdownMusicStinger 0x8843a90)
	class USoundBase* GetCountdownMusicStinger(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

