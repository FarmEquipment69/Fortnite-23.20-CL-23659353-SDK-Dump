// BlueprintGeneratedClass /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C
// Size: 0x68
class UGCN_BoostJumpPack_Equipped_C : public UFortGameplayCueNotify_Simple
{

	/* Functions */

	// Function /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.OnExecute (Has no native function)
	bool OnExecute(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetMaxFuel (Has no native function)
	double GetMaxFuel(class APlayerPawn_Athena_C*& PlayerPawn); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuel (Has no native function)
	double GetFuel(class APlayerPawn_Athena_C*& PlayerPawn); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.GetFuelPercent (Has no native function)
	void GetFuelPercent(class APlayerPawn_Athena_C*& PlayerPawn, double& FuelPercent, double& CallFuncGetFuelReturnValue, double& CallFuncGetMaxFuelReturnValue, double& CallFuncDivideDoubleDoubleReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)

	// Function /Game/Athena/GameplayCueNotifies/GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C.WhileActive (Has no native function)
	bool WhileActive(class AActor*& MyTarget, struct FGameplayCueParameters& Parameters); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure | Const)
};

