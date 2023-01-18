// Class /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced
// Size: 0xe0
class UAnimNotifyState_TimedNiagaraEffectAdvanced : public UAnimNotifyState_TimedNiagaraEffect
{
	bool bEnableNormalizedNotifyProgress; // 0x78 (0x1)
	unsigned char unreflected_79[0x3]; // 0x79 (0x3) 
	struct FName NotifyProgressUserParameter; // 0x7c (0x4)
	struct TArray<struct FCurveParameterPair*> AnimCurves; // 0x80 (0x10)
	unsigned char padding_90[0x50]; // 0x90 (0x50)

	/* Functions */

	// Function /Script/NiagaraAnimNotifies.AnimNotifyState_TimedNiagaraEffectAdvanced.GetNotifyProgress (Underlying native function: GetNotifyProgress 0x6d0a4e8)
	float GetNotifyProgress(class UMeshComponent*& MeshComp); // (Final | Native | Public | BlueprintCallable | Const)
};

