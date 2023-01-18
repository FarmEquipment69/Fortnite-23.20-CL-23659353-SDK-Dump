// Class /Script/AudioMixer.QuartzSubsystem
// Size: 0x60
class UQuartzSubsystem : public UTickableWorldSubsystem
{
	unsigned char unreflected_60[0x60]; 

	/* Functions */

	// Function /Script/AudioMixer.QuartzSubsystem.IsQuartzEnabled (Underlying native function: IsQuartzEnabled 0x27c9608)
	bool IsQuartzEnabled(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.IsClockRunning (Underlying native function: IsClockRunning 0x9b5077c)
	bool IsClockRunning(class UObject*& WorldContextObject, struct FName& ClockName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMinLatency (Underlying native function: GetRoundTripMinLatency 0x9b503bc)
	float GetRoundTripMinLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripMaxLatency (Underlying native function: GetRoundTripMaxLatency 0x9b5032c)
	float GetRoundTripMaxLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetRoundTripAverageLatency (Underlying native function: GetRoundTripAverageLatency 0x9b5029c)
	float GetRoundTripAverageLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetHandleForClock (Underlying native function: GetHandleForClock 0x9b4fcec)
	class UQuartzClockHandle* GetHandleForClock(class UObject*& WorldContextObject, struct FName& ClockName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMinLatency (Underlying native function: GetGameThreadToAudioRenderThreadMinLatency 0x9b4fc5c)
	float GetGameThreadToAudioRenderThreadMinLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadMaxLatency (Underlying native function: GetGameThreadToAudioRenderThreadMaxLatency 0x9b4fc5c)
	float GetGameThreadToAudioRenderThreadMaxLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetGameThreadToAudioRenderThreadAverageLatency (Underlying native function: GetGameThreadToAudioRenderThreadAverageLatency 0x9b4fbcc)
	float GetGameThreadToAudioRenderThreadAverageLatency(class UObject*& WorldContextObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetEstimatedClockRunTime (Underlying native function: GetEstimatedClockRunTime 0x9b4fa70)
	float GetEstimatedClockRunTime(class UObject*& WorldContextObject, struct FName& InClockName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetDurationOfQuantizationTypeInSeconds (Underlying native function: GetDurationOfQuantizationTypeInSeconds 0x9b4f910)
	float GetDurationOfQuantizationTypeInSeconds(class UObject*& WorldContextObject, struct FName& ClockName, enum EQuartzCommandQuantization& QuantizationType, float& Multiplier); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetCurrentClockTimestamp (Underlying native function: GetCurrentClockTimestamp 0x9b4f658)
	struct FQuartzTransportTimeStamp GetCurrentClockTimestamp(class UObject*& WorldContextObject, struct FName& InClockName); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMinLatency (Underlying native function: GetAudioRenderThreadToGameThreadMinLatency 0x9b4f3e8)
	float GetAudioRenderThreadToGameThreadMinLatency(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadMaxLatency (Underlying native function: GetAudioRenderThreadToGameThreadMaxLatency 0x9b4f3a8)
	float GetAudioRenderThreadToGameThreadMaxLatency(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.GetAudioRenderThreadToGameThreadAverageLatency (Underlying native function: GetAudioRenderThreadToGameThreadAverageLatency 0x9b4f37c)
	float GetAudioRenderThreadToGameThreadAverageLatency(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.DoesClockExist (Underlying native function: DoesClockExist 0x9b4f04c)
	bool DoesClockExist(class UObject*& WorldContextObject, struct FName& ClockName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByName (Underlying native function: DeleteClockByName 0x9b4ef88)
	void DeleteClockByName(class UObject*& WorldContextObject, struct FName& ClockName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.DeleteClockByHandle (Underlying native function: DeleteClockByHandle 0x9b4eeb8)
	void DeleteClockByHandle(class UObject*& WorldContextObject, class UQuartzClockHandle*& InClockHandle); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/AudioMixer.QuartzSubsystem.CreateNewClock (Underlying native function: CreateNewClock 0x9b4eb5c)
	class UQuartzClockHandle* CreateNewClock(class UObject*& WorldContextObject, struct FName& ClockName, struct FQuartzClockSettings& InSettings, bool& bOverrideSettingsIfClockExists, bool& bUseAudioEngineClockManager); // (Final | Native | Public | BlueprintCallable)
};

