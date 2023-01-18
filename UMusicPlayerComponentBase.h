// Class /Script/HmxAudio.MusicPlayerComponentBase
// Size: 0x4b8
class UMusicPlayerComponentBase : public UHarmonixPlayerComponentBase
{
	unsigned char unreflected_1e0[0x8]; // 0x1e0 (0x8) 
	bool Loop; // 0x1e8 (0x1)
	unsigned char unreflected_1e9[0x3]; // 0x1e9 (0x3) 
	struct FMusicClipSpeedConfig speedConfig; // 0x1ec (0xc)
	int transpositionSemitones; // 0x1f8 (0x4)
	struct FMusicClipSyncConfig syncConfig; // 0x1fc (0x18)
	unsigned char unreflected_214[0x4]; // 0x214 (0x4) 
	struct FMulticastInlineDelegate MusicLoopedEvent; // 0x218 (0x10)
	unsigned char unreflected_228[0x8]; // 0x228 (0x8) 
	class UMusicAssetBase* LoadedMusicAsset; // 0x230 (0x8)
	unsigned char unreflected_238[0x10]; // 0x238 (0x10) 
	class UMusicHandle* MusicHandle; // 0x248 (0x8)
	unsigned char unreflected_250[0x250]; // 0x250 (0x250) 
	struct TArray<class UMusicalEventRouterComponentBase*> eventRouters; // 0x4a0 (0x10)
	float CurrentTempo; // 0x4b0 (0x4)
	struct FName CurrentSection; // 0x4b4 (0x4)

	/* Functions */

	// Function /Script/HmxAudio.MusicPlayerComponentBase.UnregisterMusicalEventRouter (Underlying native function: UnregisterMusicalEventRouter 0x545eae0)
	void UnregisterMusicalEventRouter(class UMusicalEventRouterComponentBase*& router); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetTransposition (Underlying native function: SetTransposition 0x545cd90)
	void SetTransposition(int& Semitones); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetTrackMute (Underlying native function: SetTrackMute 0x545cb70)
	void SetTrackMute(struct FTrackChannelSpecifier& trackInfo, bool& On); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetTrackGain (Underlying native function: SetTrackGain 0x545c8d0)
	void SetTrackGain(struct FString& trackName, float& trackGain, float& Seconds); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetTrackDb (Underlying native function: SetTrackDb 0x545c600)
	void SetTrackDb(struct FString& trackName, float& db, float& Seconds); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetSpeedToAchieveTempo (Underlying native function: SetSpeedToAchieveTempo 0x545b090)
	void SetSpeedToAchieveTempo(float& BPM, bool& maintainPitch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetSpeed (Underlying native function: SetSpeed 0x545aee0)
	void SetSpeed(float& Speed); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetMaintainPitch (Underlying native function: SetMaintainPitch 0x5457330)
	void SetMaintainPitch(bool& maintainPitch); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetLoopViaStartEndTick (Underlying native function: SetLoopViaStartEndTick 0x5457190)
	bool SetLoopViaStartEndTick(int& loopStartTick, int& loopEndTick, int& Count); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetLoopViaStartEndBar (Underlying native function: SetLoopViaStartEndBar 0x5457050)
	bool SetLoopViaStartEndBar(int& loopStartBar, int& loopEndBar, int& Count); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SetAllTracksMute (Underlying native function: SetAllTracksMute 0x5451530)
	void SetAllTracksMute(bool& On); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.SeekToTick (Underlying native function: SeekToTick 0x5451470)
	void SeekToTick(int& seekTick); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.Seek (Underlying native function: Seek 0x54511b0)
	void Seek(float& positionMs); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.RegisterMusicalEventRouter (Underlying native function: RegisterMusicalEventRouter 0x5450b10)
	void RegisterMusicalEventRouter(class UMusicalEventRouterComponentBase*& router); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetTick (Underlying native function: GetTick 0x544ba50)
	int GetTick(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetTempoAtTick (Underlying native function: GetTempoAtTick 0x544b840)
	float GetTempoAtTick(int& atTick); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetSpeed (Underlying native function: GetSpeed 0x544b6f0)
	float GetSpeed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetSongPos (Underlying native function: GetSongPos 0x544b540)
	struct FSongPos GetSongPos(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetMusicHandle (Underlying native function: GetMusicHandle 0x544a220)
	class UMusicHandle* GetMusicHandle(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetMeasureSpan (Underlying native function: GetMeasureSpan 0x5449fa0)
	float GetMeasureSpan(enum EMusicTimebase& inTimebas, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetLengthInTicks (Underlying native function: GetLengthInTicks 0x5449ae0)
	int GetLengthInTicks(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetCurrentTempo (Underlying native function: GetCurrentTempo 0x5449220)
	float GetCurrentTempo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetCurrentSection (Underlying native function: GetCurrentSection 0x5449110)
	struct FName GetCurrentSection(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetBeatSpan (Underlying native function: GetBeatSpan 0x5448c50)
	float GetBeatSpan(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetBeat (Underlying native function: GetBeat 0x5448b20)
	int GetBeat(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.GetBar (Underlying native function: GetBar 0x54489c0)
	int GetBar(enum EMusicTimebase& inTimeBase, enum EMusicTimeStart& InTimeStart); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.FindTextEvent (Underlying native function: FindTextEvent 0x5448310)
	int FindTextEvent(struct FString& MarkerText, struct FString& midiTrackName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.CalculateSongPosAtTick (Underlying native function: CalculateSongPosAtTick 0x5444f60)
	struct FSongPos CalculateSongPosAtTick(float& inTick); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicPlayerComponentBase.CalculateSongPosAtMs (Underlying native function: CalculateSongPosAtMs 0x5444d80)
	struct FSongPos CalculateSongPosAtMs(float& ms); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

