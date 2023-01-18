// Class /Script/FortniteGame.FortAbilityTask_MoveAI
// Size: 0x190
class UFortAbilityTask_MoveAI : public UFortAITask_Move
{
	struct FMulticastInlineDelegate OnComplete; // 0x158 (0x10)
	struct FMulticastInlineDelegate OnInterrupted; // 0x168 (0x10)
	struct FMulticastInlineDelegate OnCancelled; // 0x178 (0x10)
	unsigned char padding_188[0x8]; // 0x188 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAbilityTask_MoveAI.CreateMoveAITask (Underlying native function: CreateMoveAITask 0x813f8a8)
	static class UFortAbilityTask_MoveAI* CreateMoveAITask(class UGameplayAbility*& OwningAbility, struct FName& TaskInstanceName, class AActor*& MoveActor, struct FVector& MoveLocation, struct TEnumAsByte<EPawnActionMoveMode>& MoveMode, struct TEnumAsByte<EPathObstacleAction>& PathObstacleAction, bool& bStopAtEnd, struct TEnumAsByte<EAIOptionFlag>& AcceptPartialPath, bool& bFinishOnPlayerCollision, bool& bProjectGoalLocationOnNavMesh, float& AcceptableRadius, class UClass*& PushBumpedPawnClass, class UClass*& FilterClass, struct FGameplayTag& NavFilterTag, bool& bUseContinuousGoalTracking); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)
};

