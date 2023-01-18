// Class /Script/TypedElementRuntime.TypedElementSelectionSetLibrary
// Size: 0x28
class UTypedElementSelectionSetLibrary : public UObject
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList (Underlying native function: SetSelectionFromList 0x9b2e9a0)
	static bool SetSelectionFromList(class UTypedElementSelectionSet*& SelectionSet, struct FScriptTypedElementListProxy& ElementList, struct FTypedElementSelectionOptions& SelectionOptions); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList (Underlying native function: SelectElementsFromList 0x9b2e718)
	static bool SelectElementsFromList(class UTypedElementSelectionSet*& SelectionSet, struct FScriptTypedElementListProxy& ElementList, struct FTypedElementSelectionOptions& SelectionOptions); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection (Underlying native function: GetNormalizedSelection 0x9b2d480)
	static struct FScriptTypedElementListProxy GetNormalizedSelection(class UTypedElementSelectionSet*& SelectionSet, struct FTypedElementSelectionNormalizationOptions& NormalizationOptions); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList (Underlying native function: GetNormalizedElementList 0x9b2d310)
	static struct FScriptTypedElementListProxy GetNormalizedElementList(class UTypedElementSelectionSet*& SelectionSet, struct FScriptTypedElementListProxy& ElementList, struct FTypedElementSelectionNormalizationOptions& NormalizationOptions); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList (Underlying native function: DeselectElementsFromList 0x9b2ccf8)
	static bool DeselectElementsFromList(class UTypedElementSelectionSet*& SelectionSet, struct FScriptTypedElementListProxy& ElementList, struct FTypedElementSelectionOptions& SelectionOptions); // (Final | Native | Static | Public | BlueprintCallable)
};

