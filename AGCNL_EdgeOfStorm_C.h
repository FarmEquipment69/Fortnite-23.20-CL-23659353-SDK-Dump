// BlueprintGeneratedClass /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C
// Size: 0x979
class AGCNL_EdgeOfStorm_C : public AFortGameplayCueNotify_Loop
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x960 (0x8)
	class UAudioComponent* Audio; // 0x968 (0x8)
	class AFortPlayerPawn* StormPawn; // 0x970 (0x8)
	bool bBoundAudioPercent; // 0x978 (0x1)

	/* Functions */

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnExecute (Has no native function)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Activated (Has no native function)
	void Activated(struct FVector& EdgeOfStorm); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.Deactivated (Has no native function)
	void Deactivated(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/GameplayCueNotifies/StWStorm/GCNL_EdgeOfStorm.GCNL_EdgeOfStorm_C.ExecuteUbergraph_GCNL_EdgeOfStorm (Has no native function)
	void ExecuteUbergraphGCNLEdgeOfStorm(int& EntryPoint, bool& TempboolHasBeenInitdVariable, struct FVector& K2NodeCustomEventEdgeOfStorm, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, bool& TempboolIsClosedVariable); // (Final | 0x00008000 | HasDefaults)
};

