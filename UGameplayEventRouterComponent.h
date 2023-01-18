// Class /Script/GameplayEventRouter.GameplayEventRouterComponent
// Size: 0x270
class UGameplayEventRouterComponent : public UActorComponent
{
	unsigned char unreflected_270[0x270]; 

	/* Functions */

	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent (Underlying native function: StopListeningToEvent 0x7046b5c)
	void StopListeningToEvent(struct FGameplayEventListenerHandle& HandleToRemove); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent (Underlying native function: K2_BroadcastStatefulEvent 0x7046744)
	bool K2BroadcastStatefulEvent(int& EventData, class UObject*& EventContext); // (Final | Native | Protected | HasOutParms)

	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent (Underlying native function: K2_BroadcastEvent 0x7046638)
	bool K2BroadcastEvent(int& EventData, class UObject*& EventContext); // (Final | Native | Protected | HasOutParms | BlueprintCallable)

	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState (Underlying native function: HasValidEventState 0x704657c)
	bool HasValidEventState(class UScriptStruct*& EventType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/GameplayEventRouter.GameplayEventRouterComponent.ClearEventState (Underlying native function: ClearEventState 0x70460d8)
	void ClearEventState(class UScriptStruct*& EventType); // (Final | Native | Public | BlueprintCallable)
};

