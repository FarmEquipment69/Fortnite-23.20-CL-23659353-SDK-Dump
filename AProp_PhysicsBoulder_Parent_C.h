// BlueprintGeneratedClass /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C
// Size: 0xf68
class AProp_PhysicsBoulder_Parent_C : public ABuildingProp
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0xee8 (0x8)
	class UFortSoundIndicatorComponent* SoundIndicator; // 0xef0 (0x8)
	struct FVector LastImpactNormal; // 0xef8 (0x18)
	struct FScalableFloat VerticalImpulseRatio; // 0xf10 (0x28)
	double NextPotentialLaunchTime; // 0xf38 (0x8)
	double LaunchDelay; // 0xf40 (0x8)
	struct TArray<struct FScalableFloat> PlayerImpactTiers; // 0xf48 (0x10)
	struct TArray<struct FScalableFloat> PlayerImpulseTiers; // 0xf58 (0x10)

	/* Functions */

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.GetPlayerImpulseVelocityFromImpactVelocity (Has no native function)
	void GetPlayerImpulseVelocityFromImpactVelocity(double& Impact, bool& MinimumMet, double& Impulse, double& ReturnImpulseValue, int& TempintArrayIndexVariable, int& TempintLoopCounterVariable, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, int& CallFuncSubtractIntIntReturnValue, bool& CallFuncGreaterEqualIntIntReturnValue, struct FScalableFloat& CallFuncArrayGetItem, struct FScalableFloat& CallFuncArrayGetItem1, float& CallFuncGetValueAtLevelReturnValue, float& CallFuncGetValueAtLevelReturnValue1, bool& CallFuncGreaterEqualDoubleDoubleReturnValue1, int& CallFuncArrayLengthReturnValue, int& CallFuncSubtractIntIntReturnValue1, int& CallFuncMaxReturnValue, double& K2NodeVariableSetReturnImpulseValueImplicitCast, double& CallFuncGreaterEqualDoubleDoubleBImplicitCast); // (Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent | BlueprintPure)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ComponentHit (Has no native function)
	void ComponentHit(class UPrimitiveComponent*& HitComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, struct FVector& NormalImpulse, struct FHitResult& Hit); // (HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/Athena/Items/PhysicsActors/PhysicsBoulder/Prop_PhysicsBoulder_Parent.Prop_PhysicsBoulder_Parent_C.ExecuteUbergraph_Prop_PhysicsBoulder_Parent (Has no native function)
	void ExecuteUbergraphPropPhysicsBoulderParent(int& EntryPoint, struct FDelegate& K2NodeCreateDelegateOutputDelegate, class UPrimitiveComponent*& K2NodeCustomEventHitComponent, class AActor*& K2NodeCustomEventOtherActor, class UPrimitiveComponent*& K2NodeCustomEventOtherComp, struct FVector& K2NodeCustomEventNormalImpulse, struct FHitResult& K2NodeCustomEventHit, bool& CallFuncIsServerReturnValue, bool& CallFuncBreakHitResultbBlockingHit, bool& CallFuncBreakHitResultbInitialOverlap, float& CallFuncBreakHitResultTime, float& CallFuncBreakHitResultDistance, struct FVector& CallFuncBreakHitResultLocation, struct FVector& CallFuncBreakHitResultImpactPoint, struct FVector& CallFuncBreakHitResultNormal, struct FVector& CallFuncBreakHitResultImpactNormal, class UPhysicalMaterial*& CallFuncBreakHitResultPhysMat, class AActor*& CallFuncBreakHitResultHitActor, class UPrimitiveComponent*& CallFuncBreakHitResultHitComponent, struct FName& CallFuncBreakHitResultHitBoneName, struct FName& CallFuncBreakHitResultBoneName, int& CallFuncBreakHitResultHitItem, int& CallFuncBreakHitResultElementIndex, int& CallFuncBreakHitResultFaceIndex, struct FVector& CallFuncBreakHitResultTraceStart, struct FVector& CallFuncBreakHitResultTraceEnd, class AFortPlayerPawn*& K2NodeDynamicCastAsFortPlayerPawn, bool& K2NodeDynamicCastbSuccess, class UFortPhysicsObjectComponent*& CallFuncGetPhysicsObjectComponentReturnValue, class UPrimitiveComponent*& CallFuncGetMovementBaseReturnValue, bool& CallFuncIsActiveReturnValue, struct FVector& CallFuncGetVelocityReturnValue, double& CallFuncVSizeReturnValue, bool& CallFuncGetPlayerImpulseVelocityFromImpactVelocityMinimumMet, double& CallFuncGetPlayerImpulseVelocityFromImpactVelocityImpulse, struct FVector& CallFuncMultiplyVectorVectorReturnValue, struct FVector& CallFuncConvDoubleToVectorReturnValue, float& CallFuncGetValueAtLevelReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncAddVectorVectorReturnValue, bool& CallFuncEqualEqualObjectObjectReturnValue, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncMultiplyVectorVectorReturnValue1, double& CallFuncGetTimeSecondsReturnValue, double& CallFuncGetTimeSecondsReturnValue1, bool& CallFuncGreaterDoubleDoubleReturnValue, double& CallFuncAddDoubleDoubleReturnValue, double& CallFuncMakeVectorZImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

