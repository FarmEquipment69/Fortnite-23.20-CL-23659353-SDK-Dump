// Class /Script/FortniteGame.AsyncAction_WaitForScriptedActions
// Size: 0x60
class UAsyncAction_WaitForScriptedActions : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate Finished; // 0x30 (0x10)
	struct TWeakObjectPtr<class AFortScriptedActionManager> WeakActionManager; // 0x40 (0x8)
	unsigned char padding_48[0x18]; // 0x48 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.AsyncAction_WaitForScriptedActions.WaitForScriptedAction (Underlying native function: WaitForScriptedAction 0x82683d8)
	static class UAsyncAction_WaitForScriptedActions* WaitForScriptedAction(class UObject*& WorldContextObject, struct FFortClientEventName*& EventType); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AsyncAction_WaitForScriptedActions.WaitForMultipleScriptedActions (Underlying native function: WaitForMultipleScriptedActions 0x82682c0)
	static class UAsyncAction_WaitForScriptedActions* WaitForMultipleScriptedActions(class UObject*& WorldContextObject, struct TArray<struct FFortClientEventName*>& EventTypes); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AsyncAction_WaitForScriptedActions.WaitForAllScriptedActions (Underlying native function: WaitForAllScriptedActions 0x826803c)
	static class UAsyncAction_WaitForScriptedActions* WaitForAllScriptedActions(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/FortniteGame.AsyncAction_WaitForScriptedActions.OnFinishedDelegate__DelegateSignature (Has no native function)
	void OnFinishedDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

