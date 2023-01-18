// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C
// Size: 0x558
class AGC_Abilities_Death_FadeCapsule_Athena_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	float CapsuleFadeTLRemoveShadowB48F4431426ECD264BA37C992B6887C3; // 0x530 (0x4)
	struct TEnumAsByte<ETimelineDirection> CapsuleFadeTLDirectionB48F4431426ECD264BA37C992B6887C3; // 0x534 (0x1)
	unsigned char unreflected_535[0x3]; // 0x535 (0x3) 
	class UTimelineComponent* CapsuleFadeTL; // 0x538 (0x8)
	double StartingMinCapsuleShadowVis; // 0x540 (0x8)
	struct TArray<class USkeletalMeshComponent*> SkeletalMesh; // 0x548 (0x10)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.SkeletalMeshSetup (Has no native function)
	void SkeletalMeshSetup(class AFortPlayerPawnAthena*& FortPawn, class USkeletalMeshComponent*& TempobjectVariable, int& CallFuncMakeLiteralIntReturnValue, int& TempintVariable, int& TempintVariable1, unsigned char& CallFuncConvIntToByteReturnValue, int& CallFuncAddIntIntReturnValue, unsigned char& CallFuncGetValidValueReturnValue, unsigned char& CallFuncConvIntToByteReturnValue1, bool& CallFuncLessIntIntReturnValue, unsigned char& CallFuncGetEnumeratorValueFromIndexReturnValue, int& CallFuncConvByteToIntReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, bool& CallFuncArrayRemoveItemReturnValue, int& CallFuncArrayAddReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__FinishedFunc (Has no native function)
	void CapsuleFadeTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.CapsuleFadeTL__UpdateFunc (Has no native function)
	void CapsuleFadeTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_Athena.GC_Abilities_Death_FadeCapsule_Athena_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_Athena (Has no native function)
	void ExecuteUbergraphGCAbilitiesDeathFadeCapsuleAthena(int& EntryPoint, bool& CallFuncIsDedicatedServerReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& K2NodeSwitchEnumCmpSuccess, class AFortPlayerPawnAthena*& K2NodeDynamicCastAsFortPlayerPawnAthena, bool& K2NodeDynamicCastbSuccess, double& CallFuncLerpReturnValue, int& CallFuncArrayLengthReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, double& CallFuncLerpAlphaImplicitCast, double& K2NodeVariableSetStartingMinCapsuleShadowVisImplicitCast, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

