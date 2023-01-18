// BlueprintGeneratedClass /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
// Size: 0x558
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x528 (0x8)
	float CapsuleFadeTLRemoveShadowD18D776D462C2233B7D3E1B7577403C1; // 0x530 (0x4)
	struct TEnumAsByte<ETimelineDirection> CapsuleFadeTLDirectionD18D776D462C2233B7D3E1B7577403C1; // 0x534 (0x1)
	unsigned char unreflected_535[0x3]; // 0x535 (0x3) 
	class UTimelineComponent* CapsuleFadeTL; // 0x538 (0x8)
	double StartingMinCapsuleShadowVis; // 0x540 (0x8)
	struct TArray<class USkeletalMeshComponent*> SkeletalMesh; // 0x548 (0x10)

	/* Functions */

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.SkeletalMeshSetup (Has no native function)
	void SkeletalMeshSetup(class AFortPlayerPawn*& FortPawn, class USkeletalMeshComponent*& TempobjectVariable, int& CallFuncMakeLiteralIntReturnValue, int& TempintVariable, int& TempintVariable1, unsigned char& CallFuncConvIntToByteReturnValue, int& CallFuncAddIntIntReturnValue, unsigned char& CallFuncGetValidValueReturnValue, unsigned char& CallFuncConvIntToByteReturnValue1, bool& CallFuncLessIntIntReturnValue, unsigned char& CallFuncGetEnumeratorValueFromIndexReturnValue, int& CallFuncConvByteToIntReturnValue, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshForPartTypeReturnValue, bool& CallFuncArrayRemoveItemReturnValue, int& CallFuncArrayAddReturnValue); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__FinishedFunc (Has no native function)
	void CapsuleFadeTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.CapsuleFadeTL__UpdateFunc (Has no native function)
	void CapsuleFadeTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/Death/GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C.ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW (Has no native function)
	void ExecuteUbergraphGCAbilitiesDeathFadeCapsuleStW(int& EntryPoint, bool& CallFuncIsDedicatedServerReturnValue, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, int& TempintArrayIndexVariable, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& K2NodeSwitchEnumCmpSuccess, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, double& CallFuncLerpReturnValue, int& CallFuncArrayLengthReturnValue, class USkeletalMeshComponent*& CallFuncArrayGetItem, bool& CallFuncLessIntIntReturnValue, double& CallFuncLerpAlphaImplicitCast, double& K2NodeVariableSetStartingMinCapsuleShadowVisImplicitCast, float& CallFuncSetCapsuleIndirectShadowMinVisibilityNewValueImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

