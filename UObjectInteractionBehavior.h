// Class /Script/FortniteGame.ObjectInteractionBehavior
// Size: 0x120
class UObjectInteractionBehavior : public UActorComponent
{
	struct FColor HoverReticleColor; // 0xa0 (0x4)
	struct FColor ActiveReticleColor; // 0xa4 (0x4)
	struct FDataTableRowHandle InteractionClasses; // 0xa8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> ValidAllowedClasses; // 0xb8 (0x10)
	struct TArray<struct TWeakObjectPtr<class UClass>> ValidForbiddenClasses; // 0xc8 (0x10)
	class UClass* StartInteractionAbility; // 0xd8 (0x8)
	class UClass* EndInteractionAbility; // 0xe0 (0x8)
	class UClass* TriggerInteractionAbility; // 0xe8 (0x8)
	class UClass* RotateClockwiseAbility; // 0xf0 (0x8)
	class UClass* RotateCounterclockwiseAbility; // 0xf8 (0x8)
	class UClass* MirrorAbility; // 0x100 (0x8)
	class UClass* ExitAbility; // 0x108 (0x8)
	class UClass* FailAbility; // 0x110 (0x8)
	bool bShouldAddToParent; // 0x118 (0x1)
	bool bShouldUseActorToSelection; // 0x119 (0x1)
	unsigned char unreflected_11a[0x2]; // 0x11a (0x2) 
	int Priority; // 0x11c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.ObjectInteractionBehavior.TriggerInteractionBehavior (Underlying native function: TriggerInteractionBehavior 0x8b0af84)
	void TriggerInteractionBehavior(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.TickMovementMode (Underlying native function: TickMovementMode 0x7570aa8)
	void TickMovementMode(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.StartCreativeInteractionOnServer (Underlying native function: StartCreativeInteractionOnServer 0x756d600)
	void StartCreativeInteractionOnServer(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.StartCreativeInteractionOnClient (Underlying native function: StartCreativeInteractionOnClient 0x756d618)
	void StartCreativeInteractionOnClient(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.ReceiveSpawnedActor (Underlying native function: ReceiveSpawnedActor 0x709e37c)
	void ReceiveSpawnedActor(class AActor*& SpawnedActor); // (0x00000002 | Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.PlayGameplayAbility (Underlying native function: PlayGameplayAbility 0x9010394)
	void PlayGameplayAbility(class UClass*& ActivatedAbilityClass); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.OnObjectPlacement (Has no native function)
	void OnObjectPlacement(struct TArray<class UMeshComponent*>& Components, struct FOriginalAndSpawnedPair& NewlyPlacedActorPair); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.IsSelectionSetInValidPosition (Underlying native function: IsSelectionSetInValidPosition 0x900eb08)
	bool IsSelectionSetInValidPosition(); // (Native | Public)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.HandleDuplicateActor (Underlying native function: HandleDuplicateActor 0x14cfdb4)
	void HandleDuplicateActor(); // (0x00000002 | Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.GetSelectedActorsMeshComponents (Underlying native function: GetSelectedActorsMeshComponents 0x900dc24)
	void GetSelectedActorsMeshComponents(struct TArray<class UMeshComponent*>& Components); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.GetSelectedActors (Underlying native function: GetSelectedActors 0x900db88)
	void GetSelectedActors(struct TArray<class AActor*>& SelectedActors); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.GetFortPlayerController (Underlying native function: GetFortPlayerController 0x900d7fc)
	class AFortPlayerController* GetFortPlayerController(); // (Final | 0x00000002 | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.GetFortCreativeMoveTool (Underlying native function: GetFortCreativeMoveTool 0x900d7b8)
	class AFortCreativeMoveTool* GetFortCreativeMoveTool(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.ExitCreativeInteraction (Underlying native function: ExitCreativeInteraction 0x8b0b064)
	void ExitCreativeInteraction(bool& bShouldClearActiveInteractionMode); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.ObjectInteractionBehavior.EndCreativeInteraction (Underlying native function: EndCreativeInteraction 0x292d060)
	void EndCreativeInteraction(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)
};

