// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C
// Size: 0x979
class AGCNL_Athena_Player_Sliding_Speedlines_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UFXSystemComponent* DustFX; // 0x968 (0x8)
	class UFortMovementComp_Character* CachedMovementCmponent; // 0x970 (0x8)
	bool bIsGraceFalling; // 0x978 (0x1)

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.OnLoopingStartGeneric (Has no native function)
	void OnLoopingStartGeneric(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters, struct TArray<class UFXSystemComponent*>& ParticleComponents, struct TArray<class UAudioComponent*>& AudioComponents); // (Event | Public | HasOutParms | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Athena/GameplayCueNotifies/GCNL_Athena_Player_Sliding_Speedlines.GCNL_Athena_Player_Sliding_Speedlines_C.ExecuteUbergraph_GCNL_Athena_Player_Sliding_Speedlines (Has no native function)
	void ExecuteUbergraphGCNLAthenaPlayerSlidingSpeedlines(int& EntryPoint, class AActor*& K2NodeEventMyTarget, struct FGameplayCueParameters& K2NodeEventParameters, struct TArray<class UFXSystemComponent*>& K2NodeEventParticleComponents, struct TArray<class UAudioComponent*>& K2NodeEventAudioComponents, float& K2NodeEventDeltaSeconds, class UFXSystemComponent*& CallFuncArrayGetItem, class UFortMovementComp_Character*& CallFuncGetComponentByClassReturnValue, bool& CallFuncIsValidReturnValue, bool& CallFuncIsValidReturnValue1, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncNotEqualBoolBoolReturnValue); // (Final | 0x00008000 | HasDefaults)
};

