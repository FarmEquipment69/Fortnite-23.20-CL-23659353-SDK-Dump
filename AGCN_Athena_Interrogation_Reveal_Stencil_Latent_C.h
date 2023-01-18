// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C
// Size: 0x5a8
class AGCN_Athena_Interrogation_Reveal_Stencil_Latent_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	class UPostProcessComponent* PostProcess; // 0x530 (0x8)
	double SweepDuration; // 0x538 (0x8)
	struct FTimerHandle* SweepDelayHandle; // 0x540 (0x8)
	double SweepRadius; // 0x548 (0x8)
	struct FVector LocalPlayerLocation; // 0x550 (0x18)
	class APlayerPawn_Athena_C* PlayerPawnAthena; // 0x568 (0x8)
	double DelayBeforeSweep; // 0x570 (0x8)
	struct FTimerHandle* DelayBeforeSweepHandle; // 0x578 (0x8)
	struct FScalableFloat StencilDuration; // 0x580 (0x28)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.OnExecute (Has no native function)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.BeginSweepFX (Has no native function)
	void BeginSweepFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.EndSweepFX (Has no native function)
	void EndSweepFX(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ReceiveEndPlay (Has no native function)
	void ReceiveEndPlay(struct TEnumAsByte<EEndPlayReason>& EndPlayReason); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.PlayWorldSweep (Has no native function)
	void PlayWorldSweep(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCN_Athena_Interrogation_Reveal_Stencil_Latent.GCN_Athena_Interrogation_Reveal_Stencil_Latent_C.ExecuteUbergraph_GCN_Athena_Interrogation_Reveal_Stencil_Latent (Has no native function)
	void ExecuteUbergraphGCNAthenaInterrogationRevealStencilLatent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct TEnumAsByte<EEndPlayReason>& K2NodeEventEndPlayReason, struct FLinearColor& CallFuncMakeColorReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate1, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, double& CallFuncAddDoubleDoubleReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue1, float& CallFuncSetScalarParameterValueParameterValueImplicitCast, float& CallFuncSetScalarParameterValueParameterValueImplicitCast1, float& CallFuncSetScalarParameterValueParameterValueImplicitCast2, float& CallFuncK2SetTimerDelegateTimeImplicitCast, double& CallFuncAddDoubleDoubleAImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

