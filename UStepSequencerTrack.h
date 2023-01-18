// Class /Script/HmxAudio.StepSequencerTrack
// Size: 0xe0
class UStepSequencerTrack : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TWeakObjectPtr<class USynthesizerPatchAssetBase> SynthPatch; // 0x30 (0x28)
	class UMidiMusicSequence* MidiMusicSequence; // 0x58 (0x8)
	int TrackIndex; // 0x60 (0x4)
	unsigned char unreflected_64[0x14]; // 0x64 (0x14) 
	struct FMulticastInlineDelegate EventOnNumGridSquaresChanged; // 0x78 (0x10)
	struct FMulticastInlineDelegate EventOnGridSquareBeatsChanged; // 0x88 (0x10)
	struct FMulticastInlineDelegate EventOnCurrentPageChanged; // 0x98 (0x10)
	struct FMulticastInlineDelegate EventOnAnyGridsquareStateChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate EventOnGridsquareStateChanged; // 0xb8 (0x10)
	unsigned char padding_c8[0x18]; // 0xc8 (0x18)

	/* Functions */

	// Function /Script/HmxAudio.StepSequencerTrack.ToggleGridSquareState (Underlying native function: ToggleGridSquareState 0x545e9f0)
	void ToggleGridSquareState(int& gridSquareIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.TicksPerSquare (Underlying native function: TicksPerSquare 0x545e9b0)
	int TicksPerSquare(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.SetNumPages (Underlying native function: SetNumPages 0x5458440)
	void SetNumPages(int& inNumPages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetMusicItemsInTrack (Underlying native function: SetMusicItemsInTrack 0x5457ed0)
	void SetMusicItemsInTrack(struct TArray<struct TScriptInterface<class IMidiMusicInterface>>& musicItems); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetMusicItemForWholeTrack (Underlying native function: SetMusicItemForWholeTrack 0x5457e20)
	void SetMusicItemForWholeTrack(struct TScriptInterface<class IMidiMusicInterface>& MusicItem); // (Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetMusicItemAtGridSquare (Underlying native function: SetMusicItemAtGridSquare 0x5457d10)
	void SetMusicItemAtGridSquare(int& gridSquareIndex, struct TScriptInterface<class IMidiMusicInterface>& MusicItem); // (Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetGridSquareStateOnPage (Underlying native function: SetGridSquareStateOnPage 0x5455f70)
	void SetGridSquareStateOnPage(int& gridSquareIndex, int& PageIndex, bool& isOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetGridSquareState (Underlying native function: SetGridSquareState 0x5455e70)
	void SetGridSquareState(int& gridSquareIndex, bool& isOn); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetGridSquareBeats (Underlying native function: SetGridSquareBeats 0x5455dd0)
	void SetGridSquareBeats(float& inGridSquareBeats); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.SetCurrentPage (Underlying native function: SetCurrentPage 0x5452b20)
	void SetCurrentPage(int& Page); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.PopGridSquares (Underlying native function: PopGridSquares 0x5450820)
	void PopGridSquares(int& popSquares); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.OnTimeSlotTimeSpanChanged (Underlying native function: OnTimeSlotTimeSpanChanged 0x5450500)
	void OnTimeSlotTimeSpanChanged(class UMidiMusicTimeSlot*& timeSlot); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerTrack.OnTimeSlotMusicItemChanged (Underlying native function: OnTimeSlotMusicItemChanged 0x5450460)
	void OnTimeSlotMusicItemChanged(class UMidiMusicTimeSlot*& timeSlot); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerTrack.OnTimeSlotEnabledChanged (Underlying native function: OnTimeSlotEnabledChanged 0x54503c0)
	void OnTimeSlotEnabledChanged(class UMidiMusicTimeSlot*& timeSlot); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerTrack.InitGridSquares (Underlying native function: InitGridSquares 0x544c610)
	void InitGridSquares(int& inGridSquareNum, int& inMaxGridSquares, float& inGridSquareBeats); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerTrack.GetNumGridSquares (Underlying native function: GetNumGridSquares 0x544a4f0)
	int GetNumGridSquares(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.GetGridSquareState (Underlying native function: GetGridSquareState 0x5449730)
	bool GetGridSquareState(int& gridSquareIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.GetGridSquareBeats (Underlying native function: GetGridSquareBeats 0x5449700)
	int GetGridSquareBeats(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.GetEndTick (Underlying native function: GetEndTick 0x5449520)
	int GetEndTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.FindGridSquareAtTick (Underlying native function: FindGridSquareAtTick 0x5447fe0)
	class UMidiMusicTimeSlot* FindGridSquareAtTick(int& Tick); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.FindGridSquareAtIndex (Underlying native function: FindGridSquareAtIndex 0x5447f30)
	class UMidiMusicTimeSlot* FindGridSquareAtIndex(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerTrack.AppendGridSquares (Underlying native function: AppendGridSquares 0x54447e0)
	void AppendGridSquares(int& appendSquares, bool& copyStates, bool& copyMusicItems); // (Final | Native | Public | BlueprintCallable)
};

