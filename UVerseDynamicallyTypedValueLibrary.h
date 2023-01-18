// Class /Script/Solaris.VerseDynamicallyTypedValueLibrary
// Size: 0x28
class UVerseDynamicallyTypedValueLibrary : public UObject
{

	/* Functions */

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.NotEqual (Underlying native function: NotEqual 0x6a7bf88)
	static void NotEqual(int& Left, int& Right); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeTuple (Underlying native function: MakeRuntimeTypeTuple 0x6a7addc)
	static void MakeRuntimeTypeTuple(struct TArray<int>& ValueType); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeStruct (Underlying native function: MakeRuntimeTypeStruct 0x5207790)
	static void MakeRuntimeTypeStruct(class UStruct*& Struct); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeString (Underlying native function: MakeRuntimeTypeString 0x6a7adb8)
	static void MakeRuntimeTypeString(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeOption (Underlying native function: MakeRuntimeTypeOption 0x6a7ad38)
	static void MakeRuntimeTypeOption(int& ValueType); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeObject (Underlying native function: MakeRuntimeTypeObject 0x6a7ad14)
	static void MakeRuntimeTypeObject(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeMap (Underlying native function: MakeRuntimeTypeMap 0x6a7ac50)
	static void MakeRuntimeTypeMap(int& KeyType, int& ValueType); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeLogic (Underlying native function: MakeRuntimeTypeLogic 0x6a7ac2c)
	static void MakeRuntimeTypeLogic(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeInt64 (Underlying native function: MakeRuntimeTypeInt64 0x6a7ac08)
	static void MakeRuntimeTypeInt64(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFunction (Underlying native function: MakeRuntimeTypeFunction 0x6a7abe4)
	static void MakeRuntimeTypeFunction(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeFloat (Underlying native function: MakeRuntimeTypeFloat 0x6a7abc0)
	static void MakeRuntimeTypeFloat(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeEnum (Underlying native function: MakeRuntimeTypeEnum 0x6a7ab28)
	static void MakeRuntimeTypeEnum(struct FName& Name); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeDynamic (Underlying native function: MakeRuntimeTypeDynamic 0x6a7ab04)
	static void MakeRuntimeTypeDynamic(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeClass (Underlying native function: MakeRuntimeTypeClass 0x6a7aae0)
	static void MakeRuntimeTypeClass(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar8 (Underlying native function: MakeRuntimeTypeChar8 0x6a7aabc)
	static void MakeRuntimeTypeChar8(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeChar32 (Underlying native function: MakeRuntimeTypeChar32 0x6a7aa98)
	static void MakeRuntimeTypeChar32(); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.MakeRuntimeTypeArray (Underlying native function: MakeRuntimeTypeArray 0x6a7aa18)
	static void MakeRuntimeTypeArray(int& ElementType); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.Equal (Underlying native function: Equal 0x6a78624)
	static void Equal(int& Left, int& Right); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertToDynamicallyTypedValue (Underlying native function: ConvertToDynamicallyTypedValue 0x6a78160)
	static void ConvertToDynamicallyTypedValue(int& RuntimeType, int& Value); // (Final | Native | Static | Public)

	// Function /Script/Solaris.VerseDynamicallyTypedValueLibrary.ConvertFromDynamicallyTypedValue (Underlying native function: ConvertFromDynamicallyTypedValue 0x6a78058)
	static void ConvertFromDynamicallyTypedValue(int& RuntimeType, int& Value); // (Final | Native | Static | Public)
};

