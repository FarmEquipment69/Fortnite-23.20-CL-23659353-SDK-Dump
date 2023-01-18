// Class /Script/Engine.AudioVolume
// Size: 0x330
class AAudioVolume : public AVolume
{
	float Priority; // 0x2c0 (0x4)
	unsigned char bEnabled; // 0x2c4 (0x1)
	unsigned char unreflected_2c5[0x3]; // 0x2c5 (0x3) 
	struct FReverbSettings Settings; // 0x2c8 (0x20)
	struct FInteriorSettings AmbientZoneSettings; // 0x2e8 (0x24)
	unsigned char unreflected_30c[0x4]; // 0x30c (0x4) 
	struct TArray<struct FAudioVolumeSubmixSendSettings> SubmixSendSettings; // 0x310 (0x10)
	struct TArray<struct FAudioVolumeSubmixOverrideSettings> SubmixOverrideSettings; // 0x320 (0x10)

	/* Functions */

	// Function /Script/Engine.AudioVolume.SetSubmixSendSettings (Underlying native function: SetSubmixSendSettings 0x9c9d660)
	void SetSubmixSendSettings(struct TArray<struct FAudioVolumeSubmixSendSettings>& NewSubmixSendSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.SetSubmixOverrideSettings (Underlying native function: SetSubmixOverrideSettings 0x9c9d5b0)
	void SetSubmixOverrideSettings(struct TArray<struct FAudioVolumeSubmixOverrideSettings>& NewSubmixOverrideSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.SetReverbSettings (Underlying native function: SetReverbSettings 0x9c9d3a8)
	void SetReverbSettings(struct FReverbSettings& NewReverbSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.SetPriority (Underlying native function: SetPriority 0x9c9d2a8)
	void SetPriority(float& NewPriority); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.SetInteriorSettings (Underlying native function: SetInteriorSettings 0x9c9cea0)
	void SetInteriorSettings(struct FInteriorSettings& NewInteriorSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.SetEnabled (Underlying native function: SetEnabled 0x9c9c86c)
	void SetEnabled(bool& bNewEnabled); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.AudioVolume.OnRep_bEnabled (Underlying native function: OnRep_bEnabled 0x2b0fa94)
	void OnRepbEnabled(); // (Final | Native | Private)
};

