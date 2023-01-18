// Class /Script/Niagara.AsyncNiagaraCaptureSimCache
// Size: 0x78
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
{
	class UNiagaraSimCache* CaptureSimCache; // 0x30 (0x8)
	class UNiagaraComponent* CaptureComponent; // 0x38 (0x8)
	int CaptureNumFrames; // 0x40 (0x4)
	int CaptureFrameRate; // 0x44 (0x4)
	int CaptureFrameCounter; // 0x48 (0x4)
	int TimeOutCounter; // 0x4c (0x4)
	struct FMulticastInlineDelegate CaptureComplete; // 0x50 (0x10)
	unsigned char unreflected_60[0x10]; // 0x60 (0x10) 
	bool bAdvanceSimulation; // 0x70 (0x1)
	unsigned char unreflected_71[0x3]; // 0x71 (0x3) 
	float AdvanceDeltaTime; // 0x74 (0x4)

	/* Functions */

	// DelegateFunction /Script/Niagara.AsyncNiagaraCaptureSimCache.OnCaptureComplete__DelegateSignature (Has no native function)
	void OnCaptureCompleteDelegateSignature(bool& bSuccess); // (MulticastDelegate | Public | Delegate)

	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheUntilComplete (Underlying native function: CaptureNiagaraSimCacheUntilComplete 0x6cf4558)
	static class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache*& SimCache, struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent*& NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int& CaptureRate, bool& bAdvanceSimulation, float& AdvanceDeltaTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/Niagara.AsyncNiagaraCaptureSimCache.CaptureNiagaraSimCacheMultiFrame (Underlying native function: CaptureNiagaraSimCacheMultiFrame 0x6cf4264)
	static class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache*& SimCache, struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent*& NiagaraComponent, class UNiagaraSimCache*& OutSimCache, int& NumFrames, int& CaptureRate, bool& bAdvanceSimulation, float& AdvanceDeltaTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

