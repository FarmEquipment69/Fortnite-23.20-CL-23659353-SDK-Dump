// BlueprintGeneratedClass /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C
// Size: 0x301
class ABP_ProjectileTrajectory_C : public AFortProjectileTrajectory
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x2b0 (0x8)
	class UStaticMeshComponent* InvalidTarget; // 0x2b8 (0x8)
	class UStaticMeshComponent* Target; // 0x2c0 (0x8)
	int MaxMeshCount; // 0x2c8 (0x4)
	unsigned char unreflected_2cc[0x4]; // 0x2cc (0x4) 
	class UMaterialInstanceDynamic* SplineMID; // 0x2d0 (0x8)
	double SplineFadeDistance; // 0x2d8 (0x8)
	double SplineFadeStartDistance; // 0x2e0 (0x8)
	class UObject* TrajectoryOwner; // 0x2e8 (0x8)
	bool ShouldUpdate; // 0x2f0 (0x1)
	unsigned char unreflected_2f1[0x7]; // 0x2f1 (0x7) 
	class UMaterialInstanceDynamic* InvalidSplineMID; // 0x2f8 (0x8)
	bool bIsTrajectoryValid; // 0x300 (0x1)

	/* Functions */

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetShouldUpdateFromOwner (Has no native function)
	void SetShouldUpdateFromOwner(bool& ShouldUpdate, class UObject*& Owner); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateFromTrajectoryOwner (Has no native function)
	void UpdateFromTrajectoryOwner(struct TScriptInterface<class IFortTrajectoryAbilityInterface>& K2NodeDynamicCastAsFortTrajectoryAbilityInterface, bool& K2NodeDynamicCastbSuccess); // (Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue, class UMaterialInstanceDynamic*& CallFuncCreateDynamicMaterialInstanceReturnValue1); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectorySpline (Has no native function)
	void SetTrajectorySpline(struct TArray<struct FVector>& SplinePoints, struct TArray<struct FVector>& SplineTangents); // (Event | Public | HasOutParms | BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.SetTrajectoryValid (Has no native function)
	void SetTrajectoryValid(bool& bIsTrajectoryValid); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.UpdateTargetMeshVisibility (Has no native function)
	void UpdateTargetMeshVisibility(); // (BlueprintCallable | BlueprintEvent)

	// Function /Game/BP_ProjectileTrajectory.BP_ProjectileTrajectory_C.ExecuteUbergraph_BP_ProjectileTrajectory (Has no native function)
	void ExecuteUbergraphBPProjectileTrajectory(int& EntryPoint, float& K2NodeEventDeltaSeconds, struct TArray<struct FVector>& K2NodeEventSplinePoints, struct TArray<struct FVector>& K2NodeEventSplineTangents, int& CallFuncArrayLastIndexReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, int& CallFuncArrayLengthReturnValue, bool& CallFuncGreaterIntIntReturnValue, struct FHitResult& CallFuncK2SetWorldLocationSweepHitResult, bool& K2NodeCustomEventbIsTrajectoryValid, int& CallFuncArrayLengthReturnValue1, int& TempintArrayIndexVariable, class USplineMeshComponent*& CallFuncArrayGetItem, int& TempintLoopCounterVariable, bool& CallFuncLessIntIntReturnValue, int& CallFuncAddIntIntReturnValue, bool& CallFuncNotPreBoolReturnValue, bool& CallFuncEqualEqualBoolBoolReturnValue, class UMaterialInstance*& CallFuncSelectMaterialInstanceReturnValue, float& CallFuncSetScalarParameterValueValueImplicitCast, float& CallFuncSetScalarParameterValueValueImplicitCast1); // (Final | 0x00008000 | HasDefaults)
};

