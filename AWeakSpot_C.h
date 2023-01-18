// BlueprintGeneratedClass /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C
// Size: 0x3c0
class AWeakSpot_C : public ABuildingWeakSpot
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x300 (0x8)
	class UStaticMeshComponent* ConnectTheDotsComponent; // 0x308 (0x8)
	class UParticleSystemComponent* ParticleComponent; // 0x310 (0x8)
	class UCapsuleComponent* CollisionComponent; // 0x318 (0x8)
	float ScaleDownParticleTLScaleDown544AE05F40294D09C3C361AB7BCF6C4E; // 0x320 (0x4)
	struct TEnumAsByte<ETimelineDirection> ScaleDownParticleTLDirection544AE05F40294D09C3C361AB7BCF6C4E; // 0x324 (0x1)
	unsigned char unreflected_325[0x3]; // 0x325 (0x3) 
	class UTimelineComponent* ScaleDownParticleTL; // 0x328 (0x8)
	class USoundBase* SpawnSound; // 0x330 (0x8)
	struct FVector ParticleLocation; // 0x338 (0x18)
	struct TArray<class USoundBase*> Cracksounds; // 0x350 (0x10)
	double ConnectTheDotsWidth; // 0x360 (0x8)
	double ConnectTheDotsDuration; // 0x368 (0x8)
	double ConnectTheDotsTimeoutFromPreviousHit; // 0x370 (0x8)
	double ConnectTheDotsDurationScale; // 0x378 (0x8)
	double ConnectTheDotsMaxDuration; // 0x380 (0x8)
	double ConnectTheDotsTileScale; // 0x388 (0x8)
	double ConnectTheDotsMinLength; // 0x390 (0x8)
	double ConnectTheDotsMaxLength; // 0x398 (0x8)
	class UParticleSystem* DamageTemplate; // 0x3a0 (0x8)
	class UParticleSystem* IdleTemplate; // 0x3a8 (0x8)
	class UMaterialInstanceDynamic* ConnectMID; // 0x3b0 (0x8)
	struct FTimerHandle* HideMeshTimer; // 0x3b8 (0x8)

	/* Functions */

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__FinishedFunc (Has no native function)
	void ScaleDownParticleTLFinishedFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ScaleDownParticleTL__UpdateFunc (Has no native function)
	void ScaleDownParticleTLUpdateFunc(); // (BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnFadeOut (Has no native function)
	void OnFadeOut(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnStartDirectionEffect (Has no native function)
	void OnStartDirectionEffect(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.OnHit (Has no native function)
	void OnHit(); // (Event | Public | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.HideMesh (Has no native function)
	void HideMesh(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/Effects/Fort_Effects/BluePrints/WeakPointEffect/WeakSpot.WeakSpot_C.ExecuteUbergraph_WeakSpot (Has no native function)
	void ExecuteUbergraphWeakSpot(int& EntryPoint, struct FVector& CallFuncConvFloatToVectorReturnValue, int& TempintArrayIndexVariable, struct FVector& CallFuncK2GetActorLocationReturnValue, bool& CallFuncGreaterIntIntReturnValue, bool& CallFuncEqualEqualIntIntReturnValue, double& CallFuncBreakVectorX, double& CallFuncBreakVectorY, double& CallFuncBreakVectorZ, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncSubtractVectorVectorReturnValue, struct FRotator& CallFuncConvVectorToRotatorReturnValue, struct FDelegate& K2NodeCreateDelegateOutputDelegate, double& CallFuncVSizeReturnValue, bool& CallFuncLessEqualDoubleDoubleReturnValue, bool& CallFuncGreaterEqualDoubleDoubleReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue, bool& CallFuncBooleanANDReturnValue, int& CallFuncFFloorReturnValue, bool& CallFuncBooleanANDReturnValue1, float& CallFuncConvIntToFloatReturnValue, double& CallFuncFMaxReturnValue, double& CallFuncMultiplyDoubleDoubleReturnValue1, double& CallFuncFClampReturnValue, double& CallFuncGetGameTimeInSecondsReturnValue, struct FTimerHandle*& CallFuncK2SetTimerDelegateReturnValue, struct FVector& CallFuncMakeVectorReturnValue1, struct FTransform& CallFuncMakeTransformReturnValue, struct FHitResult& CallFuncK2SetWorldTransformSweepHitResult, struct FVector& CallFuncK2GetActorLocationReturnValue1, class USoundBase*& CallFuncArrayGetItem, int& CallFuncArrayLengthReturnValue, int& CallFuncArrayLastIndexReturnValue, struct FVector& CallFuncK2GetActorLocationReturnValue2, int& CallFuncClampReturnValue, class USoundBase*& CallFuncArrayGetItem1, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast, double& CallFuncFMaxAImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1, float& CallFuncSetScalarParameterValueValueImplicitCast2, float& CallFuncSetScalarParameterValueValueImplicitCast3, float& CallFuncK2SetTimerDelegateTimeImplicitCast); // (Final | 0x00008000 | HasDefaults)
};

