// Class /Script/AIModule.BTDecorator_BlueprintBase
// Size: 0xa0
class UBTDecorator_BlueprintBase : public UBTDecorator
{
	class AAIController* AIOwner; // 0x68 (0x8)
	class AActor* ActorOwner; // 0x70 (0x8)
	struct TArray<struct FName> ObservedKeyNames; // 0x78 (0x10)
	unsigned char unreflected_88[0x10]; // 0x88 (0x10) 
	unsigned char bShowPropertyDetails; // 0x98 (0x1)
	unsigned char bCheckConditionOnlyBlackBoardChanges; // 0x98 (0x1)
	unsigned char bIsObservingBB; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)

	/* Functions */

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTickAI (Has no native function)
	void ReceiveTickAI(class AAIController*& OwnerController, class APawn*& ControlledPawn, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveTick (Has no native function)
	void ReceiveTick(class AActor*& OwnerActor, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivatedAI (Has no native function)
	void ReceiveObserverDeactivatedAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverDeactivated (Has no native function)
	void ReceiveObserverDeactivated(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivatedAI (Has no native function)
	void ReceiveObserverActivatedAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveObserverActivated (Has no native function)
	void ReceiveObserverActivated(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStartAI (Has no native function)
	void ReceiveExecutionStartAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionStart (Has no native function)
	void ReceiveExecutionStart(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinishAI (Has no native function)
	void ReceiveExecutionFinishAI(class AAIController*& OwnerController, class APawn*& ControlledPawn, struct TEnumAsByte<EBTNodeResult>& NodeResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.ReceiveExecutionFinish (Has no native function)
	void ReceiveExecutionFinish(class AActor*& OwnerActor, struct TEnumAsByte<EBTNodeResult>& NodeResult); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheckAI (Has no native function)
	bool PerformConditionCheckAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.PerformConditionCheck (Has no native function)
	bool PerformConditionCheck(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorObserverActive (Underlying native function: IsDecoratorObserverActive 0xa195d34)
	bool IsDecoratorObserverActive(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/AIModule.BTDecorator_BlueprintBase.IsDecoratorExecutionActive (Underlying native function: IsDecoratorExecutionActive 0xa195cbc)
	bool IsDecoratorExecutionActive(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

