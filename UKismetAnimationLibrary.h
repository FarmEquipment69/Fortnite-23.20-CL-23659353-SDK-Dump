// Class /Script/AnimGraphRuntime.KismetAnimationLibrary
// Size: 0x28
class UKismetAnimationLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_TwoBoneIK (Underlying native function: K2_TwoBoneIK 0x99fea74)
	static void K2TwoBoneIK(struct FVector& RootPos, struct FVector& JointPos, struct FVector& EndPos, struct FVector& JointTarget, struct FVector& Effector, struct FVector& OutJointPos, struct FVector& OutEndPos, bool& bAllowStretching, float& StartStretchRatio, float& MaxStretchScale); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_StartProfilingTimer (Underlying native function: K2_StartProfilingTimer 0x99fea60)
	static void K2StartProfilingTimer(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseVectorAndRemap (Underlying native function: K2_MakePerlinNoiseVectorAndRemap 0x99fe7a8)
	static struct FVector K2MakePerlinNoiseVectorAndRemap(float& X, float& Y, float& Z, float& RangeOutMinX, float& RangeOutMaxX, float& RangeOutMinY, float& RangeOutMaxY, float& RangeOutMinZ, float& RangeOutMaxZ); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_MakePerlinNoiseAndRemap (Underlying native function: K2_MakePerlinNoiseAndRemap 0x99fe6ac)
	static float K2MakePerlinNoiseAndRemap(float& Value, float& RangeOutMin, float& RangeOutMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_LookAt (Underlying native function: K2_LookAt 0x99fe3d0)
	static struct FTransform K2LookAt(struct FTransform& CurrentTransform, struct FVector& TargetPosition, struct FVector& LookAtVector, bool& bUseUpVector, struct FVector& UpVector, float& ClampConeInDegree); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_EndProfilingTimer (Underlying native function: K2_EndProfilingTimer 0x99fe228)
	static float K2EndProfilingTimer(bool& bLog, struct FString& LogPrefix); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DistanceBetweenTwoSocketsAndMapRange (Underlying native function: K2_DistanceBetweenTwoSocketsAndMapRange 0x99fdf50)
	static float K2DistanceBetweenTwoSocketsAndMapRange(class USkeletalMeshComponent*& Component, struct FName& SocketOrBoneNameA, struct TEnumAsByte<ERelativeTransformSpace>& SocketSpaceA, struct FName& SocketOrBoneNameB, struct TEnumAsByte<ERelativeTransformSpace>& SocketSpaceB, bool& bRemapRange, float& InRangeMin, float& InRangeMax, float& OutRangeMin, float& OutRangeMax); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_DirectionBetweenSockets (Underlying native function: K2_DirectionBetweenSockets 0x99fde48)
	static struct FVector K2DirectionBetweenSockets(class USkeletalMeshComponent*& Component, struct FName& SocketOrBoneNameFrom, struct FName& SocketOrBoneNameTo); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromSockets (Underlying native function: K2_CalculateVelocityFromSockets 0x99fda40)
	static float K2CalculateVelocityFromSockets(float& DeltaSeconds, class USkeletalMeshComponent*& Component, struct FName& SocketOrBoneName, struct FName& ReferenceSocketOrBone, struct TEnumAsByte<ERelativeTransformSpace>& SocketSpace, struct FVector& OffsetInBoneSpace, struct FPositionHistory& History, int& NumberOfSamples, float& VelocityMin, float& VelocityMax, enum EEasingFuncType& EasingType, struct FRuntimeFloatCurve& CustomCurve); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.K2_CalculateVelocityFromPositionHistory (Underlying native function: K2_CalculateVelocityFromPositionHistory 0x99fd83c)
	static float K2CalculateVelocityFromPositionHistory(float& DeltaSeconds, struct FVector& Position, struct FPositionHistory& History, int& NumberOfSamples, float& VelocityMin, float& VelocityMax); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/AnimGraphRuntime.KismetAnimationLibrary.CalculateDirection (Underlying native function: CalculateDirection 0x99fa8d0)
	static float CalculateDirection(struct FVector& Velocity, struct FRotator& BaseRotation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)
};

