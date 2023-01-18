// Class /Script/HmxAudio.SynthesizerComponentBase
// Size: 0x248
class USynthesizerComponentBase : public URepeatableMusicalAssetPlayerComponentBase
{
	struct FMidiNote Note; // 0x1f0 (0x1)
	unsigned char unreflected_1f1[0x7]; // 0x1f1 (0x7) 
	struct FString NoteValue; // 0x1f8 (0x10)
	int Velocity; // 0x208 (0x4)
	unsigned char unreflected_20c[0x4]; // 0x20c (0x4) 
	struct TArray<struct FPBSetting*> Pitchbends; // 0x210 (0x10)
	struct TArray<struct FCCSetting> ControllerSettings; // 0x220 (0x10)
	unsigned char unreflected_230[0x8]; // 0x230 (0x8) 
	class UInstrumentHandle* mInstrumentHandle; // 0x238 (0x8)
	unsigned char padding_240[0x8]; // 0x240 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.SynthesizerComponentBase.SetVelocity (Underlying native function: SetVelocity 0x545d5a0)
	void SetVelocity(int& Velocity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.SetPitchBend (Underlying native function: SetPitchBend 0x5459240)
	void SetPitchBend(int& midiChannel, float& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.SetNote (Underlying native function: SetNote 0x54581f0)
	void SetNote(struct FMidiNote& Note); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.SetController (Underlying native function: SetController 0x5452700)
	void SetController(int& midiChannel, enum EMidiControllerID& ControllerId, int& Value); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOnWithOffset (Underlying native function: NoteOnWithOffset 0x544ed00)
	void NoteOnWithOffset(struct FMidiNote& Note, int& Velocity, float& msOffset); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOnQuantized (Underlying native function: NoteOnQuantized 0x544eaa0)
	void NoteOnQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, struct FMidiNote& Note, int& Velocity, int& midiCh); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOnChannelWithOffset (Underlying native function: NoteOnChannelWithOffset 0x544e900)
	void NoteOnChannelWithOffset(struct FMidiNote& Note, int& Velocity, float& msOffset, int& midiCh); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOnChannel (Underlying native function: NoteOnChannel 0x544e7b0)
	void NoteOnChannel(struct FMidiNote& Note, int& Velocity, int& midiCh); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOn (Underlying native function: NoteOn 0x544e6c0)
	void NoteOn(struct FMidiNote& Note, int& Velocity); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOffQuantized (Underlying native function: NoteOffQuantized 0x544e300)
	void NoteOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, struct FMidiNote& Note, int& midiCh); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.NoteOff (Underlying native function: NoteOff 0x544e210)
	void NoteOff(struct FMidiNote& Note, int& midiCh); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.GetSynthHandle (Underlying native function: GetSynthHandle 0x544b820)
	class UInstrumentHandle* GetSynthHandle(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.GetPitchbend (Underlying native function: GetPitchbend 0x544ac30)
	struct FPBSetting* GetPitchbend(int& midiChannel); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.GetController (Underlying native function: GetController 0x5448e90)
	struct FCCSetting GetController(int& midiChannel, enum EMidiControllerID& ControllerId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.AllNotesOffQuantized (Underlying native function: AllNotesOffQuantized 0x5444650)
	void AllNotesOffQuantized(class UQuartzClockHandle*& InClockHandle, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.SynthesizerComponentBase.AllNotesOff (Underlying native function: AllNotesOff 0x5444600)
	void AllNotesOff(); // (Final | Native | Protected | BlueprintCallable)
};

