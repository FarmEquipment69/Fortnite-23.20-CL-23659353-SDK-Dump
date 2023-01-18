// Class /Script/GameplayTasks.GameplayTask_WaitDelay
// Size: 0x78
class UGameplayTask_WaitDelay : public UGameplayTask
{
	struct FMulticastInlineDelegate OnFinish; // 0x60 (0x10)
	unsigned char padding_70[0x8]; // 0x70 (0x8)

	/* Functions */

	// Function /Script/GameplayTasks.GameplayTask_WaitDelay.TaskWaitDelay (Underlying native function: TaskWaitDelay 0xa03f8d4)
	static class UGameplayTask_WaitDelay* TaskWaitDelay(struct TScriptInterface<class IGameplayTaskOwnerInterface>& TaskOwner, float& Time, unsigned char& Priority); // (Final | Native | Static | Public | BlueprintCallable)

	// DelegateFunction /Script/GameplayTasks.GameplayTask_WaitDelay.TaskDelayDelegate__DelegateSignature (Has no native function)
	void TaskDelayDelegateDelegateSignature(); // (MulticastDelegate | Public | Delegate)
};

