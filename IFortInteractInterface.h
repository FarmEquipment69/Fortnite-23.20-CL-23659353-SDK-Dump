// Class /Script/FortniteGame.FortInteractInterface
// Size: 0x28
class IFortInteractInterface : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortInteractInterface.SetActorForInteraction (Underlying native function: SetActorForInteraction 0x8946e34)
	void SetActorForInteraction(class AActor*& ForwardInteractionActor); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.ServerOnAttemptInteract (Underlying native function: ServerOnAttemptInteract 0x8946b7c)
	bool ServerOnAttemptInteract(struct FInteractionType& InteractType); // (Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortInteractInterface.OnFortInteractAnimNotifyEnd (Underlying native function: OnFortInteractAnimNotifyEnd 0x8942d2c)
	void OnFortInteractAnimNotifyEnd(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FName& NotifyStateName, struct FAnimNotifyEventReference& EventReference); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.OnFortInteractAnimNotifyBegin (Underlying native function: OnFortInteractAnimNotifyBegin 0x8942b50)
	void OnFortInteractAnimNotifyBegin(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FName& NotifyStateName, float& TotalDuration, struct FAnimNotifyEventReference& EventReference); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortInteractInterface.LocalOnFailedInteract (Underlying native function: LocalOnFailedInteract 0x8940a7c)
	void LocalOnFailedInteract(class AFortPlayerPawn*& InteractingPawn); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortInteractInterface.IconPlacementNeedsUpdate (Underlying native function: IconPlacementNeedsUpdate 0x893c86c)
	bool IconPlacementNeedsUpdate(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetMinDistanceFromInteraction (Underlying native function: GetMinDistanceFromInteraction 0x26aa748)
	float GetMinDistanceFromInteraction(); // (Native | Event | Public | BlueprintEvent | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetIconPlacement (Underlying native function: GetIconPlacement 0x8937920)
	void GetIconPlacement(class AActor*& SelfActor, class AActor*& ViewingActor, struct FVector& OutLocation, struct FVector& OutExtents); // (0x00000002 | Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetFocusedSocketLocation (Underlying native function: GetFocusedSocketLocation 0x8936fc0)
	struct FVector GetFocusedSocketLocation(); // (0x00000002 | Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetCustomTint (Underlying native function: GetCustomTint 0x89368cc)
	struct FLinearColor GetCustomTint(); // (Native | Event | Public | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetCustomIcon (Underlying native function: GetCustomIcon 0x8936828)
	struct TWeakObjectPtr<class UTexture2D> GetCustomIcon(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetConnectedVisibleActor (Underlying native function: GetConnectedVisibleActor 0x5d751e0)
	class AActor* GetConnectedVisibleActor(); // (Native | Event | Public | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetBoundsComponents (Underlying native function: GetBoundsComponents 0x8935700)
	void GetBoundsComponents(class AActor*& SelfActor, struct TArray<class USceneComponent*>& OutComponents); // (Native | Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortInteractInterface.GetActorForInteraction (Underlying native function: GetActorForInteraction 0x89336f4)
	class AActor* GetActorForInteraction(); // (Native | Event | Public | BlueprintEvent | Const)
};

