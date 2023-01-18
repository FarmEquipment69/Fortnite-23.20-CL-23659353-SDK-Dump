// Class /Script/HmxAudio.InstrumentHandle
// Size: 0x40
class UInstrumentHandle : public UHarmonixHandle
{

	/* Functions */

	// Function /Script/HmxAudio.InstrumentHandle.SetTempo (Underlying native function: SetTempo 0x545ba10)
	void SetTempo(float& BPM); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.SetRawTransposition (Underlying native function: SetRawTransposition 0x5459550)
	void SetRawTransposition(int& Semitones); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.SetPitchBend (Underlying native function: SetPitchBend 0x5459140)
	void SetPitchBend(float& Value, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.SetExtraPitchBend (Underlying native function: SetExtraPitchBend 0x5454570)
	void SetExtraPitchBend(float& Semitones, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.SetController (Underlying native function: SetController 0x54525b0)
	void SetController(int& Controller, float& Value, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.ProcessMidiMessage (Underlying native function: ProcessMidiMessage 0x5450960)
	void ProcessMidiMessage(int& Status, int& data1, int& data2); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.NotesOn (Underlying native function: NotesOn 0x544ef80)
	void NotesOn(struct TArray<int>& midiNoteNumbers, struct TArray<int>& velocities, struct TArray<int>& Channels); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.NotesOff (Underlying native function: NotesOff 0x544ee60)
	void NotesOff(struct TArray<int>& midiNoteNumbers, struct TArray<int>& Channels); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.NoteOn (Underlying native function: NoteOn 0x544e510)
	void NoteOn(int& midiNoteNumber, int& Velocity, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.NoteOff (Underlying native function: NoteOff 0x544e0f0)
	void NoteOff(int& midiNoteNumber, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.NoteIsOn (Underlying native function: NoteIsOn 0x544dfc0)
	bool NoteIsOn(int& midiNoteNumber, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.KillAllVoices (Underlying native function: KillAllVoices 0x544ce00)
	void KillAllVoices(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetVoiceUsage (Underlying native function: GetVoiceUsage 0x544c280)
	void GetVoiceUsage(int& Current, int& peak); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetRawTransposition (Underlying native function: GetRawTransposition 0x544ada0)
	int GetRawTransposition(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetPitchbend (Underlying native function: GetPitchbend 0x544ab80)
	float GetPitchbend(int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetNumVoicesInUse (Underlying native function: GetNumVoicesInUse 0x544a650)
	int GetNumVoicesInUse(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetMaxNumVoices (Underlying native function: GetMaxNumVoices 0x5449f10)
	int GetMaxNumVoices(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.GetController (Underlying native function: GetController 0x5448d90)
	float GetController(int& Controller, int& midiChannel); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.ClearPeakVoiceUsage (Underlying native function: ClearPeakVoiceUsage 0x5445890)
	void ClearPeakVoiceUsage(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.InstrumentHandle.AllNotesOff (Underlying native function: AllNotesOff 0x54445b0)
	void AllNotesOff(); // (Final | Native | Protected | BlueprintCallable)
};

