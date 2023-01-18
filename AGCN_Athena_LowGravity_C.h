// BlueprintGeneratedClass /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C
// Size: 0x3e8
class AGCN_Athena_LowGravity_C : public AFortGameplayCueNotifyLoop_LowGravity
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x3b0 (0x8)
	class AActor* MyTargetCached; // 0x3b8 (0x8)
	struct FTimerHandle* ExpireTellDelayTimer; // 0x3c0 (0x8)
	double ExpirationSoundPeriod; // 0x3c8 (0x8)
	struct FTimerHandle* ExpirationSoundTimer; // 0x3d0 (0x8)
	double MaxDrawDistance; // 0x3d8 (0x8)
	class UFXSystemComponent* LoopingFX; // 0x3e0 (0x8)

	/* Functions */

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.Activated (Has no native function)
	void Activated(class AActor*& PlayerPawn, class AFortPawn*& K2NodeDynamicCastAsFortPawn, bool& K2NodeDynamicCastbSuccess, double& CallFuncSubtractDoubleDoubleReturnValue, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult, float& CallFuncEvaluateCurveTableRowOutXY, double& CallFuncGetTimeSecondsReturnValue, bool& K2NodeSwitchEnumCmpSuccess, struct TEnumAsByte<EEvaluateCurveTableResult>& CallFuncEvaluateCurveTableRowOutResult1, float& CallFuncEvaluateCurveTableRowOutXY1, bool& K2NodeSwitchEnumCmpSuccess1, struct FDelegate& K2NodeCreateDelegateOutputDelegate, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, double& CallFuncSubtractDoubleDoubleBImplicitCast, double& CallFuncSubtractDoubleDoubleAImplicitCast, float& CallFuncK2SetTimerDelegateTimeImplicitCast, float& K2NodeVariableSetStartTimeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.WhileActive (Has no native function)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExpireTell (Has no native function)
	void ExpireTell(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.PlayExpirationSound (Has no native function)
	void PlayExpirationSound(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.K2_HandleGameplayCue (Has no native function)
	void K2HandleGameplayCue(class AActor*& MyTarget, struct TEnumAsByte<EGameplayCueEvent>& EventType, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ClearExpireTell (Has no native function)
	void ClearExpireTell(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Player/Athena/GCN_Athena_LowGravity.GCN_Athena_LowGravity_C.ExecuteUbergraph_GCN_Athena_LowGravity (Has no native function)
	void ExecuteUbergraphGCNAthenaLowGravity(int& EntryPoint, class USceneComponent*& CallFuncK2GetRootComponentReturnValue, class UAudioComponent*& CallFuncSpawnSoundAttachedReturnValue, class AActor*& K2NodeEventMyTarget, struct TEnumAsByte<EGameplayCueEvent>& K2NodeEventEventType, struct FGameplayCueParameters& K2NodeEventParameters, bool& K2NodeSwitchEnumCmpSuccess); // (Final | 0x00008000 | HasDefaults)
};

