// Class /Script/Niagara.NiagaraSimCacheFunctionLibrary
// Size: 0x28
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CreateNiagaraSimCache (Underlying native function: CreateNiagaraSimCache 0x6cf47f4)
	static class UNiagaraSimCache* CreateNiagaraSimCache(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Niagara.NiagaraSimCacheFunctionLibrary.CaptureNiagaraSimCacheImmediate (Underlying native function: CaptureNiagaraSimCacheImmediate 0x6cf3f90)
	static bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache*& SimCache, struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent*& NiagaraComponent, class UNiagaraSimCache*& OutSimCache, bool& bAdvanceSimulation, float& AdvanceDeltaTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

