// Class /Script/HmxAudio.MidiMusicTimeSlot
// Size: 0x58
class UMidiMusicTimeSlot : public UObject
{
	struct FTickSpan* TickSpan; // 0x28 (0x8)
	bool Enabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x17]; // 0x31 (0x17) 
	struct TScriptInterface<class IMidiMusicInterface> MidiMusicItem; // 0x48 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetTickSpan (Underlying native function: SetTickSpan 0x545bb50)
	void SetTickSpan(struct FTickSpan*& inTickSpan); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetPages (Underlying native function: SetPages 0x5458c70)
	void SetPages(struct TArray<bool>& inPages); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetOffsetTick (Underlying native function: SetOffsetTick 0x5458670)
	void SetOffsetTick(int& inOffset); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetNumPages (Underlying native function: SetNumPages 0x54583a0)
	void SetNumPages(int& inNumPages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetMidiMusicItem (Underlying native function: SetMidiMusicItem 0x54575d0)
	void SetMidiMusicItem(struct TScriptInterface<class IMidiMusicInterface>& inMidiMusicItem); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetLengthTick (Underlying native function: SetLengthTick 0x5456e10)
	void SetLengthTick(int& inLength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetEnabled (Underlying native function: SetEnabled 0x5454330)
	void SetEnabled(bool& InEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.SetCurrentPage (Underlying native function: SetCurrentPage 0x54529a0)
	void SetCurrentPage(int& inCurrentPage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetTickSpan (Underlying native function: GetTickSpan 0x544bbc0)
	struct FTickSpan* GetTickSpan(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetPages (Underlying native function: GetPages 0x544a840)
	struct TArray<bool> GetPages(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetOffsetTick (Underlying native function: GetOffsetTick 0x544a790)
	int GetOffsetTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetOffsetBeat (Underlying native function: GetOffsetBeat 0x544a6c0)
	int GetOffsetBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetNumPages (Underlying native function: GetNumPages 0x544a510)
	int GetNumPages(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetMidiMusicItem (Underlying native function: GetMidiMusicItem 0x544a0a0)
	struct TScriptInterface<class IMidiMusicInterface> GetMidiMusicItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetLengthTick (Underlying native function: GetLengthTick 0x5449bc0)
	int GetLengthTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetLengthBeats (Underlying native function: GetLengthBeats 0x5449a10)
	int GetLengthBeats(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetIndexInSequence (Underlying native function: GetIndexInSequence 0x54499a0)
	int GetIndexInSequence(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetEndTick (Underlying native function: GetEndTick 0x5449500)
	int GetEndTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetEndBeat (Underlying native function: GetEndBeat 0x5449410)
	int GetEndBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetEnabled (Underlying native function: GetEnabled 0x54493f0)
	bool GetEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MidiMusicTimeSlot.GetCurrentPage (Underlying native function: GetCurrentPage 0x54490d0)
	int GetCurrentPage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

