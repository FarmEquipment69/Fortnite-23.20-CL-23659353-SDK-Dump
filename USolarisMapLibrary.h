// Class /Script/Solaris.SolarisMapLibrary
// Size: 0x28
class USolarisMapLibrary : public UObject
{

	/* Functions */

	// Function /Script/Solaris.SolarisMapLibrary.RefCall (Underlying native function: RefCall 0x6a7c9f8)
	static void RefCall(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.Move (Underlying native function: Move 0x6a7b1a4)
	static void Move(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Dest, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Src); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.Length (Underlying native function: Length 0x6a7a074)
	static int64_t Length(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.InitMap (Underlying native function: InitMap 0x6a7985c)
	static void InitMap(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.GetValueByIndex (Underlying native function: GetValueByIndex 0x6a79144)
	static struct FGenericValueType GetValueByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t& Index); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.GetNextValidIndex (Underlying native function: GetNextValidIndex 0x6a78f60)
	static int64_t GetNextValidIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t& InitialIndex); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.GetKeyByIndex (Underlying native function: GetKeyByIndex 0x6a78dc0)
	static struct FGenericKeyType GetKeyByIndex(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, int64_t& Index); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.Concat (Underlying native function: Concat 0x6a776dc)
	static struct TMap<struct FGenericKeyType, struct FGenericValueType> Concat(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Lhs, struct TMap<struct FGenericKeyType, struct FGenericValueType>& Rhs); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.Call (Underlying native function: Call 0x6a76b64)
	static void Call(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key); // (Final | Native | Static | Public | HasOutParms)

	// Function /Script/Solaris.SolarisMapLibrary.Add (Underlying native function: Add 0x6a75e18)
	static void Add(struct TMap<struct FGenericKeyType, struct FGenericValueType>& Map, struct FGenericKeyType& Key, struct FGenericValueType& Value); // (Final | Native | Static | Public | HasOutParms)
};

