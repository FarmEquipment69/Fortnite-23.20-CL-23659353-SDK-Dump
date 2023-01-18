// ScriptStruct /Script/GameplayAbilities.GameplayCueNotify_LoopingEffects
// Size: 0x1f0
struct FGameplayCueNotify_LoopingEffects
{
	struct TArray<struct FGameplayCueNotify_ParticleInfo> LoopingParticles; // 0x0 (0x10)
	struct TArray<struct FGameplayCueNotify_SoundInfo> LoopingSounds; // 0x10 (0x10)
	struct FGameplayCueNotify_CameraShakeInfo LoopingCameraShake; // 0x20 (0x98)
	struct FGameplayCueNotify_CameraLensEffectInfo LoopingCameraLensEffect; // 0xb8 (0x90)
	struct FGameplayCueNotify_ForceFeedbackInfo LoopingForceFeedback; // 0x148 (0x98)
	struct FGameplayCueNotify_InputDevicePropertyInfo LoopingInputDevicePropertyEffect; // 0x1e0 (0x10)
};

