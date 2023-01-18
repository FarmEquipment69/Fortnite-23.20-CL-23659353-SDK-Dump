// BlueprintGeneratedClass /Game/Effects/Niagara/Blueprints/FN_NiagaraNotify.FN_NiagaraNotify_C
// Size: 0xd5
class UFN_NiagaraNotify_C : public UAnimNotify_PlayNiagaraEffect
{
	bool SetinWaterNiagaraVariable; // 0xd0 (0x1)
	bool PrintDebug; // 0xd1 (0x1)
	bool isGliderDeployNotify; // 0xd2 (0x1)
	bool IsLargeBodyPawn; // 0xd3 (0x1)
	bool AddtoPawnHighlightSet; // 0xd4 (0x1)

	/* Functions */

	// Function /Game/Effects/Niagara/Blueprints/FN_NiagaraNotify.FN_NiagaraNotify_C.Apply Water Parameters (Has no native function)
	void ApplyWaterParameters(class AFortPlayerPawnAthena*& PlayerPawn, class UNiagaraComponent*& NiagaraSystem, bool& isFrontEnd, struct FVector& WaterSurfaceNormal, struct FVector& WaterSurfaceLocation, double& waterImmersionDepth, int& waveParamTextureOffset, bool& IsInWater, class UFortMovementComp_Character*& FortMovementComp, class APlayerPawn_Athena_C*& AthenaPlayerPawn, class UNiagaraComponent*& NiagaraSystem, class APlayerPawn_Athena_C*& K2NodeDynamicCastAsPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsSurfaceSwimmingReturnValue, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncBooleanORReturnValue, class UFortMovementComp_Character*& K2NodeDynamicCastAsFortMovementCompCharacter, bool& K2NodeDynamicCastbSuccess1, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue1, struct FVector& CallFuncGetWaterSurfaceNormalReturnValue, struct FVector& CallFuncGetWaterSurfaceLocationReturnValue, float& CallFuncGetWaterImmersionDepthReturnValue, float& CallFuncSetVariableFloatInValueImplicitCast, double& K2NodeVariableSetwaterImmersionDepthImplicitCast); // (Public | BlueprintCallable | BlueprintEvent | Const)

	// Function /Game/Effects/Niagara/Blueprints/FN_NiagaraNotify.FN_NiagaraNotify_C.Received_Notify (Has no native function)
	bool ReceivedNotify(class USkeletalMeshComponent*& MeshComp, class UAnimSequenceBase*& Animation, struct FAnimNotifyEventReference& EventReference); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | Const)
};

