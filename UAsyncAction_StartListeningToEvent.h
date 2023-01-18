// Class /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent
// Size: 0x80
class UAsyncAction_StartListeningToEvent : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnEventReceived; // 0x30 (0x10)
	unsigned char padding_40[0x40]; // 0x40 (0x40)

	/* Functions */

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent (Underlying native function: StopListeningToEvent 0x7046b48)
	void StopListeningToEvent(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent (Underlying native function: StartListeningToEvent 0x7046850)
	static class UAsyncAction_StartListeningToEvent* StartListeningToEvent(class UObject*& WorldContextObject, class UGameplayEventRouterComponent*& Target, class UScriptStruct*& EventType, class UObject*& Context, enum EEventBubblingRule& EventBubblingRule); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload (Underlying native function: GetPayload 0x704633c)
	bool GetPayload(int& OutPayload); // (Final | Native | Public | HasOutParms | BlueprintCallable)
};

