// Class /Script/TypedElementRuntime.TypedElementObjectInterface
// Size: 0x28
class ITypedElementObjectInterface : public IInterface
{

	/* Functions */

	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObjectClass (Underlying native function: GetObjectClass 0x9b2d62c)
	class UClass* GetObjectClass(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementRuntime.TypedElementObjectInterface.GetObject (Underlying native function: GetObject 0x9b2d578)
	class UObject* GetObject(struct FScriptTypedElementHandle*& InElementHandle); // (Native | Public | HasOutParms | BlueprintCallable)
};

