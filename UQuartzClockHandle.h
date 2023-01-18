// Class /Script/AudioMixer.QuartzClockHandle
// Size: 0x1e8
class UQuartzClockHandle : public UObject
{
	unsigned char unreflected_1e8[0x1e8]; 

	/* Functions */

	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromTimeDivision (Underlying native function: UnsubscribeFromTimeDivision 0x9b544dc)
	void UnsubscribeFromTimeDivision(class UObject*& WorldContextObject, enum EQuartzCommandQuantization& InQuantizationBoundary, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.UnsubscribeFromAllTimeDivisions (Underlying native function: UnsubscribeFromAllTimeDivisions 0x9b54410)
	void UnsubscribeFromAllTimeDivisions(class UObject*& WorldContextObject, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToQuantizationEvent (Underlying native function: SubscribeToQuantizationEvent 0x9b54018)
	void SubscribeToQuantizationEvent(class UObject*& WorldContextObject, enum EQuartzCommandQuantization& InQuantizationBoundary, struct FDelegate& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SubscribeToAllQuantizationEvents (Underlying native function: SubscribeToAllQuantizationEvents 0x9b53ee8)
	void SubscribeToAllQuantizationEvents(class UObject*& WorldContextObject, struct FDelegate& OnQuantizationEvent, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.StopClock (Underlying native function: StopClock 0x9b53a7c)
	void StopClock(class UObject*& WorldContextObject, bool& CancelPendingEvents, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.StartOtherClock (Underlying native function: StartOtherClock 0x9b53624)
	void StartOtherClock(class UObject*& WorldContextObject, struct FName& OtherClockName, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.StartClock (Underlying native function: StartClock 0x9b53524)
	void StartClock(class UObject*& WorldContextObject, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SetTicksPerSecond (Underlying native function: SetTicksPerSecond 0x9b5301c)
	void SetTicksPerSecond(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float& TicksPerSecond); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SetThirtySecondNotesPerMinute (Underlying native function: SetThirtySecondNotesPerMinute 0x9b52e14)
	void SetThirtySecondNotesPerMinute(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float& ThirtySecondsNotesPerMinute); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SetSecondsPerTick (Underlying native function: SetSecondsPerTick 0x9b5250c)
	void SetSecondsPerTick(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float& SecondsPerTick); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SetMillisecondsPerTick (Underlying native function: SetMillisecondsPerTick 0x9b52280)
	void SetMillisecondsPerTick(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float& MillisecondsPerTick); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.SetBeatsPerMinute (Underlying native function: SetBeatsPerMinute 0x9b51ca4)
	void SetBeatsPerMinute(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& QuantizationBoundary, struct FDelegate& Delegate, class UQuartzClockHandle*& ClockHandle, float& BeatsPerMinute); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.ResumeClock (Underlying native function: ResumeClock 0x9b51a1c)
	void ResumeClock(class UObject*& WorldContextObject, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransportQuantized (Underlying native function: ResetTransportQuantized 0x9b51868)
	void ResetTransportQuantized(class UObject*& WorldContextObject, struct FQuartzQuantizationBoundary& InQuantizationBoundary, struct FDelegate& InDelegate, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.ResetTransport (Underlying native function: ResetTransport 0x9b51780)
	void ResetTransport(class UObject*& WorldContextObject, struct FDelegate& InDelegate); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.PauseClock (Underlying native function: PauseClock 0x9b50d20)
	void PauseClock(class UObject*& WorldContextObject, class UQuartzClockHandle*& ClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.IsClockRunning (Underlying native function: IsClockRunning 0x9b506f0)
	bool IsClockRunning(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.GetTicksPerSecond (Underlying native function: GetTicksPerSecond 0x9b50564)
	float GetTicksPerSecond(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMixer.QuartzClockHandle.GetThirtySecondNotesPerMinute (Underlying native function: GetThirtySecondNotesPerMinute 0x9b504d8)
	float GetThirtySecondNotesPerMinute(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMixer.QuartzClockHandle.GetSecondsPerTick (Underlying native function: GetSecondsPerTick 0x9b5044c)
	float GetSecondsPerTick(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMixer.QuartzClockHandle.GetMillisecondsPerTick (Underlying native function: GetMillisecondsPerTick 0x9b4ff58)
	float GetMillisecondsPerTick(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioMixer.QuartzClockHandle.GetEstimatedRunTime (Underlying native function: GetEstimatedRunTime 0x9b4fb3c)
	float GetEstimatedRunTime(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.GetDurationOfQuantizationTypeInSeconds (Underlying native function: GetDurationOfQuantizationTypeInSeconds 0x9b4f7f4)
	float GetDurationOfQuantizationTypeInSeconds(class UObject*& WorldContextObject, enum EQuartzCommandQuantization& QuantizationType, float& Multiplier); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.GetCurrentTimestamp (Underlying native function: GetCurrentTimestamp 0x9b4f75c)
	struct FQuartzTransportTimeStamp GetCurrentTimestamp(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzClockHandle.GetBeatsPerMinute (Underlying native function: GetBeatsPerMinute 0x9b4f4f0)
	float GetBeatsPerMinute(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

