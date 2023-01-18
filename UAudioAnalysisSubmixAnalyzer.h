// Class /Script/FortniteGame.AudioAnalysisSubmixAnalyzer
// Size: 0xe8
class UAudioAnalysisSubmixAnalyzer : public UObject
{
	struct FDelegate OnSubmixEnvelopeDelegate; // 0x28 (0xc)
	struct FDelegate OnSubmixSpectralAnalysisDelegate; // 0x34 (0xc)
	class USoundSubmix* Submix; // 0x40 (0x8)
	struct FFortSubmixAnalyzerData AnalyzerData; // 0x48 (0x68)
	class UFortAudioAnalysisSubsystem* OwningSubsystem; // 0xb0 (0x8)
	unsigned char padding_b8[0x30]; // 0xb8 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.AudioAnalysisSubmixAnalyzer.OnSubmixSpectralAnalysis (Underlying native function: OnSubmixSpectralAnalysis 0x1ff6b1c)
	void OnSubmixSpectralAnalysis(struct TArray<float>& Amplitudes); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.AudioAnalysisSubmixAnalyzer.OnSubmixEnvelope (Underlying native function: OnSubmixEnvelope 0x1ea8b90)
	void OnSubmixEnvelope(struct TArray<float>& Amplitudes); // (Final | Native | Public | HasOutParms)
};

