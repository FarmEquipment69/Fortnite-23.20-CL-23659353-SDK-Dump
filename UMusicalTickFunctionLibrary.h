// Class /Script/HmxAudio.MusicalTickFunctionLibrary
// Size: 0x28
class UMusicalTickFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxAudio.MusicalTickFunctionLibrary.TickToBeat (Underlying native function: TickToBeat 0x545e910)
	static float TickToBeat(float& inTick); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicalTickFunctionLibrary.GetTicksPerBeatInt (Underlying native function: GetTicksPerBeatInt 0x544bc00)
	static int GetTicksPerBeatInt(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicalTickFunctionLibrary.GetTicksPerBeat (Underlying native function: GetTicksPerBeat 0x544bbe0)
	static float GetTicksPerBeat(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicalTickFunctionLibrary.GetBeatsPerTick (Underlying native function: GetBeatsPerTick 0x5448d50)
	static float GetBeatsPerTick(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicalTickFunctionLibrary.BeatToTick (Underlying native function: BeatToTick 0x5444c50)
	static float BeatToTick(float& inBeat); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

