// Class /Script/Engine.TypedElementCommonActions
// Size: 0x828
class UTypedElementCommonActions : public UObject
{
	unsigned char unreflected_828[0x828]; 

	/* Functions */

	// Function /Script/Engine.TypedElementCommonActions.K2_DuplicateSelectedElements (Underlying native function: K2_DuplicateSelectedElements 0x9d7b060)
	struct TArray<struct FScriptTypedElementHandle*> K2DuplicateSelectedElements(class UTypedElementSelectionSet*& SelectionSet, class UWorld*& World, struct FVector& LocationOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementCommonActions.DuplicateNormalizedElements (Underlying native function: DuplicateNormalizedElements 0x9d7a60c)
	struct TArray<struct FScriptTypedElementHandle*> DuplicateNormalizedElements(struct FScriptTypedElementListProxy& ElementList, class UWorld*& World, struct FVector& LocationOffset); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.TypedElementCommonActions.DeleteSelectedElements (Underlying native function: DeleteSelectedElements 0x9d7a2d4)
	bool DeleteSelectedElements(class UTypedElementSelectionSet*& SelectionSet, class UWorld*& World, struct FTypedElementDeletionOptions& DeletionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.TypedElementCommonActions.DeleteNormalizedElements (Underlying native function: DeleteNormalizedElements 0x9d7a120)
	bool DeleteNormalizedElements(struct FScriptTypedElementListProxy& ElementList, class UWorld*& World, class UTypedElementSelectionSet*& InSelectionSet, struct FTypedElementDeletionOptions& DeletionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

