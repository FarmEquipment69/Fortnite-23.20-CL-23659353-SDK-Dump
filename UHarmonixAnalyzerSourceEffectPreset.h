// Class /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset
// Size: 0x1e0
class UHarmonixAnalyzerSourceEffectPreset : public USoundEffectSourcePreset
{
	unsigned char unreflected_68[0xd0]; // 0x68 (0xd0) 
	struct FHarmonixAnalyzerEffectSettings Settings; // 0x138 (0xa8)

	/* Functions */

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetWaveformOutputSettings (Underlying native function: SetWaveformOutputSettings 0x545dad0)
	void SetWaveformOutputSettings(struct FHarmonixAnalyzerOutputSettings& outSsettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetWaveformNumSamplesPerSecond (Underlying native function: SetWaveformNumSamplesPerSecond 0x545da10)
	void SetWaveformNumSamplesPerSecond(int& NumSamplesPerSecond); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetWaveformNumSamplesHeld (Underlying native function: SetWaveformNumSamplesHeld 0x545da10)
	void SetWaveformNumSamplesHeld(int& numSamples); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetWaveformEnabled (Underlying native function: SetWaveformEnabled 0x545d940)
	void SetWaveformEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUOutputSettings (Underlying native function: SetVUOutputSettings 0x545d400)
	void SetVUOutputSettings(struct FHarmonixAnalyzerOutputSettings& outSsettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUMeterRiseMs (Underlying native function: SetVUMeterRiseMs 0x545d330)
	void SetVUMeterRiseMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUMeterRangeDB (Underlying native function: SetVUMeterRangeDB 0x545d260)
	void SetVUMeterRangeDB(float& dbRange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUMeterMaxDB (Underlying native function: SetVUMeterMaxDB 0x545d190)
	void SetVUMeterMaxDB(float& dbMax); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUMeterFallMs (Underlying native function: SetVUMeterFallMs 0x545d0c0)
	void SetVUMeterFallMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetVUMeterEnabled (Underlying native function: SetVUMeterEnabled 0x545cff0)
	void SetVUMeterEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetSettings (Underlying native function: SetSettings 0x5459df0)
	void SetSettings(struct FHarmonixAnalyzerEffectSettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetSemitoneFilterBankOutputSettings (Underlying native function: SetSemitoneFilterBankOutputSettings 0x5459c60)
	void SetSemitoneFilterBankOutputSettings(struct FHarmonixAnalyzerOutputSettings& outSsettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetSemitoneFilterBankNumMidiNotes (Underlying native function: SetSemitoneFilterBankNumMidiNotes 0x5459ba0)
	void SetSemitoneFilterBankNumMidiNotes(int& Num); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetSemitoneFilterBankMinMidiNote (Underlying native function: SetSemitoneFilterBankMinMidiNote 0x5459ae0)
	void SetSemitoneFilterBankMinMidiNote(int& min); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetSemitoneFilterBankEnabled (Underlying native function: SetSemitoneFilterBankEnabled 0x5459a10)
	void SetSemitoneFilterBankEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetNumBandFilterBankBands (Underlying native function: SetNumBandFilterBankBands 0x54582e0)
	void SetNumBandFilterBankBands(int& Bands); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTRiseMs (Underlying native function: SetFFTRiseMs 0x5454f40)
	void SetFFTRiseMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTRangeDB (Underlying native function: SetFFTRangeDB 0x5454e70)
	void SetFFTRangeDB(float& dbRange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTOutputSettings (Underlying native function: SetFFTOutputSettings 0x5454da0)
	void SetFFTOutputSettings(struct FHarmonixAnalyzerOutputSettings& outSsettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTNumResultBins (Underlying native function: SetFFTNumResultBins 0x5454ce0)
	void SetFFTNumResultBins(int& Num); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTMinFrequencyHz (Underlying native function: SetFFTMinFrequencyHz 0x5454c10)
	void SetFFTMinFrequencyHz(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTMelScaleBinning (Underlying native function: SetFFTMelScaleBinning 0x5454b40)
	void SetFFTMelScaleBinning(bool& On); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTMaxFrequencyHz (Underlying native function: SetFFTMaxFrequencyHz 0x5454a70)
	void SetFFTMaxFrequencyHz(float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTMaxDB (Underlying native function: SetFFTMaxDB 0x54549a0)
	void SetFFTMaxDB(float& dbMax); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTLength (Underlying native function: SetFFTLength 0x54548e0)
	void SetFFTLength(int& Num); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTFallMs (Underlying native function: SetFFTFallMs 0x5454810)
	void SetFFTFallMs(float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTEqualLoudnessWeights (Underlying native function: SetFFTEqualLoudnessWeights 0x5454740)
	void SetFFTEqualLoudnessWeights(bool& On); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetFFTEnabled (Underlying native function: SetFFTEnabled 0x5454670)
	void SetFFTEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetEnabled (Underlying native function: SetEnabled 0x5453970)
	void SetEnabled(bool& Enabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetDynamicRangeMeterRmsWindow (Underlying native function: SetDynamicRangeMeterRmsWindow 0x5453810)
	void SetDynamicRangeMeterRmsWindow(int& Frames); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetDynamicRangeMeterFilter (Underlying native function: SetDynamicRangeMeterFilter 0x5453700)
	void SetDynamicRangeMeterFilter(bool& Enable, float& Cutoff); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetDynamicRangeMeterEnabled (Underlying native function: SetDynamicRangeMeterEnabled 0x5453630)
	void SetDynamicRangeMeterEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetDynamicRangeMeterAlphas (Underlying native function: SetDynamicRangeMeterAlphas 0x5453480)
	void SetDynamicRangeMeterAlphas(float& highRising, float& highFalling, float& lowRising, float& lowFalling); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankRiseMs (Underlying native function: SetBandFilterBankRiseMs 0x54520d0)
	void SetBandFilterBankRiseMs(int& bandIndex, float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankRangeDB (Underlying native function: SetBandFilterBankRangeDB 0x5451fd0)
	void SetBandFilterBankRangeDB(int& bandIndex, float& dbRange); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankMaxDB (Underlying native function: SetBandFilterBankMaxDB 0x5451ed0)
	void SetBandFilterBankMaxDB(int& bandIndex, float& dbMax); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankFallMs (Underlying native function: SetBandFilterBankFallMs 0x5451dd0)
	void SetBandFilterBankFallMs(int& bandIndex, float& ms); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankEnabled (Underlying native function: SetBandFilterBankEnabled 0x5451d00)
	void SetBandFilterBankEnabled(bool& e); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankBandStartHz (Underlying native function: SetBandFilterBankBandStartHz 0x5451c00)
	void SetBandFilterBankBandStartHz(int& bandIndex, float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankBandOutputSettings (Underlying native function: SetBandFilterBankBandOutputSettings 0x5451b00)
	void SetBandFilterBankBandOutputSettings(int& bandIndex, struct FHarmonixAnalyzerOutputSettings& outSsettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.SetBandFilterBankBandEndHz (Underlying native function: SetBandFilterBankBandEndHz 0x5451a00)
	void SetBandFilterBankBandEndHz(int& bandIndex, float& hz); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.ResetDynamicRangePeaks (Underlying native function: ResetDynamicRangePeaks 0x5450f20)
	void ResetDynamicRangePeaks(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.ResetDynamicRangeMeter (Underlying native function: ResetDynamicRangeMeter 0x5450ed0)
	void ResetDynamicRangeMeter(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.HardResetVUMeter (Underlying native function: HardResetVUMeter 0x544c4a0)
	void HardResetVUMeter(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.GetResults (Underlying native function: GetResults 0x544ae80)
	void GetResults(struct FHarmonixAnalyzerEffectResults& Result, bool& ResetMonoPeakDb); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.GetHarmonixAnalyzerResults (Underlying native function: GetHarmonixAnalyzerResults 0x54497f0)
	static void GetHarmonixAnalyzerResults(struct FName& AnalyzerName, struct FHarmonixAnalyzerEffectResults& Result, bool& ResetMonoPeakDb); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/HmxAudio.HarmonixAnalyzerSourceEffectPreset.CreateHarmonixAnalyzerInstanceOnEmitter (Underlying native function: CreateHarmonixAnalyzerInstanceOnEmitter 0x5445a80)
	static class UHarmonixAnalyzerSourceEffectPreset* CreateHarmonixAnalyzerInstanceOnEmitter(class UMusicEmitterComponent*& Emitter, struct FHarmonixAnalyzerEffectSettings& InSettings); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

