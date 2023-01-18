// Class /Script/TypedElementFramework.TypedElementRegistry
// Size: 0x948
class UTypedElementRegistry : public UObject
{
	unsigned char unreflected_948[0x948]; 

	/* Functions */

	// Function /Script/TypedElementFramework.TypedElementRegistry.GetInstance (Underlying native function: GetInstance 0x992320c)
	static class UTypedElementRegistry* GetInstance(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementRegistry.GetElementInterface (Underlying native function: GetElementInterface 0x99230fc)
	class UObject* GetElementInterface(struct FScriptTypedElementHandle*& InElementHandle, class UClass*& InBaseInterfaceType); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

