// Class /Script/Niagara.NiagaraActor
// Size: 0x298
class ANiagaraActor : public AActor
{
	class UNiagaraComponent* NiagaraComponent; // 0x288 (0x8)
	unsigned char bDestroyOnSystemFinish; // 0x290 (0x1)
	unsigned char padding_291[0x7]; // 0x291 (0x7)

	/* Functions */

	// Function /Script/Niagara.NiagaraActor.SetDestroyOnSystemFinish (Underlying native function: SetDestroyOnSystemFinish 0x6bc6da4)
	void SetDestroyOnSystemFinish(bool& bShouldDestroyOnSystemFinish); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraActor.OnNiagaraSystemFinished (Underlying native function: OnNiagaraSystemFinished 0x2b79d64)
	void OnNiagaraSystemFinished(class UNiagaraComponent*& FinishedComponent); // (Final | Native | Private)
};

