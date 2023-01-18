// Class /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings
// Size: 0x50
class UResonanceAudioSpatializationSourceSettings : public USpatializationPluginSourceSettingsBase
{
	enum ERaSpatializationMethod SpatializationMethod; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	float Pattern; // 0x2c (0x4)
	float Sharpness; // 0x30 (0x4)
	bool bToggleVisualization; // 0x34 (0x1)
	unsigned char unreflected_35[0x3]; // 0x35 (0x3) 
	float Scale; // 0x38 (0x4)
	float Spread; // 0x3c (0x4)
	enum ERaDistanceRolloffModel Rolloff; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float MinDistance; // 0x44 (0x4)
	float MaxDistance; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)

	/* Functions */

	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceSpread (Underlying native function: SetSoundSourceSpread 0x7f0424c)
	void SetSoundSourceSpread(float& InSpread); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioSpatializationSourceSettings.SetSoundSourceDirectivity (Underlying native function: SetSoundSourceDirectivity 0x7f04184)
	void SetSoundSourceDirectivity(float& InPattern, float& InSharpness); // (Final | Native | Public | BlueprintCallable)
};

