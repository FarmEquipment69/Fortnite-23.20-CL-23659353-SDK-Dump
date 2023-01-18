// Class /Script/REVRuntime.RevSettings
// Size: 0x80
class URevSettings : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	float UpShiftDuration; // 0x30 (0x4)
	float UpShiftAttackDuration; // 0x34 (0x4)
	float UpShiftAttackVolumeSpike; // 0x38 (0x4)
	float UpShiftAttackRPM; // 0x3c (0x4)
	float UpShiftAttackThrottleTime; // 0x40 (0x4)
	float UpShiftWobblePitchFreq; // 0x44 (0x4)
	float UpShiftWobblePitchAmp; // 0x48 (0x4)
	bool UpShiftWobbleEnabled; // 0x4c (0x1)
	unsigned char unreflected_4d[0x3]; // 0x4d (0x3) 
	float UpShiftWobbleVolFreq; // 0x50 (0x4)
	float UpShiftWobbleVolAmp; // 0x54 (0x4)
	float UpShiftWobbleDuration; // 0x58 (0x4)
	float DownShiftDuration; // 0x5c (0x4)
	float PopDuration; // 0x60 (0x4)
	float ClutchRPMSpike; // 0x64 (0x4)
	float ClutchRPMSpikeDuration; // 0x68 (0x4)
	float ClutchRPMMergeTime; // 0x6c (0x4)
	unsigned char padding_70[0x10]; // 0x70 (0x10)

	/* Functions */

	// Function /Script/REVRuntime.RevSettings.UpdateSettings (Underlying native function: UpdateSettings 0x720e614)
	void UpdateSettings(); // (Final | BlueprintCosmetic | Native | Public | BlueprintCallable)
};

