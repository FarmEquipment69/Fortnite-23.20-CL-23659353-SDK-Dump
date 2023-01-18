// Class /Script/FortniteGame.FortAsyncAction_InitialCalendarSyncCompleted
// Size: 0x48
class UFortAsyncAction_InitialCalendarSyncCompleted : public UBlueprintAsyncActionBase
{
	struct FMulticastInlineDelegate OnSyncComplete; // 0x30 (0x10)
	class UFortGameInstance* MyGameInstance; // 0x40 (0x8)

	/* Functions */

	// DelegateFunction /Script/FortniteGame.FortAsyncAction_InitialCalendarSyncCompleted.OnInitialCalendarSyncCompleted__DelegateSignature (Has no native function)
	void OnInitialCalendarSyncCompletedDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAsyncAction_InitialCalendarSyncCompleted.InitialCalendarSyncCompleted (Underlying native function: InitialCalendarSyncCompleted 0x8c421f0)
	static class UFortAsyncAction_InitialCalendarSyncCompleted* InitialCalendarSyncCompleted(class UObject*& WorldContextObject); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAsyncAction_InitialCalendarSyncCompleted.HandleInitialCalendarSyncCompleted (Underlying native function: HandleInitialCalendarSyncCompleted 0x8c41fa4)
	void HandleInitialCalendarSyncCompleted(); // (Final | Native | Protected)
};

