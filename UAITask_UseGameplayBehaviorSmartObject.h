// Class /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject
// Size: 0xc8
class UAITask_UseGameplayBehaviorSmartObject : public UAITask
{
	struct FMulticastInlineDelegate OnSucceeded; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnFailed; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnMoveToFailed; // 0x88 (0x10)
	class UAITask_MoveTo* MoveToTask; // 0x98 (0x8)
	class UGameplayBehavior* GameplayBehavior; // 0xa0 (0x8)
	unsigned char padding_a8[0x20]; // 0xa8 (0x20)

	/* Functions */

	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseGameplayBehaviorSmartObject (Underlying native function: UseGameplayBehaviorSmartObject 0x7f6d898)
	static class UAITask_UseGameplayBehaviorSmartObject* UseGameplayBehaviorSmartObject(class AAIController*& Controller, class AActor*& SmartObjectActor, class USmartObjectComponent*& SmartObjectComponent, bool& bLockAILogic); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayBehaviorSmartObjectsModule.AITask_UseGameplayBehaviorSmartObject.UseClaimedGameplayBehaviorSmartObject (Underlying native function: UseClaimedGameplayBehaviorSmartObject 0x7f6d64c)
	static class UAITask_UseGameplayBehaviorSmartObject* UseClaimedGameplayBehaviorSmartObject(class AAIController*& Controller, struct FSmartObjectClaimHandle& ClaimHandle, bool& bLockAILogic); // (Final | Native | Static | Public | BlueprintCallable)
};

