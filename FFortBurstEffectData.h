// ScriptStruct /Script/FortniteGame.FortBurstEffectData
// Size: 0x140
struct FFortBurstEffectData
{
	struct TArray<struct FFortGameplayCueParticleInfo> BurstParticles; // 0x0 (0x10)
	struct TArray<struct FFortGameplayCueAudioInfo> BurstSounds; // 0x10 (0x10)
	struct FFortGameplayCueCameraShakeInfo BurstCameraShake; // 0x20 (0x38)
	struct FFortGameplayCueCameraLensEffectInfo BurstCameraLensEffect; // 0x58 (0x18)
	struct FFortGameplayCueForceFeedbackInfo BurstForceFeedbackEffect; // 0x70 (0x28)
	struct FFortGameplayCueDecalInfo BurstDecal; // 0x98 (0xa8)
};

