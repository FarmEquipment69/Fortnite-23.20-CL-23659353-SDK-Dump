// Class /Script/HmxAudio.MusicClockComponent
// Size: 0x170
class UMusicClockComponent : public UActorComponent
{
	float Tempo; // 0xa0 (0x4)
	int TimeSignatureNum; // 0xa4 (0x4)
	int TimeSignatureDenom; // 0xa8 (0x4)
	float CurrentBeatDurationSec; // 0xac (0x4)
	float CurrentMeasureDurationSec; // 0xb0 (0x4)
	bool RunPastMusicEnd; // 0xb4 (0x1)
	enum EMusicTimebase Timebase; // 0xb5 (0x1)
	unsigned char unreflected_b6[0x2]; // 0xb6 (0x2) 
	class UMusicPlayerComponentBase* MusicPlayer; // 0xb8 (0x8)
	struct FMulticastInlineDelegate BeatEvent; // 0xc0 (0x10)
	struct FMulticastInlineDelegate MeasureEvent; // 0xd0 (0x10)
	struct FSongPos mCurrentSongPos; // 0xe0 (0x4c)
	unsigned char unreflected_12c[0x34]; // 0x12c (0x34) 
	class UMusicEmitterComponent* mWatchEmitter; // 0x160 (0x8)
	class UMusicHandle* mMusicHandle; // 0x168 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.MusicClockComponent.WatchEmitter (Underlying native function: WatchEmitter 0x545ec70)
	void WatchEmitter(class UMusicEmitterComponent*& Emitter, bool& Start); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.Stop (Underlying native function: Stop 0x545e820)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.Start (Underlying native function: Start 0x545e4a0)
	void Start(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.SpawnMusicalGridEvent (Underlying native function: SpawnMusicalGridEvent 0x545e1d0)
	class UMusicalGridEvent* SpawnMusicalGridEvent(struct TEnumAsByte<EScheduleResult>& outResult, struct FMusicalTimeSpan& gridConfig, float& holdOffMs, int& holdOffTicks, bool& repeating, class UClass*& EventType, class UObject*& Parent, struct FName& Name); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.SetMusicHandle (Underlying native function: SetMusicHandle 0x5457c40)
	bool SetMusicHandle(class UMusicHandle*& sh); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.Pause (Underlying native function: Pause 0x5450640)
	void Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.MusicalTickDelay (Underlying native function: MusicalTickDelay 0x544dc90)
	static void MusicalTickDelay(class UObject*& WorldContextObject, int& ticks, enum EMusicTimebase& inTimeBase, class UMusicHandle*& MusicHandle, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.MusicalBeatDelay (Underlying native function: MusicalBeatDelay 0x544d940)
	static void MusicalBeatDelay(class UObject*& WorldContextObject, float& beats, enum EMusicTimebase& inTimeBase, class UMusicHandle*& MusicHandle, struct FLatentActionInfo& LatentInfo); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.MsToFractionalTick (Underlying native function: MsToFractionalTick 0x544d890)
	float MsToFractionalTick(float& ms); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.MeasureTimeUntilSpan (Underlying native function: MeasureTimeUntilSpan 0x544d6b0)
	float MeasureTimeUntilSpan(struct FMusicalTimeSpan& span); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.MeasureTimeSinceSpan (Underlying native function: MeasureTimeSinceSpan 0x544d5f0)
	float MeasureTimeSinceSpan(struct FMusicalTimeSpan& span); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.MeasureSpanProgress (Underlying native function: MeasureSpanProgress 0x544d530)
	float MeasureSpanProgress(struct FMusicalTimeSpan& span); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetTicksPerPulse (Underlying native function: GetTicksPerPulse 0x544bc70)
	float GetTicksPerPulse(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetTicksPerMeasure (Underlying native function: GetTicksPerMeasure 0x544bc20)
	float GetTicksPerMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetTickInMeasure (Underlying native function: GetTickInMeasure 0x544bb80)
	int GetTickInMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetTickInBeat (Underlying native function: GetTickInBeat 0x544bb60)
	int GetTickInBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetTick (Underlying native function: GetTick 0x544b900)
	int GetTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetState (Underlying native function: GetState 0x544b730)
	enum EMusicClockState GetState(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetSongPos (Underlying native function: GetSongPos 0x544b3a0)
	struct FSongPos GetSongPos(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetSeconds (Underlying native function: GetSeconds 0x544afb0)
	float GetSeconds(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetMusicHandle (Underlying native function: GetMusicHandle 0x544a200)
	class UMusicHandle* GetMusicHandle(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.GetMeasure (Underlying native function: GetMeasure 0x5449f80)
	int GetMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalTickInMeasure (Underlying native function: GetFractionalTickInMeasure 0x54496b0)
	float GetFractionalTickInMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalTickInBeat (Underlying native function: GetFractionalTickInBeat 0x5449690)
	float GetFractionalTickInBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalTick (Underlying native function: GetFractionalTick 0x5449670)
	float GetFractionalTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalMeasure (Underlying native function: GetFractionalMeasure 0x5449650)
	float GetFractionalMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalBeatInMeasure (Underlying native function: GetFractionalBeatInMeasure 0x5449630)
	float GetFractionalBeatInMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetFractionalBeat (Underlying native function: GetFractionalBeat 0x5449610)
	float GetFractionalBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetDeltaTick (Underlying native function: GetDeltaTick 0x5449320)
	float GetDeltaTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetDeltaMeasure (Underlying native function: GetDeltaMeasure 0x5449300)
	float GetDeltaMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetDeltaBeat (Underlying native function: GetDeltaBeat 0x54492e0)
	float GetDeltaBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurrentTicksPerPulse (Underlying native function: GetCurrentTicksPerPulse 0x54492a0)
	int GetCurrentTicksPerPulse(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurrentTicksPerMeasure (Underlying native function: GetCurrentTicksPerMeasure 0x5449260)
	int GetCurrentTicksPerMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurrentMsPerTick (Underlying native function: GetCurrentMsPerTick 0x54490a0)
	float GetCurrentMsPerTick(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurrentMsPerMeasure (Underlying native function: GetCurrentMsPerMeasure 0x5449070)
	float GetCurrentMsPerMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurrentMsPerBeat (Underlying native function: GetCurrentMsPerBeat 0x5449040)
	float GetCurrentMsPerBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetCurentMsPerPulse (Underlying native function: GetCurentMsPerPulse 0x5448ff0)
	float GetCurentMsPerPulse(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetBeatInMeasure (Underlying native function: GetBeatInMeasure 0x5448c30)
	int GetBeatInMeasure(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/HmxAudio.MusicClockComponent.GetBeat (Underlying native function: GetBeat 0x5448ad0)
	int GetBeat(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/HmxAudio.MusicClockComponent.DyingEvent__DelegateSignature (Has no native function)
	void DyingEventDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/HmxAudio.MusicClockComponent.CreateMusicClock (Underlying native function: CreateMusicClock 0x5447aa0)
	static class UMusicClockComponent* CreateMusicClock(class UObject*& WorldContextObject, class UMusicEmitterComponent*& Emitter, enum EHarmonixHandleValidity& Result, bool& Start); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicClockComponent.Continue (Underlying native function: Continue 0x5445a20)
	void Continue(); // (Final | Native | Public | BlueprintCallable)
};

