// Class /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent
// Size: 0xb8
class UCreativeGameStreamDeviceCoordinatorComponent : public UPlayspaceComponent
{
	struct TArray<struct TWeakObjectPtr<class UCreativeGameStreamDeviceComponent>> EndGameCreativeGameStreamDeviceComponentQueue; // 0xa0 (0x10)
	struct TWeakObjectPtr<class AFortMinigame> Minigame; // 0xb0 (0x8)

	/* Functions */

	// Function /Script/CRD_GameStreamRuntime.CreativeGameStreamDeviceCoordinatorComponent.OnMinigameStateChanged (Underlying native function: OnMinigameStateChanged 0x738c2ac)
	void OnMinigameStateChanged(class AFortMinigame*& InMinigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Private)
};

