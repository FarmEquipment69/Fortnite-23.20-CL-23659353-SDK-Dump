// Class /Script/AIModule.BTTask_BlueprintBase
// Size: 0xa8
class UBTTask_BlueprintBase : public UBTTaskNode
{
	class AAIController* AIOwner; // 0x70 (0x8)
	class AActor* ActorOwner; // 0x78 (0x8)
	struct FIntervalCountdown* TickInterval; // 0x80 (0x8)
	unsigned char unreflected_88[0x18]; // 0x88 (0x18) 
	unsigned char bShowPropertyDetails; // 0xa0 (0x1)
	unsigned char padding_a1[0x7]; // 0xa1 (0x7)

	/* Functions */

	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessageWithId (Underlying native function: SetFinishOnMessageWithId 0xa1bb51c)
	void SetFinishOnMessageWithId(struct FName& MessageName, int& RequestId); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/AIModule.BTTask_BlueprintBase.SetFinishOnMessage (Underlying native function: SetFinishOnMessage 0xa1bb480)
	void SetFinishOnMessage(struct FName& MessageName); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTickAI (Has no native function)
	void ReceiveTickAI(class AAIController*& OwnerController, class APawn*& ControlledPawn, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveTick (Has no native function)
	void ReceiveTick(class AActor*& OwnerActor, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecuteAI (Has no native function)
	void ReceiveExecuteAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveExecute (Has no native function)
	void ReceiveExecute(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbortAI (Has no native function)
	void ReceiveAbortAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.ReceiveAbort (Has no native function)
	void ReceiveAbort(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskExecuting (Underlying native function: IsTaskExecuting 0xa1bab98)
	bool IsTaskExecuting(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BTTask_BlueprintBase.IsTaskAborting (Underlying native function: IsTaskAborting 0xa1bab7c)
	bool IsTaskAborting(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BTTask_BlueprintBase.FinishExecute (Underlying native function: FinishExecute 0xa1ba428)
	void FinishExecute(bool& bSuccess); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/AIModule.BTTask_BlueprintBase.FinishAbort (Underlying native function: FinishAbort 0xa1ba3c0)
	void FinishAbort(); // (Final | Native | Protected | BlueprintCallable)
};

