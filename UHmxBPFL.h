// Class /Script/HmxUtl.HmxBPFL
// Size: 0x28
class UHmxBPFL : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxUtl.HmxBPFL.Modulo (Underlying native function: Modulo 0x5583260)
	static int Modulo(int& Value, int& Mod); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxUtl.HmxBPFL.LoopIncrement (Underlying native function: LoopIncrement 0x5583120)
	static int LoopIncrement(int& Value, int& min, int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxUtl.HmxBPFL.LoopDecrement (Underlying native function: LoopDecrement 0x5582fe0)
	static int LoopDecrement(int& Value, int& min, int& max); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxUtl.HmxBPFL.IsNone (Underlying native function: IsNone 0x5582f30)
	static bool IsNone(struct FName& Name); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

