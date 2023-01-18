// Class /Script/AudioSynesthesia.LoudnessNRT
// Size: 0x80
class ULoudnessNRT : public UAudioSynesthesiaNRT
{
	class ULoudnessNRTSettings* Settings; // 0x78 (0x8)

	/* Functions */

	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedLoudnessAtTime (Underlying native function: GetNormalizedLoudnessAtTime 0x71e7408)
	void GetNormalizedLoudnessAtTime(float& InSeconds, float& OutLoudness); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.LoudnessNRT.GetNormalizedChannelLoudnessAtTime (Underlying native function: GetNormalizedChannelLoudnessAtTime 0x71e7130)
	void GetNormalizedChannelLoudnessAtTime(float& InSeconds, int& InChannel, float& OutLoudness); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.LoudnessNRT.GetLoudnessAtTime (Underlying native function: GetLoudnessAtTime 0x71e6f30)
	void GetLoudnessAtTime(float& InSeconds, float& OutLoudness); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.LoudnessNRT.GetChannelLoudnessAtTime (Underlying native function: GetChannelLoudnessAtTime 0x71e6c58)
	void GetChannelLoudnessAtTime(float& InSeconds, int& InChannel, float& OutLoudness); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

