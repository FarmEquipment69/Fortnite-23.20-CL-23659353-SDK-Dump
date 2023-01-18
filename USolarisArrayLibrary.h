// Class /Script/Solaris.SolarisArrayLibrary
// Size: 0x28
class USolarisArrayLibrary : public UObject
{

	/* Functions */

	// Function /Script/Solaris.SolarisArrayLibrary.UnsafeCall (Underlying native function: UnsafeCall 0x6a7df88)
	static void UnsafeCall(struct TArray<struct FGenericElementType>& Array, int64_t& Index); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.RefCall (Underlying native function: RefCall 0x6a7c894)
	static void RefCall(struct TArray<struct FGenericElementType>& Array, int64_t& Index); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Move (Underlying native function: Move 0x6a7b028)
	static void Move(struct TArray<struct FGenericElementType>& Target, struct TArray<struct FGenericElementType>& Source); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Length (Underlying native function: Length 0x6a79fb4)
	static int64_t Length(struct TArray<struct FGenericElementType>& Array); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Empty (Underlying native function: Empty 0x6a78598)
	static void Empty(struct TArray<struct FGenericElementType>& Array); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.ConcatEquals (Underlying native function: ConcatEquals 0x6a77df0)
	static struct TArray<struct FGenericElementType> ConcatEquals(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Concat (Underlying native function: Concat 0x6a775cc)
	static struct TArray<struct FGenericElementType> Concat(struct TArray<struct FGenericElementType>& Lhs, struct TArray<struct FGenericElementType>& Rhs); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Call (Underlying native function: Call 0x6a76864)
	static void Call(struct TArray<struct FGenericElementType>& Array, int64_t& Index); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisArrayLibrary.Add (Underlying native function: Add 0x6a75c6c)
	static int64_t Add(struct TArray<struct FGenericElementType>& Array, struct FGenericElementType& newitem); // (Final | Native | Static | Public | HasOutParms)
};

