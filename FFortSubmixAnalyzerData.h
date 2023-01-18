// ScriptStruct /Script/FortniteGame.FortSubmixAnalyzerData
// Size: 0x68
struct FFortSubmixAnalyzerData
{
	struct FAudioAnalysisEnvelopeFollowerData AmplitudeData; // 0x0 (0x18)
	struct FAudioAnalysisSpectralAnalysisData SpectrumData; // 0x18 (0x30)
	struct TArray<struct FAudioAnalysisParameterScalar> ScalarParameters; // 0x48 (0x10)
	struct TArray<struct FAudioAnalysisParameterVector> VectorParameters; // 0x58 (0x10)
};

