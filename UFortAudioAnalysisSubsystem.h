// Class /Script/FortniteGame.FortAudioAnalysisSubsystem
// Size: 0x140
class UFortAudioAnalysisSubsystem : public UWorldSubsystem
{
	struct FSoftObjectPath AudioAnalysisSettingsPath; // 0x30 (0x18)
	class UFortAudioAnalysisSettings* DefaultAnalysisSettings; // 0x48 (0x8)
	struct FMulticastInlineDelegate OnAudioAnalysisStarted; // 0x50 (0x10)
	struct FMulticastInlineDelegate OnAudioAnalysisStopped; // 0x60 (0x10)
	struct FMulticastInlineDelegate OnEnvelopeFollowerUpdated; // 0x70 (0x10)
	struct FMulticastInlineDelegate OnSpectralAnalysisUpdated; // 0x80 (0x10)
	class UFortAudioAnalysisDebugWidget* DebugWidget; // 0x90 (0x8)
	struct TMap<class USoundSubmix*, class UAudioAnalysisSubmixAnalyzer*> SubmixAnalyzers; // 0x98 (0x50)
	struct TMap<class USoundSubmix*, int> SubmixRefCount; // 0xe8 (0x50)
	unsigned char padding_138[0x8]; // 0x138 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.UnRegisterSubmix (Underlying native function: UnRegisterSubmix 0x8e61124)
	void UnRegisterSubmix(class USoundSubmix*& InSubmix); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.UnRegisterDefaultSubmix (Underlying native function: UnRegisterDefaultSubmix 0x8e61110)
	void UnRegisterDefaultSubmix(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.RegisterSubmix (Underlying native function: RegisterSubmix 0x8e5fda4)
	void RegisterSubmix(class USoundSubmix*& InSubmix, struct FFortSubmixAnalyzerData& InAnalyzerData); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.RegisterDefaultSubmix (Underlying native function: RegisterDefaultSubmix 0x2e07514)
	void RegisterDefaultSubmix(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.IsAnalysisActive (Underlying native function: IsAnalysisActive 0x8e5f934)
	bool IsAnalysisActive(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.GetAnalyzerForSubmix (Underlying native function: GetAnalyzerForSubmix 0x8e5df2c)
	class UAudioAnalysisSubmixAnalyzer* GetAnalyzerForSubmix(class USoundSubmix*& InSubmix); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortAudioAnalysisSubsystem.GetAnalysisSettings (Underlying native function: GetAnalysisSettings 0x8e5df14)
	class UFortAudioAnalysisSettings* GetAnalysisSettings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

