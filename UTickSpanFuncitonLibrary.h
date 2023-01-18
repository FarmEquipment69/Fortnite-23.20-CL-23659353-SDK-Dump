// Class /Script/HmxAudio.TickSpanFuncitonLibrary
// Size: 0x28
class UTickSpanFuncitonLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.MakeTickSpanFromBeats (Underlying native function: MakeTickSpanFromBeats 0x544d3c0)
	static struct FTickSpan* MakeTickSpanFromBeats(float& Offset, float& Length); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.MakeTickSpan (Underlying native function: MakeTickSpan 0x544d2d0)
	static struct FTickSpan* MakeTickSpan(int& Offset, int& Length); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetOffsetTick (Underlying native function: GetOffsetTick 0x544a7b0)
	static int GetOffsetTick(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetOffsetBeat (Underlying native function: GetOffsetBeat 0x544a6f0)
	static float GetOffsetBeat(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetLengthTicks (Underlying native function: GetLengthTicks 0x5449c20)
	static int GetLengthTicks(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetLengthBeats (Underlying native function: GetLengthBeats 0x5449a40)
	static float GetLengthBeats(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetEndTick (Underlying native function: GetEndTick 0x5449570)
	static int GetEndTick(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.GetEndBeat (Underlying native function: GetEndBeat 0x5449450)
	static float GetEndBeat(struct FTickSpan*& Target); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.ClampTickSpanByRef (Underlying native function: ClampTickSpanByRef 0x5445680)
	static void ClampTickSpanByRef(struct FTickSpan*& Target, struct FTickSpan*& clampSpan, struct FTickSpan*& Result); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.TickSpanFuncitonLibrary.ClampTickSpan (Underlying native function: ClampTickSpan 0x5445590)
	static struct FTickSpan* ClampTickSpan(struct FTickSpan*& Target, struct FTickSpan*& clampSpan); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

