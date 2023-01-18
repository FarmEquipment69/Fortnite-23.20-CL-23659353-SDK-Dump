// Class /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset
// Size: 0x170
class UResonanceAudioReverbPluginPreset : public USoundEffectSubmixPreset
{
	unsigned char unreflected_68[0x98]; // 0x68 (0x98) 
	struct FResonanceAudioReverbPluginSettings Settings; // 0x100 (0x70)

	/* Functions */

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomRotation (Underlying native function: SetRoomRotation 0x7f040fc)
	void SetRoomRotation(struct FQuat& InRotation); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomPosition (Underlying native function: SetRoomPosition 0x7f04074)
	void SetRoomPosition(struct FVector& InPosition); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomMaterials (Underlying native function: SetRoomMaterials 0x7f03ef8)
	void SetRoomMaterials(struct TArray<enum ERaMaterialName>& InMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetRoomDimensions (Underlying native function: SetRoomDimensions 0x7f03e70)
	void SetRoomDimensions(struct FVector& InDimensions); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbTimeModifier (Underlying native function: SetReverbTimeModifier 0x7f03ddc)
	void SetReverbTimeModifier(float& InReverbTimeModifier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbGain (Underlying native function: SetReverbGain 0x7f03d48)
	void SetReverbGain(float& InReverbGain); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReverbBrightness (Underlying native function: SetReverbBrightness 0x7f03cb4)
	void SetReverbBrightness(float& InReverbBrightness); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetReflectionScalar (Underlying native function: SetReflectionScalar 0x7f03c20)
	void SetReflectionScalar(float& InReflectionScalar); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ResonanceAudio.ResonanceAudioReverbPluginPreset.SetEnableRoomEffects (Underlying native function: SetEnableRoomEffects 0x7f03b24)
	void SetEnableRoomEffects(bool& bInEnableRoomEffects); // (Final | Native | Public | BlueprintCallable)
};

