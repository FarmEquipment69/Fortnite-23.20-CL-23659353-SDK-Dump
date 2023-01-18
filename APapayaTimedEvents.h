// Class /Script/PapayaTimedEvents.PapayaTimedEvents
// Size: 0x460
class APapayaTimedEvents : public AActor
{
	struct TMap<struct FString, class UMediaPlayer*> MediaPlayerMap; // 0x288 (0x50)
	class UPapayaTimedEventsResponderComponent* MeshEventResponder; // 0x2d8 (0x8)
	struct TArray<class AActor*> TimedEventActorTargets; // 0x2e0 (0x10)
	unsigned char unreflected_2f0[0x8]; // 0x2f0 (0x8) 
	struct FMediaTimeEventArray TimedEventsArray; // 0x2f8 (0x118)
	unsigned char unreflected_410[0x18]; // 0x410 (0x18) 
	struct FString ScreenName; // 0x428 (0x10)
	unsigned char padding_438[0x28]; // 0x438 (0x28)

	/* Functions */

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ShutdownTimedEvents_Native (Underlying native function: ShutdownTimedEvents_Native 0x7513d3c)
	void ShutdownTimedEventsNative(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.SetupTimedEvents_Native (Underlying native function: SetupTimedEvents_Native 0x7513be8)
	void SetupTimedEventsNative(struct FString& ScreenName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.ResetTimedEvents_Native (Underlying native function: ResetTimedEvents_Native 0x7513bd4)
	void ResetTimedEventsNative(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_TimedEventsArray (Underlying native function: OnRep_TimedEventsArray 0x7513ad0)
	void OnRepTimedEventsArray(struct FMediaTimeEventArray& PreviousValue); // (Final | Native | Private | HasOutParms)

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.OnRep_ScreenName (Underlying native function: OnRep_ScreenName 0x7513918)
	void OnRepScreenName(struct FString& PreviousValue); // (Final | Native | Private)

	// Function /Script/PapayaTimedEvents.PapayaTimedEvents.AddTimedEvent_Native (Underlying native function: AddTimedEvent_Native 0x7513678)
	void AddTimedEventNative(struct FString& EventName, int64_t& Time, struct FString& EventParam); // (Final | Native | Public | BlueprintCallable)
};

