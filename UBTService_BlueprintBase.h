// Class /Script/AIModule.BTService_BlueprintBase
// Size: 0x98
class UBTService_BlueprintBase : public UBTService
{
	class AAIController* AIOwner; // 0x70 (0x8)
	class AActor* ActorOwner; // 0x78 (0x8)
	unsigned char unreflected_80[0x10]; // 0x80 (0x10) 
	unsigned char bShowPropertyDetails; // 0x90 (0x1)
	unsigned char bShowEventDetails; // 0x90 (0x1)
	unsigned char padding_91[0x7]; // 0x91 (0x7)

	/* Functions */

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTickAI (Has no native function)
	void ReceiveTickAI(class AAIController*& OwnerController, class APawn*& ControlledPawn, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveTick (Has no native function)
	void ReceiveTick(class AActor*& OwnerActor, float& DeltaSeconds); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStartAI (Has no native function)
	void ReceiveSearchStartAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveSearchStart (Has no native function)
	void ReceiveSearchStart(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivationAI (Has no native function)
	void ReceiveDeactivationAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveDeactivation (Has no native function)
	void ReceiveDeactivation(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivationAI (Has no native function)
	void ReceiveActivationAI(class AAIController*& OwnerController, class APawn*& ControlledPawn); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.ReceiveActivation (Has no native function)
	void ReceiveActivation(class AActor*& OwnerActor); // (Event | Protected | BlueprintEvent)

	// Function /Script/AIModule.BTService_BlueprintBase.IsServiceActive (Underlying native function: IsServiceActive 0xa1bab24)
	bool IsServiceActive(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

