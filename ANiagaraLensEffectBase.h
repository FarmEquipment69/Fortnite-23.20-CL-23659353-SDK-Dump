// Class /Script/Niagara.NiagaraLensEffectBase
// Size: 0x320
class ANiagaraLensEffectBase : public ANiagaraActor
{
	unsigned char unreflected_298[0x8]; // 0x298 (0x8) 
	struct FTransform DesiredRelativeTransform; // 0x2a0 (0x60)
	float BaseAuthoredFOV; // 0x300 (0x4)
	unsigned char bAllowMultipleInstances; // 0x304 (0x1)
	unsigned char bResetWhenRetriggered; // 0x304 (0x1)
	unsigned char unreflected_305[0x3]; // 0x305 (0x3) 
	struct TArray<class UClass*> EmittersToTreatAsSame; // 0x308 (0x10)
	class APlayerCameraManager* OwningCameraManager; // 0x318 (0x8)
};

