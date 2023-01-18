// ScriptStruct /Script/FortniteGame.FortGameplayCueSpawnResult
// Size: 0x40
struct FFortGameplayCueSpawnResult
{
	struct TArray<class UFXSystemComponent*> ParticleComponents; // 0x0 (0x10)
	struct TArray<class UAudioComponent*> AudioComponents; // 0x10 (0x10)
	class ULegacyCameraShake* CameraShake; // 0x20 (0x8)
	struct TScriptInterface<class ICameraLensEffectInterface> CameraLensEffect; // 0x28 (0x10)
	class ADecalActor* DecalActor; // 0x38 (0x8)
};

