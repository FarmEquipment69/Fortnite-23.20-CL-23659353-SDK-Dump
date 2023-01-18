// Class /Script/AIModule.AITask_MoveTo
// Size: 0x110
class UAITask_MoveTo : public UAITask
{
	struct FMulticastInlineDelegate OnRequestFailed; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnMoveFinished; // 0x78 (0x10)
	struct FAIMoveRequest MoveRequest; // 0x88 (0x48)
	unsigned char padding_d0[0x40]; // 0xd0 (0x40)

	/* Functions */

	// Function /Script/AIModule.AITask_MoveTo.AIMoveTo (Underlying native function: AIMoveTo 0xa1e2cf4)
	static class UAITask_MoveTo* AIMoveTo(class AAIController*& Controller, struct FVector& GoalLocation, class AActor*& GoalActor, float& AcceptanceRadius, struct TEnumAsByte<EAIOptionFlag>& StopOnOverlap, struct TEnumAsByte<EAIOptionFlag>& AcceptPartialPath, bool& bUsePathfinding, bool& bLockAILogic, bool& bUseContinuousGoalTracking, struct TEnumAsByte<EAIOptionFlag>& ProjectGoalOnNavigation); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

