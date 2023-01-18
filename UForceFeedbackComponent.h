// Class /Script/Engine.ForceFeedbackComponent
// Size: 0x390
class UForceFeedbackComponent : public USceneComponent
{
	class UForceFeedbackEffect* ForceFeedbackEffect; // 0x2a0 (0x8)
	unsigned char bAutoDestroy; // 0x2a8 (0x1)
	unsigned char bStopWhenOwnerDestroyed; // 0x2a8 (0x1)
	unsigned char bLooping; // 0x2a8 (0x1)
	unsigned char bIgnoreTimeDilation; // 0x2a8 (0x1)
	unsigned char bOverrideAttenuation; // 0x2a8 (0x1)
	unsigned char unreflected_2a9[0x3]; // 0x2a9 (0x3) 
	float IntensityMultiplier; // 0x2ac (0x4)
	class UForceFeedbackAttenuation* AttenuationSettings; // 0x2b0 (0x8)
	struct FForceFeedbackAttenuationSettings AttenuationOverrides; // 0x2b8 (0xc0)
	struct FMulticastInlineDelegate OnForceFeedbackFinished; // 0x378 (0x10)
	unsigned char padding_388[0x8]; // 0x388 (0x8)

	/* Functions */

	// Function /Script/Engine.ForceFeedbackComponent.Stop (Underlying native function: Stop 0x8d41ea0)
	void Stop(); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ForceFeedbackComponent.SetIntensityMultiplier (Underlying native function: SetIntensityMultiplier 0x9c9d098)
	void SetIntensityMultiplier(float& NewIntensityMultiplier); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ForceFeedbackComponent.SetForceFeedbackEffect (Underlying native function: SetForceFeedbackEffect 0x9cf9220)
	void SetForceFeedbackEffect(class UForceFeedbackEffect*& NewForceFeedbackEffect); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ForceFeedbackComponent.Play (Underlying native function: Play 0x9b521f8)
	void Play(float& StartTime); // (Native | Public | BlueprintCallable)

	// Function /Script/Engine.ForceFeedbackComponent.BP_GetAttenuationSettingsToApply (Underlying native function: BP_GetAttenuationSettingsToApply 0x9cf671c)
	bool BPGetAttenuationSettingsToApply(struct FForceFeedbackAttenuationSettings& OutAttenuationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ForceFeedbackComponent.AdjustAttenuation (Underlying native function: AdjustAttenuation 0x9cf6600)
	void AdjustAttenuation(struct FForceFeedbackAttenuationSettings& InAttenuationSettings); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

