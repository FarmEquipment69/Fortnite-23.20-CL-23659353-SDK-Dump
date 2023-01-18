// Class /Script/Engine.EmitterCameraLensEffectBase
// Size: 0x370
class AEmitterCameraLensEffectBase : public AEmitter
{
	unsigned char unreflected_2d8[0x8]; // 0x2d8 (0x8) 
	class UParticleSystem* PSCameraEffect; // 0x2e0 (0x8)
	class APlayerCameraManager* BaseCamera; // 0x2e8 (0x8)
	struct FTransform RelativeTransform; // 0x2f0 (0x60)
	float BaseFOV; // 0x350 (0x4)
	unsigned char bAllowMultipleInstances; // 0x354 (0x1)
	unsigned char bResetWhenRetriggered; // 0x354 (0x1)
	unsigned char unreflected_355[0x3]; // 0x355 (0x3) 
	struct TArray<class UClass*> EmittersToTreatAsSame; // 0x358 (0x10)
	float DistFromCamera; // 0x368 (0x4)
	unsigned char padding_36c[0x4]; // 0x36c (0x4)
};

