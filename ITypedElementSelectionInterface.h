// Class /Script/TypedElementRuntime.TypedElementSelectionInterface
// Size: 0x28
class ITypedElementSelectionInterface : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.SelectElement (Underlying native function: SelectElement 0x9b2e318)
	bool SelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected (Underlying native function: IsElementSelected 0x9b2df1c)
	bool IsElementSelected(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement (Underlying native function: GetSelectionElement 0x9b2d910)
	struct FScriptTypedElementHandle* GetSelectionElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InCurrentSelection, enum ETypedElementSelectionMethod& InSelectionMethod); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.DeselectElement (Underlying native function: DeselectElement 0x9b2c8f8)
	bool DeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement (Underlying native function: CanSelectElement 0x9b2c4b0)
	bool CanSelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement (Underlying native function: CanDeselectElement 0x9b2c27c)
	bool CanDeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers (Underlying native function: AllowSelectionModifiers 0x9b2c044)
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle*& InElementHandle, struct FScriptTypedElementListProxy& InSelectionSet); // (Native | Public | HasOutParms | BlueprintCallable)
};

