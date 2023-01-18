// Class /Script/FortniteUI.FortTouchInteractionLayer
// Size: 0x358
class UFortTouchInteractionLayer : public UCommonUserWidget
{
	class UClass* WidgetClass; // 0x290 (0x8)
	struct FUserWidgetPool WidgetPool; // 0x298 (0x88)
	class UCanvasPanel* ContentPanel; // 0x320 (0x8)
	struct TArray<struct FButtonInteractionPair> InteractableButtonMap; // 0x328 (0x10)
	class AActor* FocusedInteraction; // 0x338 (0x8)
	class AFortPlayerController* OwningPC; // 0x340 (0x8)
	class UFortControllerComponent_Interaction* InteractionComponent; // 0x348 (0x8)
	class UFortActorComponent_MultiInteract* MultiInteractComponent; // 0x350 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortTouchInteractionLayer.UpdateInteractingButtonTimer (Underlying native function: UpdateInteractingButtonTimer 0xa5f62b8)
	void UpdateInteractingButtonTimer(float& TotalDuration, float& Remaining, float& InteractingMultiplier); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchInteractionLayer.UpdateButtonTimer (Underlying native function: UpdateButtonTimer 0xa5f61c0)
	void UpdateButtonTimer(class AActor*& In, float& TotalDuration, float& Remaining); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchInteractionLayer.UpdateButtonFocusForInteraction (Underlying native function: UpdateButtonFocusForInteraction 0xa5f6140)
	void UpdateButtonFocusForInteraction(class UFortInteractContextInfo*& NewInteraction); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortTouchInteractionLayer.RemoveInteraction (Underlying native function: RemoveInteraction 0xa5f60c0)
	void RemoveInteraction(class AActor*& In); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteUI.FortTouchInteractionLayer.RefreshVisuals (Underlying native function: RefreshVisuals 0xa5f5f90)
	void RefreshVisuals(int& InteractingActorCount, float& InteractingMultiplier, float& InteractDuration); // (Final | Native | Protected)

	// Function /Script/FortniteUI.FortTouchInteractionLayer.AddInteraction (Underlying native function: AddInteraction 0xa5f59b4)
	void AddInteraction(class AActor*& In); // (Final | Native | Protected | BlueprintCallable)
};

