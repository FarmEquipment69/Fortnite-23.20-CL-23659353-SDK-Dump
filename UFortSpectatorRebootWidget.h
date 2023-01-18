// Class /Script/FortniteUI.FortSpectatorRebootWidget
// Size: 0x2e8
class UFortSpectatorRebootWidget : public UFortHUDElementWidget
{
	class AFortPlayerStateAthena* PlayerState; // 0x2d0 (0x8)
	class AFortPlayerStateAthena* SpectatingTargetPlayerState; // 0x2d8 (0x8)
	struct TWeakObjectPtr<class ABuildingGameplayActorSpawnMachine> CurrentInteractingRebootVan; // 0x2e0 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortSpectatorRebootWidget.OnResurrectionStateChanged (Has no native function)
	void OnResurrectionStateChanged(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FortSpectatorRebootWidget.HandleOnSpectatingTargetChanged (Underlying native function: HandleOnSpectatingTargetChanged 0xa6fef34)
	void HandleOnSpectatingTargetChanged(class AFortPlayerStateZone*& PS); // (Final | Native | Protected)
};

