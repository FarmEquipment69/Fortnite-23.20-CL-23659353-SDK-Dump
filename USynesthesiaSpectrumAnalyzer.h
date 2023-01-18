// Class /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer
// Size: 0xe8
class USynesthesiaSpectrumAnalyzer : public UAudioAnalyzer
{
	class USynesthesiaSpectrumAnalysisSettings* Settings; // 0x90 (0x8)
	struct FMulticastInlineDelegate OnSpectrumResults; // 0x98 (0x10)
	unsigned char unreflected_a8[0x18]; // 0xa8 (0x18) 
	struct FMulticastInlineDelegate OnLatestSpectrumResults; // 0xc0 (0x10)
	unsigned char padding_d0[0x18]; // 0xd0 (0x18)

	/* Functions */

	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetNumCenterFrequencies (Underlying native function: GetNumCenterFrequencies 0x71e74dc)
	int GetNumCenterFrequencies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AudioSynesthesia.SynesthesiaSpectrumAnalyzer.GetCenterFrequencies (Underlying native function: GetCenterFrequencies 0x71e6a44)
	void GetCenterFrequencies(float& InSampleRate, struct TArray<float>& OutCenterFrequencies); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

