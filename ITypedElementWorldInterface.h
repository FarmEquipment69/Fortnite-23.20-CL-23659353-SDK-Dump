// Class /Script/Engine.TypedElementWorldInterface
// Size: 0x28
class ITypedElementWorldInterface : public IInterface
{

	/* Functions */

	// Function /Script/Engine.TypedElementWorldInterface.SetWorldTransform (Underlying native function: SetWorldTransform 0x9d7b968)
	bool SetWorldTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& InTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.SetRelativeTransform (Underlying native function: SetRelativeTransform 0x9d7b804)
	bool SetRelativeTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& InTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.SetPivotOffset (Underlying native function: SetPivotOffset 0x9d7b6f0)
	bool SetPivotOffset(struct FScriptTypedElementHandle*& InElementHandle, struct FVector& InPivotOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.PromoteElement (Underlying native function: PromoteElement 0x9d7b550)
	struct FScriptTypedElementHandle* PromoteElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& OverrideWorld); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementStarted (Underlying native function: NotifyMovementStarted 0x9d7b3c4)
	void NotifyMovementStarted(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementOngoing (Underlying native function: NotifyMovementOngoing 0x9d7b31c)
	void NotifyMovementOngoing(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.NotifyMovementEnded (Underlying native function: NotifyMovementEnded 0x9d7b274)
	void NotifyMovementEnded(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.IsTemplateElement (Underlying native function: IsTemplateElement 0x9923248)
	bool IsTemplateElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetWorldTransform (Underlying native function: GetWorldTransform 0x9d7aee8)
	bool GetWorldTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& OutTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetRelativeTransform (Underlying native function: GetRelativeTransform 0x9d7accc)
	bool GetRelativeTransform(struct FScriptTypedElementHandle*& InElementHandle, struct FTransform& OutTransform); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetPivotOffset (Underlying native function: GetPivotOffset 0x9d7ab84)
	bool GetPivotOffset(struct FScriptTypedElementHandle*& InElementHandle, struct FVector& OutPivotOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetOwnerWorld (Underlying native function: GetOwnerWorld 0x9d7aad0)
	class UWorld* GetOwnerWorld(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetOwnerLevel (Underlying native function: GetOwnerLevel 0x9d7aa1c)
	class ULevel* GetOwnerLevel(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.GetBounds (Underlying native function: GetBounds 0x9d7a854)
	bool GetBounds(struct FScriptTypedElementHandle*& InElementHandle, struct FBoxSphereBounds& OutBounds); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.DuplicateElement (Underlying native function: DuplicateElement 0x9d7a4b0)
	struct FScriptTypedElementHandle* DuplicateElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& InWorld, struct FVector& InLocationOffset); // (Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.DeleteElement (Underlying native function: DeleteElement 0x9d79f98)
	bool DeleteElement(struct FScriptTypedElementHandle*& InElementHandle, class UWorld*& InWorld, class UTypedElementSelectionSet*& InSelectionSet, struct FTypedElementDeletionOptions& InDeletionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanPromoteElement (Underlying native function: CanPromoteElement 0x9d79ddc)
	bool CanPromoteElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanMoveElement (Underlying native function: CanMoveElement 0x9d79ce4)
	bool CanMoveElement(struct FScriptTypedElementHandle*& InElementHandle, enum ETypedElementWorldType& InWorldType); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanEditElement (Underlying native function: CanEditElement 0x9d79c30)
	bool CanEditElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanDuplicateElement (Underlying native function: CanDuplicateElement 0x9d79b7c)
	bool CanDuplicateElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementWorldInterface.CanDeleteElement (Underlying native function: CanDeleteElement 0x9d79ac8)
	bool CanDeleteElement(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

