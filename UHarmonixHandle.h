// Class /Script/HmxAudio.HarmonixHandle
// Size: 0x40
class UHarmonixHandle : public UObject
{
	unsigned char unreflected_28[0x10]; // 0x28 (0x10) 
	class UWorld* mWorld; // 0x38 (0x8)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixHandle.Stop (Underlying native function: Stop 0x545e7a0)
	void Stop(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetVolume (Underlying native function: SetVolume 0x545d750)
	void SetVolume(float& vol, float& Seconds, enum EPostFadeOption& Option); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetSpeed (Underlying native function: SetSpeed 0x545ade0)
	void SetSpeed(float& Speed, bool& maintainPitch); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetRawPitchMultiplier (Underlying native function: SetRawPitchMultiplier 0x54594b0)
	void SetRawPitchMultiplier(float& PitchMultiplier); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetParameter (Underlying native function: SetParameter 0x5458d20)
	void SetParameter(struct FName& Param, float& Value, enum EParamExists& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetMute (Underlying native function: SetMute 0x5458070)
	void SetMute(bool& muted); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SetGain (Underlying native function: SetGain 0x5455a20)
	void SetGain(float& Gain, float& Seconds, enum EPostFadeOption& Option); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.SeekToMs (Underlying native function: SeekToMs 0x5451310)
	void SeekToMs(float& ms); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.Pause (Underlying native function: Pause 0x5450590)
	void Pause(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.Kill (Underlying native function: Kill 0x544cd80)
	void Kill(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetVolume (Underlying native function: GetVolume 0x544c3a0)
	float GetVolume(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetTransportState (Underlying native function: GetTransportState 0x544c180)
	enum EAudioTransportState GetTransportState(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetTimelineMs (Underlying native function: GetTimelineMs 0x544be00)
	float GetTimelineMs(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetSpeed (Underlying native function: GetSpeed 0x544b6c0)
	float GetSpeed(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetRawPitchMultiplier (Underlying native function: GetRawPitchMultiplier 0x544ad70)
	float GetRawPitchMultiplier(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetParameter (Underlying native function: GetParameter 0x544a870)
	float GetParameter(struct FName& Param, enum EParamExists& Result); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetMute (Underlying native function: GetMute 0x544a240)
	bool GetMute(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetLengthMs (Underlying native function: GetLengthMs 0x5449b10)
	float GetLengthMs(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetGain (Underlying native function: GetGain 0x54496d0)
	float GetGain(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.GetElapsedMs (Underlying native function: GetElapsedMs 0x5449340)
	float GetElapsedMs(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixHandle.Continue (Underlying native function: Continue 0x54459a0)
	void Continue(); // (Final | Native | Protected | BlueprintCallable)
};

