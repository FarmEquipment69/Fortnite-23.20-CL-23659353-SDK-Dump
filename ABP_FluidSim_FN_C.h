// BlueprintGeneratedClass /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C
// Size: 0x728
class ABP_FluidSim_FN_C : public ABP_FluidSim_01_C
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x568 (0x8)
	struct FFluidForceDynamic BoatForceSettings; // 0x570 (0x70)
	struct FFluidForceDynamic PlayerForceSettings; // 0x5e0 (0x70)
	struct FFluidForceDynamic MechForceSettings; // 0x650 (0x70)
	struct TArray<class AFortPawn*> RelevantFortPawns; // 0x6c0 (0x10)
	bool UseFNPawnForces; // 0x6d0 (0x1)
	unsigned char unreflected_6d1[0x7]; // 0x6d1 (0x7) 
	struct TMap<struct FGameplayTag, struct FFluidForceDynamic> VehicleTypeMap; // 0x6d8 (0x50)

	/* Functions */

	// Function /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C.GetFortnitePawnForces (Has no native function)
	void GetFortnitePawnForces(struct TMap<class UActorComponent*, struct FFluidForceDynamicPerInstanceData>& PreviousDynamicForces, struct TArray<class AFortPawn*>& RelevantPawns, int& LastCheckedIndex, struct TArray<class AFortPawn*>& NearbyPawns, bool& TempboolTrueifbreakwashitVariable, struct TArray<struct FGameplayTag>& CallFuncMapKeysKeys, int& CallFuncArrayLengthReturnValue, bool& CallFuncNotPreBoolReturnValue, int& CallFuncGetShallowWaterMaxDynamicForcesReturnValue, int& TempintArrayIndexVariable, int& TempintArrayIndexVariable1, struct FGameplayTag& CallFuncArrayGetItem, struct FFluidForceDynamic& CallFuncMapFindValue, bool& CallFuncMapFindReturnValue, int& TempintLoopCounterVariable, int& TempintArrayIndexVariable2, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncBooleanANDReturnValue, int& TempintLoopCounterVariable1, class AFortPawn*& CallFuncArrayGetItem1, int& CallFuncArrayLengthReturnValue1, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, bool& CallFuncLessIntIntReturnValue1, struct TScriptInterface<class IFortVehicleInterface>& CallFuncGetVehicleUInterfaceReturnValue, struct FGameplayTagContainer& CallFuncGetVehicleTagsReturnValue, bool& CallFuncIsInWaterReturnValue, bool& CallFuncHasTagReturnValue, bool& CallFuncBooleanANDReturnValue1, class USkeletalMeshComponent*& CallFuncGetSkeletalMeshComponentReturnValue, struct FFluidForceDynamicPerInstanceData& CallFuncMapFindValue1, bool& CallFuncMapFindReturnValue1, bool& CallFuncIsInVehicleReturnValue, bool& CallFuncIsValidReturnValue, struct FFluidForceDynamicPerInstanceData& CallFuncMapFindValue2, bool& CallFuncMapFindReturnValue2, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn1, bool& K2NodeDynamicCastbSuccess1, bool& CallFuncIsValidReturnValue1, class AFortCharacterVehicle*& K2NodeDynamicCastAsFortCharacterVehicle, bool& K2NodeDynamicCastbSuccess2, class AFortWaterBodyActor*& CallFuncGetCurrentWaterBodyReturnValue, struct FVector& CallFuncK2GetComponentLocationReturnValue, bool& CallFuncIsValidReturnValue2, struct FWaterSurfaceInfo& CallFuncGetWaterSurfaceInfoStructOutWaterSurfaceInfo, int& CallFuncAddIntIntReturnValue1, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FFluidForceDynamicPerInstanceData& K2NodeSetFieldsInStructStructOut, int& TempintLoopCounterVariable2, int& CallFuncAddIntIntReturnValue2, class AFortPawn*& CallFuncArrayGetItem2, int& CallFuncArrayLengthReturnValue2, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn2, bool& K2NodeDynamicCastbSuccess3, bool& CallFuncLessIntIntReturnValue2, int& CallFuncArrayAddReturnValue, bool& CallFuncIsDrivingVehicleReturnValue, int& CallFuncGetSignificanceLODReturnValue, class APawn*& CallFuncGetLocalPawnPawn, bool& CallFuncEqualEqualIntIntReturnValue, bool& CallFuncIsValidReturnValue3, bool& CallFuncBooleanORReturnValue, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn3, bool& K2NodeDynamicCastbSuccess4, int& CallFuncArrayAddUniqueReturnValue, int& CallFuncArrayLengthReturnValue3, bool& CallFuncLessIntIntReturnValue3, int& CallFuncPercentIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue1, double& CallFuncMultiplyDoubleDoubleReturnValue, struct TArray<class AFortPawn*>& CallFuncGetFortPawnsInRangeOutFortPawns, float& K2NodeSetFieldsInStructWaterLevel34A4E505D148073B883CA7B1B09A3E34A8ImplicitCast, float& CallFuncGetFortPawnsInRangeRangeImplicitCast); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C.GetLocalPawn (Has no native function)
	void GetLocalPawn(class APawn*& Pawn, class AFortPlayerController*& CallFuncGetFirstLocalFortPlayerControllerReturnValue, bool& CallFuncIsValidReturnValue, class APawn*& CallFuncK2GetPawnReturnValue); // (Public | HasOutParms | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C.GetPlayerPawnForces (Has no native function)
	void GetPlayerPawnForces(); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Apollo/Water/Blueprints/BP_FluidSim_FN.BP_FluidSim_FN_C.ExecuteUbergraph_BP_FluidSim_FN (Has no native function)
	void ExecuteUbergraphBPFluidSimFN(int& EntryPoint); // (Final | 0x00008000)
};

