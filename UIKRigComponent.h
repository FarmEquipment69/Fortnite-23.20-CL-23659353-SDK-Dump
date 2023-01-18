// Class /Script/IKRig.IKRigComponent
// Size: 0xb8
class UIKRigComponent : public UActorComponent
{
	unsigned char unreflected_b8[0xb8]; 

	/* Functions */

	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalTransform (Underlying native function: SetIKRigGoalTransform 0x7ca7710)
	void SetIKRigGoalTransform(struct FName& GoalName, struct FTransform& Transform, float& PositionAlpha, float& RotationAlpha); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/IKRig.IKRigComponent.SetIKRigGoalPositionAndRotation (Underlying native function: SetIKRigGoalPositionAndRotation 0x7ca7568)
	void SetIKRigGoalPositionAndRotation(struct FName& GoalName, struct FVector& Position, struct FQuat& Rotation, float& PositionAlpha, float& RotationAlpha); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/IKRig.IKRigComponent.SetIKRigGoal (Underlying native function: SetIKRigGoal 0x7ca74cc)
	void SetIKRigGoal(struct FIKRigGoal& Goal); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/IKRig.IKRigComponent.ClearAllGoals (Underlying native function: ClearAllGoals 0x7ca5a64)
	void ClearAllGoals(); // (Final | Native | Public | BlueprintCallable)
};

