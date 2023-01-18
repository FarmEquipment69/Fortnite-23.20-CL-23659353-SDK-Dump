// Class /Script/FortniteGame.FortCapturableItemInterface
// Size: 0x28
class IFortCapturableItemInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortCapturableItemInterface.OnAddedToCaptureList (Underlying native function: OnAddedToCaptureList 0x8267768)
	void OnAddedToCaptureList(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortCapturableItemInterface.GetPawnTryingToCaptureItem (Underlying native function: GetPawnTryingToCaptureItem 0x809386c)
	class AFortPawn* GetPawnTryingToCaptureItem(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCapturableItemInterface.GetCaptureItemEntries (Underlying native function: GetCaptureItemEntries 0x88a0f08)
	struct TArray<struct FFortItemEntry> GetCaptureItemEntries(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCapturableItemInterface.CanBeCaptured (Underlying native function: CanBeCaptured 0x88a0c38)
	bool CanBeCaptured(class UFortGameplayTagContainer*& InvalidGameplayTagContainer, class ABuildingActor*& InBuildingActor); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCapturableItemInterface.CanBeAddedToCaptureList (Underlying native function: CanBeAddedToCaptureList 0x877e260)
	bool CanBeAddedToCaptureList(class UFortGameplayTagContainer*& InvalidGameplayTagContainer); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

