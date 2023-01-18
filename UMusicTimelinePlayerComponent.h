// Class /Script/HmxAudio.MusicTimelinePlayerComponent
// Size: 0x4c8
class UMusicTimelinePlayerComponent : public UMusicPlayerComponentBase
{
	float TimelineNativeTempo; // 0x4b8 (0x4)
	int Measures; // 0x4bc (0x4)
	unsigned char padding_4c0[0x8]; // 0x4c0 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.SetTimeSignature (Underlying native function: SetTimeSignature 0x545bd50)
	void SetTimeSignature(int& Numerator, int& Denominator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.SetTimelineNativeTempoImmediate (Underlying native function: SetTimelineNativeTempoImmediate 0x545c410)
	void SetTimelineNativeTempoImmediate(float& newTempo); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.SetTimelineNativeTempo (Underlying native function: SetTimelineNativeTempo 0x545c310)
	void SetTimelineNativeTempo(float& newTempo, bool& ApplyNow); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.SetLengthTimeSigAndNativeTempo (Underlying native function: SetLengthTimeSigAndNativeTempo 0x5456eb0)
	void SetLengthTimeSigAndNativeTempo(int& newMeasures, float& BPM, int& Num, int& denom); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.SetLength (Underlying native function: SetLength 0x5456d60)
	void SetLength(int& newMeasures); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.GetTimeSignature (Underlying native function: GetTimeSignature 0x544bce0)
	void GetTimeSignature(int& Numerator, int& Denominator); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicTimelinePlayerComponent.GetLengthTimeSigAndNativeTempo (Underlying native function: GetLengthTimeSigAndNativeTempo 0x5449cb0)
	void GetLengthTimeSigAndNativeTempo(int& numMeasures, float& BPM, int& Num, int& denom); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

