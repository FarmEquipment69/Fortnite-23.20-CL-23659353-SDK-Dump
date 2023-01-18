// Class /Script/Synthesis.SubmixEffectTapDelayPreset
// Size: 0xd8
class USubmixEffectTapDelayPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x40]; // 0x68 (0x40) 
	struct FSubmixEffectTapDelaySettings Settings; // 0xa8 (0x18)
	unsigned char padding_c0[0x18]; // 0xc0 (0x18)

	/* Functions */

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetTap (Underlying native function: SetTap 0x71d7e2c)
	void SetTap(int& TapId, struct FTapDelayInfo& TapInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetSettings (Underlying native function: SetSettings 0x71d72b0)
	void SetSettings(struct FSubmixEffectTapDelaySettings& InSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.SetInterpolationTime (Underlying native function: SetInterpolationTime 0x71d3a10)
	void SetInterpolationTime(float& Time); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.RemoveTap (Underlying native function: RemoveTap 0x71d06c4)
	void RemoveTap(int& TapId); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTapIds (Underlying native function: GetTapIds 0x71cfebc)
	void GetTapIds(struct TArray<int>& TapIds); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetTap (Underlying native function: GetTap 0x71cfdb4)
	void GetTap(int& TapId, struct FTapDelayInfo& TapInfo); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.GetMaxDelayInMilliseconds (Underlying native function: GetMaxDelayInMilliseconds 0x71cfd34)
	float GetMaxDelayInMilliseconds(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Synthesis.SubmixEffectTapDelayPreset.AddTap (Underlying native function: AddTap 0x71cf6a0)
	void AddTap(int& TapId); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

