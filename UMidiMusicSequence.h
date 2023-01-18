// Class /Script/HmxAudio.MidiMusicSequence
// Size: 0xa8
class UMidiMusicSequence : public UObject
{
	unsigned char unreflected_28[0x70]; // 0x28 (0x70) 
	struct TArray<class UMidiMusicTimeSlot*> TimeSlots; // 0x98 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.MidiMusicSequence.InsertTimeSlot (Underlying native function: InsertTimeSlot 0x544c8b0)
	class UMidiMusicTimeSlot* InsertTimeSlot(struct FMidiMusicTimeSlotArgs& args); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicSequence.GetLastTimeSlot (Underlying native function: GetLastTimeSlot 0x54499d0)
	class UMidiMusicTimeSlot* GetLastTimeSlot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicSequence.FindTimeSlotAtTick (Underlying native function: FindTimeSlotAtTick 0x5448550)
	class UMidiMusicTimeSlot* FindTimeSlotAtTick(int& Tick); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicSequence.FindTimeSlotAt (Underlying native function: FindTimeSlotAt 0x54484a0)
	class UMidiMusicTimeSlot* FindTimeSlotAt(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicSequence.AppendTimeSlot (Underlying native function: AppendTimeSlot 0x54449e0)
	class UMidiMusicTimeSlot* AppendTimeSlot(struct FMidiMusicTimeSlotArgs& args); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

