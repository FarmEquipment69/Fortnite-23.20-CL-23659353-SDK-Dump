// Class /Script/HmxAudio.MusicalTimespanSequencerComponent
// Size: 0xe8
class UMusicalTimespanSequencerComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x18]; // 0xa0 (0x18) 
	class UMusicClockComponent* mClock; // 0xb8 (0x8)
	unsigned char padding_c0[0x28]; // 0xc0 (0x28)

	/* Functions */

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.StartOnNextDownBeat (Underlying native function: StartOnNextDownBeat 0x545e630)
	void StartOnNextDownBeat(struct TEnumAsByte<EMTSResult>& Result, int& waitMinimumTicks, float& waitMinimumMs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.StartOnNextBeat (Underlying native function: StartOnNextBeat 0x545e4c0)
	void StartOnNextBeat(struct TEnumAsByte<EMTSResult>& Result, int& waitMinimumTicks, float& waitMinimumMs); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.SetMusicClock (Underlying native function: SetMusicClock 0x5457a90)
	void SetMusicClock(class UMusicClockComponent*& clock); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.Running (Underlying native function: Running 0x5450f70)
	bool Running(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.OnTriggered (Has no native function)
	void OnTriggered(struct FMusicalTimeSpan& nextTrigger); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.OnSeeked (Has no native function)
	void OnSeeked(struct FMusicalTimeSpan& nextTrigger); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.OnCanceled (Has no native function)
	void OnCanceled(); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.GetProgress (Underlying native function: GetProgress 0x544ad40)
	float GetProgress(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent.Cancel (Underlying native function: Cancel 0x54450b0)
	bool Cancel(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.MusicalTimespanSequencerComponent._ClockIsDying (Underlying native function: _ClockIsDying 0x545ed90)
	void ClockIsDying(); // (Final | Native | Public)
};

