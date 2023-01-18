// Class /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction
// Size: 0xf0
class UAITask_UseGameplayInteraction : public UAITask
{
	struct FMulticastInlineDelegate OnFinished; // 0x68 (0x10)
	struct FGameplayInteractionContext GameplayInteractionContext; // 0x78 (0x60)
	struct FSmartObjectClaimHandle ClaimedHandle; // 0xd8 (0x10)
	struct FGameplayInteractionAbortContext AbortContext; // 0xe8 (0x1)
	unsigned char padding_e9[0x7]; // 0xe9 (0x7)

	/* Functions */

	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.UseClaimedGameplayInteractionSmartObject (Underlying native function: UseClaimedGameplayInteractionSmartObject 0x7f1d17c)
	static class UAITask_UseGameplayInteraction* UseClaimedGameplayInteractionSmartObject(class AAIController*& Controller, struct FSmartObjectClaimHandle& ClaimHandle, bool& bLockAILogic); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayInteractionsModule.AITask_UseGameplayInteraction.RequestAbort (Underlying native function: RequestAbort 0x7f1cf88)
	void RequestAbort(); // (Final | Native | Public | BlueprintCallable)
};

