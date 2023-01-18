// Class /Script/GameplayInteractionsModule.GameplayTask_MoveTo
// Size: 0x210
class UGameplayTask_MoveTo : public UGameplayTask
{
	unsigned char unreflected_60[0x8]; // 0x60 (0x8) 
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnCompleted; // 0x78 (0x10)
	class UCharacterMovementComponent* MovementComponent; // 0x88 (0x8)
	class UGameplayActuationComponent* ActuationComponent; // 0x90 (0x8)
	struct FAIMoveRequest MoveRequest; // 0x98 (0x48)
	unsigned char unreflected_e0[0x120]; // 0xe0 (0x120) 
	class UGameplayTask* StartTransitionTask; // 0x200 (0x8)
	class UGameplayTask* EndTransitionTask; // 0x208 (0x8)

	/* Functions */

	// Function /Script/GameplayInteractionsModule.GameplayTask_MoveTo.MoveTo (Underlying native function: MoveTo 0x7f1c8e4)
	static class UGameplayTask_MoveTo* MoveTo(class AActor*& Actor, struct FVector& GoalLocation, class AActor*& GoalActor, enum EGameplayTaskMoveToIntent& EndOfPathIntent, float& AcceptanceRadius, struct TEnumAsByte<EAIOptionFlag>& StopOnOverlap, struct TEnumAsByte<EAIOptionFlag>& AcceptPartialPath, bool& bUsePathfinding, bool& bUseContinuousGoalTracking, struct TEnumAsByte<EAIOptionFlag>& ProjectGoalOnNavigation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

