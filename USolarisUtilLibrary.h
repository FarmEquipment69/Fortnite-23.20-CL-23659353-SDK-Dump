// Class /Script/Solaris.SolarisUtilLibrary
// Size: 0x28
class USolarisUtilLibrary : public UObject
{

	/* Functions */

	// Function /Script/Solaris.SolarisUtilLibrary.ReplaceOptionValue (Underlying native function: ReplaceOptionValue 0x6a7ccd4)
	static int64_t ReplaceOptionValue(int64_t& ResultProperty, int64_t& Option, int64_t& Value); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.ReferenceIsValid (Underlying native function: ReferenceIsValid 0x6a7cc6c)
	static bool ReferenceIsValid(int64_t& Reference); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.ObjectHasNoFlags (Underlying native function: ObjectHasNoFlags 0x6a7c230)
	static bool ObjectHasNoFlags(class UObject*& Object, int& Flags); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.MakeUnsetOption (Underlying native function: MakeUnsetOption 0x6a7af7c)
	static int64_t MakeUnsetOption(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.MakeOptionFromValue (Underlying native function: MakeOptionFromValue 0x6a7a8b0)
	static bool MakeOptionFromValue(class UObject*& Property, int64_t& Value); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.IsOptionSet (Underlying native function: IsOptionSet 0x6a79ee4)
	static bool IsOptionSet(int64_t& Option); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.IsNonNullObject (Underlying native function: IsNonNullObject 0x6a79e70)
	static bool IsNonNullObject(class UObject*& Object); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.InstantiateObject (Underlying native function: InstantiateObject 0x6a79c60)
	static void InstantiateObject(class UClass*& Class, int64_t& InstancingGraph); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.InstanceFunction (Underlying native function: InstanceFunction 0x6a79b84)
	static void InstanceFunction(class UObject*& Object, struct FName& MethodName); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.HasInterface (Underlying native function: HasInterface 0x6a79700)
	static bool HasInterface(class UObject*& Object, class UVerseClass*& InterfaceClass); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.GetOptionValue (Underlying native function: GetOptionValue 0x6a79088)
	static int64_t GetOptionValue(int64_t& Option); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.GetFunctionForInterfaceMethod (Underlying native function: GetFunctionForInterfaceMethod 0x6a78b68)
	static void GetFunctionForInterfaceMethod(class UObject*& Object, struct FName& MethodName); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.GetCurrentlyInstantiatedObject (Underlying native function: GetCurrentlyInstantiatedObject 0x6a78ab0)
	static class UObject* GetCurrentlyInstantiatedObject(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.Dereference (Underlying native function: Dereference 0x6a78220)
	static int64_t Dereference(int64_t& Reference); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.CallFunction (Underlying native function: CallFunction 0x6a77110)
	static void CallFunction(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.CallFinalFunctionWithContext (Underlying native function: CallFinalFunctionWithContext 0x52076a0)
	static void CallFinalFunctionWithContext(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.SolarisUtilLibrary.AddPropertyToSubobjectExclusionList (Underlying native function: AddPropertyToSubobjectExclusionList 0x6a7679c)
	static void AddPropertyToSubobjectExclusionList(int64_t& InstancingGraph, int64_t& Property); // (Final | Native | Static | Public)
};

