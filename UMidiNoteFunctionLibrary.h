// Class /Script/HmxAudio.MidiNoteFunctionLibrary
// Size: 0x28
class UMidiNoteFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.MidiNoteToInt (Underlying native function: MidiNoteToInt 0x544d800)
	static int MidiNoteToInt(struct FMidiNote& InMidiNote); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.MidiNoteToByte (Underlying native function: MidiNoteToByte 0x544d770)
	static unsigned char MidiNoteToByte(struct FMidiNote& InMidiNote); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.MakeLiteralMidiNote (Underlying native function: MakeLiteralMidiNote 0x544d210)
	static struct FMidiNote MakeLiteralMidiNote(struct FMidiNote& Value); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.IntToMidiNote (Underlying native function: IntToMidiNote 0x544ca90)
	static struct FMidiNote IntToMidiNote(int& inInt); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMinNoteVelocity (Underlying native function: GetMinNoteVelocity 0x544a0c0)
	static unsigned char GetMinNoteVelocity(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMinNoteNumber (Underlying native function: GetMinNoteNumber 0x544a0c0)
	static unsigned char GetMinNoteNumber(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMinMidiNote (Underlying native function: GetMinMidiNote 0x544a0c0)
	static struct FMidiNote GetMinMidiNote(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMaxNumNotes (Underlying native function: GetMaxNumNotes 0x5449ed0)
	static int GetMaxNumNotes(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMaxNoteVelocity (Underlying native function: GetMaxNoteVelocity 0x5449eb0)
	static unsigned char GetMaxNoteVelocity(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMaxNoteNumber (Underlying native function: GetMaxNoteNumber 0x5449eb0)
	static unsigned char GetMaxNoteNumber(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.GetMaxMidiNote (Underlying native function: GetMaxMidiNote 0x5449eb0)
	static struct FMidiNote GetMaxMidiNote(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MidiNoteFunctionLibrary.ByteToMidiNote (Underlying native function: ByteToMidiNote 0x5444cf0)
	static struct FMidiNote ByteToMidiNote(unsigned char& inByte); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

