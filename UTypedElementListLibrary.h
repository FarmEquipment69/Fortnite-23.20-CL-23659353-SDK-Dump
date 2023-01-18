// Class /Script/TypedElementFramework.TypedElementListLibrary
// Size: 0x28
class UTypedElementListLibrary : public UObject
{

	/* Functions */

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Shrink (Underlying native function: Shrink 0x9923f94)
	static void Shrink(struct FScriptTypedElementListProxy& ElementList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reset (Underlying native function: Reset 0x9923d6c)
	static void Reset(struct FScriptTypedElementListProxy& ElementList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Reserve (Underlying native function: Reserve 0x9923c60)
	static void Reserve(struct FScriptTypedElementListProxy& ElementList, int& Size); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Remove (Underlying native function: Remove 0x9923b1c)
	static bool Remove(struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle*& ElementHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Num (Underlying native function: Num 0x9923920)
	static int Num(struct FScriptTypedElementListProxy& ElementList); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.IsValidIndex (Underlying native function: IsValidIndex 0x9923660)
	static bool IsValidIndex(struct FScriptTypedElementListProxy& ElementList, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElementsOfType (Underlying native function: HasElementsOfType 0x9923410)
	static bool HasElementsOfType(struct FScriptTypedElementListProxy& ElementList, struct FName& ElementTypeName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.HasElements (Underlying native function: HasElements 0x99232fc)
	static bool HasElements(struct FScriptTypedElementListProxy& ElementList, class UClass*& BaseInterfaceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementInterface (Underlying native function: GetElementInterface 0x9922ef4)
	static class UObject* GetElementInterface(struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle*& ElementHandle, class UClass*& BaseInterfaceType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandles (Underlying native function: GetElementHandles 0x9922dc8)
	static struct TArray<struct FScriptTypedElementHandle*> GetElementHandles(struct FScriptTypedElementListProxy& ElementList, class UClass*& BaseInterfaceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.GetElementHandleAt (Underlying native function: GetElementHandleAt 0x9922c9c)
	static struct FScriptTypedElementHandle* GetElementHandleAt(struct FScriptTypedElementListProxy& ElementList, int& Index); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Empty (Underlying native function: Empty 0x992296c)
	static void Empty(struct FScriptTypedElementListProxy& ElementList, int& Slack); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.CreateScriptElementList (Underlying native function: CreateScriptElementList 0x9922858)
	static struct FScriptTypedElementListProxy CreateScriptElementList(class UTypedElementRegistry*& Registry); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElementsOfType (Underlying native function: CountElementsOfType 0x99226c0)
	static int CountElementsOfType(struct FScriptTypedElementListProxy& ElementList, struct FName& ElementTypeName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.CountElements (Underlying native function: CountElements 0x9922520)
	static int CountElements(struct FScriptTypedElementListProxy& ElementList, class UClass*& BaseInterfaceType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Contains (Underlying native function: Contains 0x99223dc)
	static bool Contains(struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle*& ElementHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Clone (Underlying native function: Clone 0x99222f4)
	static struct FScriptTypedElementListProxy Clone(struct FScriptTypedElementListProxy& ElementList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.AppendList (Underlying native function: AppendList 0x992218c)
	static void AppendList(struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementListProxy& OtherElementList); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Append (Underlying native function: Append 0x9921fc4)
	static void Append(struct FScriptTypedElementListProxy& ElementList, struct TArray<struct FScriptTypedElementHandle*>& ElementHandles); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TypedElementFramework.TypedElementListLibrary.Add (Underlying native function: Add 0x9921e80)
	static bool Add(struct FScriptTypedElementListProxy& ElementList, struct FScriptTypedElementHandle*& ElementHandle); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

