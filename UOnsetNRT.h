// Class /Script/AudioSynesthesia.OnsetNRT
// Size: 0x80
class UOnsetNRT : public UAudioSynesthesiaNRT
{
	class UOnsetNRTSettings* Settings; // 0x78 (0x8)

	/* Functions */

	// Function /Script/AudioSynesthesia.OnsetNRT.GetNormalizedChannelOnsetsBetweenTimes (Underlying native function: GetNormalizedChannelOnsetsBetweenTimes 0x71e7234)
	void GetNormalizedChannelOnsetsBetweenTimes(float& InStartSeconds, float& InEndSeconds, int& InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.OnsetNRT.GetChannelOnsetsBetweenTimes (Underlying native function: GetChannelOnsetsBetweenTimes 0x71e6d5c)
	void GetChannelOnsetsBetweenTimes(float& InStartSeconds, float& InEndSeconds, int& InChannel, struct TArray<float>& OutOnsetTimestamps, struct TArray<float>& OutOnsetStrengths); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

