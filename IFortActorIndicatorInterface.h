// Class /Script/FortniteGame.FortActorIndicatorInterface
// Size: 0x28
class IFortActorIndicatorInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortActorIndicatorInterface.GetIndicatedActor (Underlying native function: GetIndicatedActor 0x23ba54c)
	class AActor* GetIndicatedActor(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortActorIndicatorInterface.GetCanvasPanelContainer (Has no native function)
	class UCanvasPanel* GetCanvasPanelContainer(enum EFortActorIndicatorContainerWidget& ContainerEnum); // (Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

