// Class /Script/TypedElementFramework.TestTypedElementInterfaceA
// Size: 0x28
class ITestTypedElementInterfaceA : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.SetDisplayName (Underlying native function: SetDisplayName 0x9923e34)
	bool SetDisplayName(struct FScriptTypedElementHandle*& InElementHandle, struct FText& InNewName, bool& bNotify); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementFramework.TestTypedElementInterfaceA.GetDisplayName (Underlying native function: GetDisplayName 0x9922b94)
	struct FText GetDisplayName(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

