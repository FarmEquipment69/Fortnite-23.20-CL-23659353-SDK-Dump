// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent
// Size: 0xa0
class UAsyncAction_StartListeningToStatefulEvent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnEventReceived; // 0x30 (0x10)
	struct FMulticastInlineDelegate OnSavedEventStateExists; // 0x40 (0x10)
	struct FMulticastInlineDelegate OnEventStateCleared; // 0x50 (0x10)
	unsigned char padding_60[0x40]; // 0x60 (0x40)

	/* Functions */

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent (Underlying native function: StopListeningToStatefulEvent 0x7046bf4)
	void StopListeningToStatefulEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent (Underlying native function: StartListeningToStatefulEvent 0x70469cc)
	static class UAsyncAction_StartListeningToStatefulEvent* StartListeningToStatefulEvent(class UObject*& WorldContextObject, class UGameplayEventRouterComponent*& Target, class UScriptStruct*& EventType, class UObject*& Context, enum EEventBubblingRule& EventBubblingRule); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload (Underlying native function: GetPayload 0x704645c)
	bool GetPayload(int& OutPayload); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

