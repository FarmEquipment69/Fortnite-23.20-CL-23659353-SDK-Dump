// Class /Script/Niagara.NiagaraPreviewGrid
// Size: 0x2d8
class ANiagaraPreviewGrid : public AActor
{
	class UNiagaraSystem* System; // 0x288 (0x8)
	enum ENiagaraPreviewGridResetMode ResetMode; // 0x290 (0x1)
	unsigned char unreflected_291[0x7]; // 0x291 (0x7) 
	class UNiagaraPreviewAxis* PreviewAxisX; // 0x298 (0x8)
	class UNiagaraPreviewAxis* PreviewAxisY; // 0x2a0 (0x8)
	class UClass* PreviewClass; // 0x2a8 (0x8)
	float SpacingX; // 0x2b0 (0x4)
	float SpacingY; // 0x2b4 (0x4)
	int NumX; // 0x2b8 (0x4)
	int NumY; // 0x2bc (0x4)
	struct TArray<class UChildActorComponent*> PreviewComponents; // 0x2c0 (0x10)
	unsigned char padding_2d0[0x8]; // 0x2d0 (0x8)

	/* Functions */

	// Function /Script/Niagara.NiagaraPreviewGrid.SetPaused (Underlying native function: SetPaused 0x6cc3470)
	void SetPaused(bool& bPaused); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraPreviewGrid.GetPreviews (Underlying native function: GetPreviews 0x6cc2590)
	void GetPreviews(struct TArray<class UNiagaraComponent*>& OutPreviews); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.NiagaraPreviewGrid.DeactivatePreviews (Underlying native function: DeactivatePreviews 0x6cc1f9c)
	void DeactivatePreviews(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraPreviewGrid.ActivatePreviews (Underlying native function: ActivatePreviews 0x6cc1ce8)
	void ActivatePreviews(bool& bReset); // (Final | Native | Public | BlueprintCallable)
};

