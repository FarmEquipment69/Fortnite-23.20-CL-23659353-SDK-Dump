// BlueprintGeneratedClass /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C
// Size: 0x2b0
class ASunDirectionandColorSet_C : public AActor
{
	struct FPointerToUberGraphFrame* UberGraphFrame; // 0x288 (0x8)
	class USceneComponent* Scene; // 0x290 (0x8)
	class UArrowComponent* Arrow; // 0x298 (0x8)
	struct FLinearColor SunLightColor; // 0x2a0 (0x10)

	/* Functions */

	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.UserConstructionScript (Has no native function)
	void UserConstructionScript(struct FRotator& CallFuncK2GetComponentRotationReturnValue, struct FVector& CallFuncGetForwardVectorReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FVector& CallFuncNormalReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FVector& CallFuncNormalReturnValue1, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast); // (Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveBeginPlay (Has no native function)
	void ReceiveBeginPlay(); // (Event | Protected | BlueprintEvent)

	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ReceiveTick (Has no native function)
	void ReceiveTick(float& DeltaSeconds); // (Event | Public | BlueprintEvent)

	// Function /Game/Tools/Turntable_2/SunDirectionandColorSet.SunDirectionandColorSet_C.ExecuteUbergraph_SunDirectionandColorSet (Has no native function)
	void ExecuteUbergraphSunDirectionandColorSet(int& EntryPoint, float& K2NodeEventDeltaSeconds, struct FVector& CallFuncGetForwardVectorReturnValue, struct FRotator& CallFuncK2GetComponentRotationReturnValue, struct FVector& CallFuncNormalReturnValue, float& CallFuncBreakRotatorRoll, float& CallFuncBreakRotatorPitch, float& CallFuncBreakRotatorYaw, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue, struct FVector& CallFuncMakeVectorReturnValue, struct FVector& CallFuncNormalReturnValue1, struct FLinearColor& CallFuncConvVectorToLinearColorReturnValue1, double& CallFuncMakeVectorXImplicitCast, double& CallFuncMakeVectorYImplicitCast, double& CallFuncMakeVectorZImplicitCast); // (Final | 0x00008000)
};

