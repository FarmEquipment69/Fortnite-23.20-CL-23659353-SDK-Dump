// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C
// Size: 0x998
class AGCNL_Athena_SandSurface_C : public AGCNL_Athena_Surface_Parent_C
{
	unsigned char unreflected_972[0x6]; // 0x972 (0x6) 
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x978 (0x8)
	class UNiagaraComponent* FootStepFX; // 0x980 (0x8)
	bool bNotValid; // 0x988 (0x1)
	bool bReplayMode; // 0x989 (0x1)
	unsigned char unreflected_98a[0x6]; // 0x98a (0x6) 
	class AFortReplaySpectatorAthena* ReplayController; // 0x990 (0x8)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.OnPlayerFootstep (Has no native function)
	void OnPlayerFootstep(struct FVector& CallFuncGetVelocityReturnValue, struct FVector& CallFuncGetCachedStepSurfaceNormalReturnValue, bool& CallFuncIsValidReturnValue, class AActor*& CallFuncGetViewTargetReturnValue, bool& CallFuncOnSameTeamReturnValue, bool& CallFuncIsValidReturnValue1, int& CallFuncGetCachedFootstepIndexReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue, struct FTransform& CallFuncGetSocketTransformReturnValue1, struct FTransform& CallFuncSelectTransformReturnValue, struct FVector& CallFuncBreakTransformLocation, struct FRotator& CallFuncBreakTransformRotation, struct FVector& CallFuncBreakTransformScale, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncGetForwardVectorReturnValue, struct FVector4& CallFuncMakeVector4ReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct TArray<struct FVector4>& K2NodeMakeArrayArray, struct FVector& CallFuncSelectVectorReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.OnLoopingStartNiagara (Has no native function)
	void OnLoopingStartNiagara(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UNiagaraComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C.ExecuteUbergraph_GCNL_Athena_SandSurface (Has no native function)
	void ExecuteUbergraphGCNLAthenaSandSurface(int& EntryPoint, bool& CallFuncIsMobilePlatformReturnValue, bool& CallFuncNotPreBoolReturnValue, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UNiagaraComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, class UNiagaraComponent*& CallFuncArrayGetItem, bool& CallFuncOnLocalPlayersTeamReturnValue, bool& CallFuncGetIsPlayingReplayReturnValue, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, class AFortReplaySpectatorAthena*& K2NodeDynamicCastAsFortReplaySpectatorAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue); // (Final | 0x00008000 | HasDefaults)
};

