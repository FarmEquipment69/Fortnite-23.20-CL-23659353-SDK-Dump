// Class /Script/TypedElementRuntime.TypedElementSelectionSet
// Size: 0x898
class UTypedElementSelectionSet : public UObject
{
	unsigned char unreflected_28[0x800]; // 0x28 (0x800) 
	struct FMulticastInlineDelegate OnPreSelectionChange; // 0x828 (0x10)
	struct FMulticastInlineDelegate OnSelectionChange; // 0x838 (0x10)
	unsigned char padding_848[0x50]; // 0x848 (0x50)

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SetSelection (Underlying native function: SetSelection 0x9b2e874)
	bool SetSelection(struct TArray<struct FScriptTypedElementHandle*>& InElementHandles, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElements (Underlying native function: SelectElements 0x9b2e5ec)
	bool SelectElements(struct TArray<struct FScriptTypedElementHandle*>& InElementHandles, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.SelectElement (Underlying native function: SelectElement 0x9b2e4c0)
	bool SelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState (Underlying native function: RestoreSelectionState 0x9b2e27c)
	void RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// DelegateFunction /Script/TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature (Has no native function)
	void OnPreChangeDynamicDelegateSignature(class UTypedElementSelectionSet*& SelectionSet); // (MulticastDelegate | Public | Delegate)

	// DelegateFunction /Script/TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature (Has no native function)
	void OnChangeDynamicDelegateSignature(class UTypedElementSelectionSet*& SelectionSet); // (MulticastDelegate | Public | Delegate)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles (Underlying native function: K2_GetSelectedElementHandles 0x9b2e1d4)
	struct TArray<struct FScriptTypedElementHandle*> K2GetSelectedElementHandles(class UClass*& InBaseInterfaceType); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.IsElementSelected (Underlying native function: IsElementSelected 0x9b2e0bc)
	bool IsElementSelected(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementIsSelectedOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects (Underlying native function: HasSelectedObjects 0x9b2de2c)
	bool HasSelectedObjects(class UClass*& InRequiredClass); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements (Underlying native function: HasSelectedElements 0x9b2dca0)
	bool HasSelectedElements(class UClass*& InBaseInterfaceType); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject (Underlying native function: GetTopSelectedObject 0x9b2dbb0)
	class UObject* GetTopSelectedObject(class UClass*& InRequiredClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement (Underlying native function: GetSelectionElement 0x9b2dab0)
	struct FScriptTypedElementHandle* GetSelectionElement(struct FScriptTypedElementHandle*& InElementHandle, enum ETypedElementSelectionMethod& InSelectionMethod); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects (Underlying native function: GetSelectedObjects 0x9b2d7e4)
	struct TArray<class UObject*> GetSelectedObjects(class UClass*& InRequiredClass); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements (Underlying native function: GetNumSelectedElements 0x9b2d55c)
	int GetNumSelectedElements(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState (Underlying native function: GetCurrentSelectionState 0x9b2d25c)
	struct FTypedElementSelectionSetState GetCurrentSelectionState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject (Underlying native function: GetBottomSelectedObject 0x9b2d01c)
	class UObject* GetBottomSelectedObject(class UClass*& InRequiredClass); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElements (Underlying native function: DeselectElements 0x9b2cbcc)
	bool DeselectElements(struct TArray<struct FScriptTypedElementHandle*>& InElementHandles, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.DeselectElement (Underlying native function: DeselectElement 0x9b2caa0)
	bool DeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects (Underlying native function: CountSelectedObjects 0x9b2c80c)
	int CountSelectedObjects(class UClass*& InRequiredClass); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements (Underlying native function: CountSelectedElements 0x9b2c780)
	int CountSelectedElements(class UClass*& InBaseInterfaceType); // (Final | Native | Public | BlueprintCallable | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.ClearSelection (Underlying native function: ClearSelection 0x9b2c6e4)
	bool ClearSelection(struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanSelectElement (Underlying native function: CanSelectElement 0x9b2c5b8)
	bool CanSelectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement (Underlying native function: CanDeselectElement 0x9b2c384)
	bool CanDeselectElement(struct FScriptTypedElementHandle*& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers (Underlying native function: AllowSelectionModifiers 0x9b2c19c)
	bool AllowSelectionModifiers(struct FScriptTypedElementHandle*& InElementHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

