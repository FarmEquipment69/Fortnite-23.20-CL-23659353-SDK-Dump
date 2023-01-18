// BlueprintGeneratedClass /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C
// Size: 0x378
class AGCNL_PurpleStuff_C : public AFortGameplayCueNotify_Looping
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x368 (0x8)
	class APlayerPawn_Athena_Generic_C* PlayerActor; // 0x370 (0x8)

	/* Functions */

	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnRemove (Has no native function)
	bool OnRemove(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.OnActive (Has no native function)
	bool OnActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Abilities/Items/GCNL_PurpleStuff.GCNL_PurpleStuff_C.ExecuteUbergraph_GCNL_PurpleStuff (Has no native function)
	void ExecuteUbergraphGCNLPurpleStuff(int& EntryPoint, struct FGameplayCueParameters& CallFuncMakeGameplayCueParametersReturnValue, bool& CallFuncIsValidReturnValue, float& CallFuncGetShieldReturnValue, bool& CallFuncGreaterDoubleDoubleReturnValue, float& K2NodeEventDeltaSeconds, double& CallFuncGreaterDoubleDoubleAImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

