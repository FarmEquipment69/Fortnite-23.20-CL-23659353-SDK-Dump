// Class /Script/HmxAudio.StepSequencerComponent
// Size: 0x178
class UStepSequencerComponent : public UActorComponent
{
	struct FMulticastInlineDelegate EventOnAnyGridSquareInTrackChanged; // 0xa0 (0x10)
	struct FMulticastInlineDelegate EventOnGridSquareInTrackChanged; // 0xb0 (0x10)
	struct FMulticastInlineDelegate EventOnNumTracksChanged; // 0xc0 (0x10)
	struct FMulticastInlineDelegate EventOnNumStepsChanged; // 0xd0 (0x10)
	struct FMulticastInlineDelegate EventOnPageChanged; // 0xe0 (0x10)
	struct FMulticastInlineDelegate EventOnTrackChanged; // 0xf0 (0x10)
	struct FMulticastInlineDelegate EventOnTrackCreated; // 0x100 (0x10)
	struct FMulticastInlineDelegate EventOnTrackRemoved; // 0x110 (0x10)
	struct TArray<class UStepSequencerTrack*> Tracks; // 0x120 (0x10)
	float BPM; // 0x130 (0x4)
	int LengthSteps; // 0x134 (0x4)
	int MaxLengthSteps; // 0x138 (0x4)
	float StepLengthBeats; // 0x13c (0x4)
	unsigned char unreflected_140[0x8]; // 0x140 (0x8) 
	class UMidiMusicPlayerComponent* MyMidiMusicPlayerComponent; // 0x148 (0x8)
	class UMidiMusicAsset* GeneratedMusicAsset; // 0x150 (0x8)
	unsigned char unreflected_158[0x10]; // 0x158 (0x10) 
	struct FSequencerSave SequencerSave; // 0x168 (0x10)

	/* Functions */

	// Function /Script/HmxAudio.StepSequencerComponent.UpdateMidiSongOnMidiMusicPlayer (Underlying native function: UpdateMidiSongOnMidiMusicPlayer 0x545eb80)
	void UpdateMidiSongOnMidiMusicPlayer(class UMidiMusicPlayerComponent*& InMidiMusicPlayerComponent, bool& ForceRefresh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.SetNumberPages (Underlying native function: SetNumberPages 0x54585a0)
	void SetNumberPages(int& inPages); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.SetCurrentPage (Underlying native function: SetCurrentPage 0x5452a40)
	void SetCurrentPage(int& inCurrentPage); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.SetBeatLength (Underlying native function: SetBeatLength 0x54521d0)
	void SetBeatLength(float& BeatLength); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.RemoveTrackAt (Underlying native function: RemoveTrackAt 0x5450dd0)
	bool RemoveTrackAt(int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.RemoveTrack (Underlying native function: RemoveTrack 0x5450cd0)
	bool RemoveTrack(class UStepSequencerTrack*& track); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.RemoveAllTracks (Underlying native function: RemoveAllTracks 0x5450c10)
	void RemoveAllTracks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.PopSteps (Underlying native function: PopSteps 0x54508c0)
	void PopSteps(int& numSteps); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.OnRep_SequencerSave (Underlying native function: OnRep_SequencerSave 0x5450050)
	void OnRepSequencerSave(); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerComponent.OnGridSquareStateChanged (Underlying native function: OnGridSquareStateChanged 0x544f220)
	void OnGridSquareStateChanged(class UStepSequencerTrack*& track, class UMidiMusicTimeSlot*& timeSlot); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerComponent.OnAnyGridSquareStateChanged (Underlying native function: OnAnyGridSquareStateChanged 0x544f160)
	void OnAnyGridSquareStateChanged(class UStepSequencerTrack*& track); // (Final | Native | Private)

	// Function /Script/HmxAudio.StepSequencerComponent.MakeNewMidiSongFromTracks (Underlying native function: MakeNewMidiSongFromTracks 0x544d2a0)
	class UMidiMusicAsset* MakeNewMidiSongFromTracks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.GetNumTracks (Underlying native function: GetNumTracks 0x544a630)
	int GetNumTracks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.GetNumSteps (Underlying native function: GetNumSteps 0x544a5a0)
	int GetNumSteps(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.GetMaxNumSteps (Underlying native function: GetMaxNumSteps 0x5449ef0)
	int GetMaxNumSteps(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.GetLengthTicks (Underlying native function: GetLengthTicks 0x5449be0)
	int GetLengthTicks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.GetCurrentPage (Underlying native function: GetCurrentPage 0x54490f0)
	int GetCurrentPage(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.FindTrackAt (Underlying native function: FindTrackAt 0x5448600)
	class UStepSequencerTrack* FindTrackAt(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.StepSequencerComponent.CreateNewTrack (Underlying native function: CreateNewTrack 0x5447c30)
	class UStepSequencerTrack* CreateNewTrack(struct FTrackArgs& args); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.ApplySaveToTrack (Underlying native function: ApplySaveToTrack 0x5444a90)
	void ApplySaveToTrack(class UStepSequencerTrack*& track); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.StepSequencerComponent.AppendSteps (Underlying native function: AppendSteps 0x5444940)
	void AppendSteps(int& numSteps); // (Final | Native | Public | BlueprintCallable)
};

