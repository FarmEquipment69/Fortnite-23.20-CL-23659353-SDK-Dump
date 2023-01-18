// Class /Script/HmxAudio.HmxAudioBlueprintUtil
// Size: 0x28
class UHmxAudioBlueprintUtil : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.SetVideoLatencyMs (Underlying native function: SetVideoLatencyMs 0x545d660)
	static void SetVideoLatencyMs(class UObject*& worldContextObj, float& InVideoLatencyMs); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.SetAudioLatencyMs (Underlying native function: SetAudioLatencyMs 0x5451780)
	static void SetAudioLatencyMs(class UObject*& worldContextObj, float& InAudioLatencyMs); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.GetVideoLatencyMs (Underlying native function: GetVideoLatencyMs 0x544c1e0)
	static float GetVideoLatencyMs(class UObject*& worldContextObj); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.GetNoteOctaveFromNoteNumber (Underlying native function: GetNoteOctaveFromNoteNumber 0x544a440)
	static int GetNoteOctaveFromNoteNumber(int& midiNoteNumber); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.GetNoteNumberFromNoteName (Underlying native function: GetNoteNumberFromNoteName 0x544a370)
	static int GetNoteNumberFromNoteName(struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.GetNoteNameFromNoteNumber (Underlying native function: GetNoteNameFromNoteNumber 0x544a2a0)
	static struct FString GetNoteNameFromNoteNumber(int& midiNoteNumber); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.GetAudioLatencyMs (Underlying native function: GetAudioLatencyMs 0x54488f0)
	static float GetAudioLatencyMs(class UObject*& worldContextObj); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.HmxAudioBlueprintUtil.FrequencyToMidiNote (Underlying native function: FrequencyToMidiNote 0x5448810)
	static float FrequencyToMidiNote(float& freq); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

