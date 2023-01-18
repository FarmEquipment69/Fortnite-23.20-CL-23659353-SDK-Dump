// BlueprintGeneratedClass /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C
// Size: 0xd0
class UValet_GasPumpIndicatorManagerV2_C : public UFortGameStateComponent
{
	class UClass* FuelIndicatorClass; // 0xa0 (0x8)
	struct TArray<class UB_GasPump_Valet_Component_C*> GasPumpList; // 0xa8 (0x10)
	struct TArray<class AFuelIndicator_C*> FuelIndicatorList; // 0xb8 (0x10)
	double FuelIndicatorRangeSquared; // 0xc8 (0x8)

	/* Functions */

	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.RemoveGasPump (Has no native function)
	void RemoveGasPump(class UB_GasPump_Valet_Component_C*& GasPump, bool& FoundNearbyGasPump, struct TArray<class AFuelIndicator_C*>& RemovalList, int& TempintArrayIndexVariable, bool& CallFuncIsValidReturnValue, int& TempintArrayIndexVariable1, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, bool& TempboolTrueifbreakwashitVariable, int& TempintArrayIndexVariable2, bool& CallFuncNotPreBoolReturnValue, int& TempintLoopCounterVariable1, class AFuelIndicator_C*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue1, int& TempintLoopCounterVariable2, bool& CallFuncArrayRemoveItemReturnValue, int& CallFuncAddIntIntReturnValue2, class UB_GasPump_Valet_Component_C*& CallFuncArrayGetItem1, class AFuelIndicator_C*& CallFuncArrayGetItem2, class AActor*& CallFuncGetOwnerReturnValue, int& CallFuncArrayAddReturnValue, bool& CallFuncIsValidReturnValue1, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncIsValidReturnValue2, struct FVector& CallFuncK2GetActorLocationReturnValue1, double& CallFuncVectorDistance2DSquaredReturnValue, int& CallFuncArrayLengthReturnValue1, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncLessIntIntReturnValue1, int& CallFuncArrayLengthReturnValue2, bool& CallFuncLessIntIntReturnValue2, bool& CallFuncArrayRemoveItemReturnValue1, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Valet/GasPump/Valet_GasPumpIndicatorManagerV2.Valet_GasPumpIndicatorManagerV2_C.AddGasPump (Has no native function)
	void AddGasPump(class UB_GasPump_Valet_Component_C*& GasPump, bool& FoundNearbyFuelIndicator, bool& TempboolTrueifbreakwashitVariable, class AActor*& CallFuncGetOwnerReturnValue, struct FTransform& CallFuncGetTransformReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncIsValidReturnValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, int& CallFuncAddIntIntReturnValue, class AActor*& CallFuncBeginDeferredActorSpawnFromClassReturnValue, class AActor*& CallFuncFinishSpawningActorReturnValue, class AFuelIndicator_C*& K2NodeDynamicCastAsFuelIndicator, bool& K2NodeDynamicCastbSuccess, bool& CallFuncIsValidReturnValue1, int& CallFuncArrayAddReturnValue, class AFuelIndicator_C*& CallFuncArrayGetItem, int& CallFuncArrayAddUniqueReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue1, bool& CallFuncIsValidReturnValue2, double& CallFuncVectorDistance2DSquaredReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, int& CallFuncArrayLengthReturnValue, bool& CallFuncLessIntIntReturnValue, bool& CallFuncBooleanANDReturnValue); // (Public | HasDefaults | BlueprintCallable | BlueprintEvent)
};

