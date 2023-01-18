// Class /Script/Engine.KismetNodeHelperLibrary
// Size: 0x28
class UKismetNodeHelperLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetNodeHelperLibrary.MarkBit (Underlying native function: MarkBit 0x9e03168)
	static void MarkBit(int& Data, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.HasUnmarkedBit (Underlying native function: HasUnmarkedBit 0x9df7f90)
	static bool HasUnmarkedBit(int& Data, int& NumBits); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.HasMarkedBit (Underlying native function: HasMarkedBit 0x9df7eb4)
	static bool HasMarkedBit(int& Data, int& NumBits); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetValidValue (Underlying native function: GetValidValue 0x2439cb0)
	static unsigned char GetValidValue(class UEnum*& Enum, unsigned char& EnumeratorValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetUnmarkedBit (Underlying native function: GetUnmarkedBit 0x9df6ed8)
	static int GetUnmarkedBit(int& Data, int& StartIdx, int& NumBits, bool& bRandom); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetRandomUnmarkedBit (Underlying native function: GetRandomUnmarkedBit 0x9df5244)
	static int GetRandomUnmarkedBit(int& Data, int& StartIdx, int& NumBits); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetFirstUnmarkedBit (Underlying native function: GetFirstUnmarkedBit 0x9df2d0c)
	static int GetFirstUnmarkedBit(int& Data, int& StartIdx, int& NumBits); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorValueFromIndex (Underlying native function: GetEnumeratorValueFromIndex 0x264d0cc)
	static unsigned char GetEnumeratorValueFromIndex(class UEnum*& Enum, unsigned char& EnumeratorIndex); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorUserFriendlyName (Underlying native function: GetEnumeratorUserFriendlyName 0x9df2c34)
	static struct FString GetEnumeratorUserFriendlyName(class UEnum*& Enum, unsigned char& EnumeratorValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetNodeHelperLibrary.GetEnumeratorName (Underlying native function: GetEnumeratorName 0x9df2b70)
	static struct FName GetEnumeratorName(class UEnum*& Enum, unsigned char& EnumeratorValue); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetNodeHelperLibrary.ClearBit (Underlying native function: ClearBit 0x9de3824)
	static void ClearBit(int& Data, int& Index); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.ClearAllBits (Underlying native function: ClearAllBits 0x9de37b0)
	static void ClearAllBits(int& Data); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.KismetNodeHelperLibrary.BitIsMarked (Underlying native function: BitIsMarked 0x9ddafc8)
	static bool BitIsMarked(int& Data, int& Index); // (Final | Native | Static | Public | BlueprintCallable)
};

