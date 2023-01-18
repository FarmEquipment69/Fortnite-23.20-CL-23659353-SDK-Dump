// Class /Script/HmxAudio.MusicHandle
// Size: 0x48
class UMusicHandle : public UHarmonixHandle
{
	unsigned char unreflected_48[0x48]; 

	/* Functions */

	// Function /Script/HmxAudio.MusicHandle.StopWithReleases (Underlying native function: StopWithReleases 0x545e8c0)
	void StopWithReleases(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetTrackMute (Underlying native function: SetTrackMute 0x545ca50)
	void SetTrackMute(int& Tick, bool& muted); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetTrackGain (Underlying native function: SetTrackGain 0x545c780)
	void SetTrackGain(int& track, float& Gain, float& sec); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetTrackDb (Underlying native function: SetTrackDb 0x545c4b0)
	void SetTrackDb(int& track, float& db, float& sec); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetTimeAuthority (Underlying native function: SetTimeAuthority 0x545bc20)
	bool SetTimeAuthority(class UMusicHandle*& authority, struct FMusicSyncConfig& syncConfig); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetSpeedToAchieveTempo (Underlying native function: SetSpeedToAchieveTempo 0x545af90)
	void SetSpeedToAchieveTempo(float& BPM, bool& maintainPitch); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetRawTransposition (Underlying native function: SetRawTransposition 0x5459620)
	void SetRawTransposition(int& Semitones); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetFutureUnmuteByTick (Underlying native function: SetFutureUnmuteByTick 0x5455910)
	void SetFutureUnmuteByTick(int& Tick, bool& useTimeAuthoritysTick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SetFutureUnmute (Underlying native function: SetFutureUnmute 0x5455850)
	void SetFutureUnmute(enum FMusicUnmutePoint& unmutePoint); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SeekToSongTick (Underlying native function: SeekToSongTick 0x54513b0)
	void SeekToSongTick(int& Tick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.SeekToContentTick (Underlying native function: SeekToContentTick 0x5451250)
	void SeekToContentTick(int& Tick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.LoopWithCount (Underlying native function: LoopWithCount 0x544d060)
	bool LoopWithCount(int& fromTick, int& toTick, int& numTimes); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.LoopSection (Underlying native function: LoopSection 0x544cf80)
	bool LoopSection(int& SectionIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.Loop (Underlying native function: Loop 0x544ce50)
	bool Loop(int& fromTick, int& toTick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTrackNames (Underlying native function: GetTrackNames 0x544c130)
	struct TArray<struct FString> GetTrackNames(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTrackName (Underlying native function: GetTrackName 0x544c060)
	struct FString GetTrackName(int& TrackIndex); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTrackMute (Underlying native function: GetTrackMute 0x544bf90)
	bool GetTrackMute(int& track); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTrackGain (Underlying native function: GetTrackGain 0x544bee0)
	float GetTrackGain(int& track); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTrackDb (Underlying native function: GetTrackDb 0x544be30)
	float GetTrackDb(int& track); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetTick (Underlying native function: GetTick 0x544b920)
	int GetTick(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetSoundId (Underlying native function: GetSoundId 0x544b670)
	struct FString GetSoundId(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicHandle.GetSongPos (Underlying native function: GetSongPos 0x544b400)
	struct FSongPos GetSongPos(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetSectionNames (Underlying native function: GetSectionNames 0x544b350)
	struct TArray<struct FString> GetSectionNames(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetSectionNameAtTick (Underlying native function: GetSectionNameAtTick 0x544b280)
	struct FString GetSectionNameAtTick(int& Tick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetSectionName (Underlying native function: GetSectionName 0x544b170)
	struct FString GetSectionName(int& SectionIndex, enum EMusicFindResults& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetSecsAndTicksUntilPlay (Underlying native function: GetSecsAndTicksUntilPlay 0x544afd0)
	bool GetSecsAndTicksUntilPlay(float& secs, int& ticks); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetRawTransposition (Underlying native function: GetRawTransposition 0x544ae10)
	int GetRawTransposition(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetNumTracks (Underlying native function: GetNumTracks 0x544a5c0)
	int GetNumTracks(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetNumSections (Underlying native function: GetNumSections 0x544a530)
	int GetNumSections(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetMs (Underlying native function: GetMs 0x544a0e0)
	float GetMs(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.GetCurrentSectionName (Underlying native function: GetCurrentSectionName 0x5449150)
	struct FString GetCurrentSectionName(enum EMusicTimebase& inTimeBase); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.FindTrackIndex (Underlying native function: FindTrackIndex 0x54486d0)
	int FindTrackIndex(struct FString& trackName, enum EMusicFindResults& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.FindSectionIndex (Underlying native function: FindSectionIndex 0x54481d0)
	int FindSectionIndex(struct FString& Name, enum EMusicFindResults& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.FindLowLevelMidiTrackIndex (Underlying native function: FindLowLevelMidiTrackIndex 0x5448090)
	int FindLowLevelMidiTrackIndex(struct FString& trackName, enum EMusicFindResults& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.ClearTimeAuthority (Underlying native function: ClearTimeAuthority 0x54458e0)
	void ClearTimeAuthority(bool& maintainLastTempoSpeed); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicHandle.ClearLoop (Underlying native function: ClearLoop 0x54457c0)
	void ClearLoop(bool& ignoreLookAhead); // (Final | Native | Protected | BlueprintCallable)
};

