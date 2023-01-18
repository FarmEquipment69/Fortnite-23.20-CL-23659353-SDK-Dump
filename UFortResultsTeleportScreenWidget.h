// Class /Script/FortniteUI.FortResultsTeleportScreenWidget
// Size: 0x2b8
class UFortResultsTeleportScreenWidget : public UCommonUserWidget
{
	float ExitTime; // 0x290 (0x4)
	unsigned char padding_294[0x24]; // 0x294 (0x24)

	/* Functions */

	// Function /Script/FortniteUI.FortResultsTeleportScreenWidget.StartExitTimer (Underlying native function: StartExitTimer 0xa70264c)
	void StartExitTimer(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FortResultsTeleportScreenWidget.OnExitTimerFinished (Has no native function)
	void OnExitTimerFinished(); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortResultsTeleportScreenWidget.OnExitTimeRemainingUpdated (Has no native function)
	void OnExitTimeRemainingUpdated(int& TimeRemainingSeconds); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteUI.FortResultsTeleportScreenWidget.OnExitTimePercentagePassedUpdated (Has no native function)
	void OnExitTimePercentagePassedUpdated(float& Percent); // (Event | Public | BlueprintEvent)
};

