// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_BurstEffects
// Size: 0x298
struct FGameplayCueNotify_BurstEffects
{
	struct TArray<struct FGameplayCueNotify_ParticleInfo> BurstParticles; // 0x0 (0x10)
	struct TArray<struct FGameplayCueNotify_SoundInfo> BurstSounds; // 0x10 (0x10)
	struct FGameplayCueNotify_CameraShakeInfo BurstCameraShake; // 0x20 (0x98)
	struct FGameplayCueNotify_CameraLensEffectInfo BurstCameraLensEffect; // 0xb8 (0x90)
	struct FGameplayCueNotify_ForceFeedbackInfo BurstForceFeedback; // 0x148 (0x98)
	struct FGameplayCueNotify_InputDevicePropertyInfo BurstDevicePropertyEffect; // 0x1e0 (0x10)
	struct FGameplayCueNotify_DecalInfo BurstDecal; // 0x1f0 (0xa8)
};

