// Class /Script/Niagara.NiagaraBaselineController
// Size: 0x68
class UNiagaraBaselineController : public UObject
{
	float TestDuration; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	class UNiagaraEffectType* EffectType; // 0x30 (0x8)
	class ANiagaraPerfBaselineActor* Owner; // 0x38 (0x8)
	struct TWeakObjectPtr<class UNiagaraSystem> System; // 0x40 (0x28)

	/* Functions */

	// Function /Script/Niagara.NiagaraBaselineController.OnTickTest (Underlying native function: OnTickTest 0x1140a44)
	bool OnTickTest(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Niagara.NiagaraBaselineController.OnOwnerTick (Underlying native function: OnOwnerTick 0x6cc2d20)
	void OnOwnerTick(float& DeltaTime); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Niagara.NiagaraBaselineController.OnEndTest (Underlying native function: OnEndTest 0x6cc2c90)
	void OnEndTest(struct FNiagaraPerfBaselineStats& Stats); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Niagara.NiagaraBaselineController.OnBeginTest (Underlying native function: OnBeginTest 0x28b2a48)
	void OnBeginTest(); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/Niagara.NiagaraBaselineController.GetSystem (Underlying native function: GetSystem 0x6cc27c4)
	class UNiagaraSystem* GetSystem(); // (Final | Native | Public | BlueprintCallable)
};

