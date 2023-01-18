// Class /Script/ValetRuntime.DagwoodNetworkPhysicsComponent
// Size: 0xe50
class UDagwoodNetworkPhysicsComponent : public UActorComponent
{
	struct FNetworkPhysicsState NetworkPhysicsState; // 0xa0 (0x90)
	struct FMulticastInlineDelegate OnGeneratedLocalInputCmd; // 0x130 (0x10)
	struct FDagwoodManagedState ReplicatedManagedState; // 0x140 (0x458)
	struct FDagwoodManagedState InManagedState; // 0x598 (0x458)
	struct FDagwoodManagedState OutManagedState; // 0x9f0 (0x458)
	unsigned char padding_e48[0x8]; // 0xe48 (0x8)

	/* Functions */

	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetState_GT (Underlying native function: SetState_GT 0x71a7734)
	void SetStateGT(struct FDagwoodInPersistent& In); // (Final | Native | Public | HasOutParms)

	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.SetPendingInputCmd (Underlying native function: SetPendingInputCmd 0x71a766c)
	void SetPendingInputCmd(struct FFortDagwoodCmd& In); // (Final | Native | Public | HasOutParms)

	// DelegateFunction /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.OnGeneratedLocalInputCmd__DelegateSignature (Has no native function)
	void OnGeneratedLocalInputCmdDelegateSignature(); // (MulticastDelegate | Public | Delegate)

	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_PT (Underlying native function: GetState_PT 0x71a67ac)
	struct FDagwoodState_PT GetStatePT(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetState_GT (Underlying native function: GetState_GT 0x71a672c)
	struct FDagwoodInPersistent GetStateGT(); // (Final | Native | Public | Const)

	// Function /Script/ValetRuntime.DagwoodNetworkPhysicsComponent.GetPendingInputCmd (Underlying native function: GetPendingInputCmd 0x71a66f8)
	struct FFortDagwoodCmd GetPendingInputCmd(); // (Final | Native | Public | Const)
};

