// Class /Script/AIModule.PawnActionsComponent
// Size: 0xd8
class UPawnActionsComponent : public UActorComponent
{
	class APawn* ControlledPawn; // 0xa0 (0x8)
	struct TArray<struct FPawnActionStack*> ActionStacks; // 0xa8 (0x10)
	struct TArray<struct FPawnActionEvent> ActionEvents; // 0xb8 (0x10)
	class UPawnAction* CurrentAction; // 0xc8 (0x8)
	unsigned char padding_d0[0x8]; // 0xd0 (0x8)

	/* Functions */

	// Function /Script/AIModule.PawnActionsComponent.K2_PushAction (Underlying native function: K2_PushAction 0xa17e44c)
	bool K2PushAction(class UPawnAction*& NewAction, struct TEnumAsByte<EAIRequestPriority>& Priority, class UObject*& Instigator); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.PawnActionsComponent.K2_PerformAction (Underlying native function: K2_PerformAction 0xa17e344)
	static bool K2PerformAction(class APawn*& Pawn, class UPawnAction*& Action, struct TEnumAsByte<EAIRequestPriority>& Priority); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/AIModule.PawnActionsComponent.K2_ForceAbortAction (Underlying native function: K2_ForceAbortAction 0xa17e2b8)
	struct TEnumAsByte<EPawnActionAbortState> K2ForceAbortAction(class UPawnAction*& ActionToAbort); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/AIModule.PawnActionsComponent.K2_AbortAction (Underlying native function: K2_AbortAction 0xa17e204)
	struct TEnumAsByte<EPawnActionAbortState> K2AbortAction(class UPawnAction*& ActionToAbort); // (Final | Native | Public | BlueprintCallable)
};

