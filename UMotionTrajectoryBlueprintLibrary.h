// Class /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary
// Size: 0x28
class UMotionTrajectoryBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.RotateTrajectory (Underlying native function: RotateTrajectory 0x5c2b730)
	static struct FTrajectorySampleRange RotateTrajectory(struct FTrajectorySampleRange& Trajectory, struct FQuat& Rotation); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.MakeTrajectoryRelativeToComponent (Underlying native function: MakeTrajectoryRelativeToComponent 0x5c2b440)
	static struct FTrajectorySampleRange MakeTrajectoryRelativeToComponent(struct FTrajectorySampleRange& ActorTrajectory, class USceneComponent*& Component); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.IsStoppingTrajectory (Underlying native function: IsStoppingTrajectory 0x5c2b2e0)
	static bool IsStoppingTrajectory(struct FTrajectorySampleRange& Trajectory, float& MoveMinSpeed, float& IdleMaxSpeed); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.IsStartingTrajectory (Underlying native function: IsStartingTrajectory 0x5c2b180)
	static bool IsStartingTrajectory(struct FTrajectorySampleRange& Trajectory, float& MoveMinSpeed, float& IdleMaxSpeed); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.IsSharpVelocityDirChange (Underlying native function: IsSharpVelocityDirChange 0x5c2aec0)
	static bool IsSharpVelocityDirChange(struct FTrajectorySampleRange& Trajectory, float& MinSharpTurnAngleDegrees, enum ETrajectorySampleDomain& RotationConstraintDomain, float& RotationConstraintValue, float& MaxAlignmentAngleDegrees, float& MinLinearSpeed, struct FVector& TurnAxis, struct FVector& ForwardAxis); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.IsConstantSpeedTrajectory (Underlying native function: IsConstantSpeedTrajectory 0x5c2ad60)
	static bool IsConstantSpeedTrajectory(struct FTrajectorySampleRange& Trajectory, float& Speed, float& Tolerance); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.FlattenTrajectory2D (Underlying native function: FlattenTrajectory2D 0x5c2a950)
	static struct FTrajectorySampleRange FlattenTrajectory2D(struct FTrajectorySampleRange& Trajectory, bool& PreserveSpeed); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.DebugDrawTrajectory (Underlying native function: DebugDrawTrajectory 0x5c2a540)
	static void DebugDrawTrajectory(class AActor*& Actor, struct FTransform& WorldTransform, struct FTrajectorySampleRange& Trajectory, struct FLinearColor& PredictionColor, struct FLinearColor& HistoryColor, float& TransformScale, float& TransformThickness, float& ArrowScale, float& ArrowSize, float& ArrowThickness); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MotionTrajectory.MotionTrajectoryBlueprintLibrary.ClampTrajectoryDirection (Underlying native function: ClampTrajectoryDirection 0x5c2a320)
	static struct FTrajectorySampleRange ClampTrajectoryDirection(struct FTrajectorySampleRange& Trajectory, struct TArray<struct FTrajectoryDirectionClamp>& Directions, bool& bPreserveRotation); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

