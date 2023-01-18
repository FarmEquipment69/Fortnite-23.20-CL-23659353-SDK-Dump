// Class /Script/FortniteUI.LimitedLivesCounterWidget
// Size: 0x348
class ULimitedLivesCounterWidget : public ULTMWidgetBase
{
	struct TWeakObjectPtr<class AFortPlayerStateAthena> CurrentPlayerState; // 0x328 (0x8)
	unsigned char unreflected_330[0x4]; // 0x330 (0x4) 
	int MaxLives; // 0x334 (0x4)
	unsigned char padding_338[0x10]; // 0x338 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.LimitedLivesCounterWidget.OnPlayerDied (Underlying native function: OnPlayerDied 0x8286cf8)
	void OnPlayerDied(class AFortPlayerStateAthena*& DeadPlayer); // (Native | Protected)

	// Function /Script/FortniteUI.LimitedLivesCounterWidget.OnLivesCountUpdated (Underlying native function: OnLivesCountUpdated 0xa57f144)
	void OnLivesCountUpdated(int& NewCount); // (Native | Event | Protected | BlueprintEvent)
};

