// Class /Script/StructUtils.StructUtilsFunctionLibrary
// Size: 0x28
class UStructUtilsFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue (Underlying native function: SetInstancedStructValue 0x705114c)
	static void SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.Reset (Underlying native function: Reset 0x7051010)
	static void Reset(struct FInstancedStruct& InstancedStruct, class UScriptStruct*& StructType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct (Underlying native function: NotEqual_InstancedStruct 0x7050f08)
	static bool NotEqualInstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct (Underlying native function: MakeInstancedStruct 0x7050de8)
	static struct FInstancedStruct MakeInstancedStruct(int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct (Underlying native function: IsValid_InstancedStruct 0x7050d44)
	static bool IsValidInstancedStruct(struct FInstancedStruct& InstancedStruct); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid (Underlying native function: IsInstancedStructValid 0x7050ca0)
	static enum EStructUtilsResult IsInstancedStructValid(struct FInstancedStruct& InstancedStruct); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue (Underlying native function: GetInstancedStructValue 0x7050ab8)
	static void GetInstancedStructValue(enum EStructUtilsResult& ExecResult, struct FInstancedStruct& InstancedStruct, int& Value); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct (Underlying native function: EqualEqual_InstancedStruct 0x70509b0)
	static bool EqualEqualInstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

