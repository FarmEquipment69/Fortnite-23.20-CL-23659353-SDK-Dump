// Class /Script/FortniteGame.BuildingProp_LockDevice
// Size: 0xf40
class ABuildingProp_LockDevice : public ABuildingProp
{
	unsigned char unreflected_ee8[0x8]; // 0xee8 (0x8) 
	struct FMulticastInlineDelegate OnLockableActorChange; // 0xef0 (0x10)
	struct FMulticastInlineDelegate OnLockStateChange; // 0xf00 (0x10)
	struct TArray<class UBoxComponent*> InteractionCollisionComponents; // 0xf10 (0x10)
	unsigned char unreflected_f20[0x8]; // 0xf20 (0x8) 
	float SearchAreaSize; // 0xf28 (0x4)
	unsigned char unreflected_f2c[0x4]; // 0xf2c (0x4) 
	class AActor* LockableObject; // 0xf30 (0x8)
	enum ELockState CurrentLockState; // 0xf38 (0x1)
	bool HideInteractionWhenLocked; // 0xf39 (0x1)
	unsigned char padding_f3a[0x6]; // 0xf3a (0x6)

	/* Functions */

	// Function /Script/FortniteGame.BuildingProp_LockDevice.UnlockObject (Underlying native function: UnlockObject 0x72168c8)
	void UnlockObject(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ToggleOpenState (Underlying native function: ToggleOpenState 0x71a663c)
	void ToggleOpenState(class AController*& ControllerInstigator); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ToggleLockedState (Underlying native function: ToggleLockedState 0x71a663c)
	void ToggleLockedState(class AController*& ControllerInstigator); // (Final | BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.SetHighLightToLockableActor (Underlying native function: SetHighLightToLockableActor 0x860d100)
	void SetHighLightToLockableActor(class ABuildingActor*& BuildingActor, bool& bEnable); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ReceiveOnLockStateChange (Has no native function)
	void ReceiveOnLockStateChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.ReceiveOnLockableActorChange (Has no native function)
	void ReceiveOnLockableActorChange(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.Open (Underlying native function: Open 0x860c6bc)
	void Open(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.OnRep_LockableObject (Underlying native function: OnRep_LockableObject 0x860c0e0)
	void OnRepLockableObject(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.OnRep_CurrentLockState (Underlying native function: OnRep_CurrentLockState 0x860c03c)
	void OnRepCurrentLockState(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.LockObject (Underlying native function: LockObject 0x7216960)
	void LockObject(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameStateChanged (Underlying native function: HandleMinigameStateChanged 0x8609b40)
	void HandleMinigameStateChanged(class AFortMinigame*& Minigame, enum EFortMinigameState& NewMinigameState); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameStarted (Underlying native function: HandleMinigameStarted 0x8609b04)
	void HandleMinigameStarted(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleMinigameEnded (Underlying native function: HandleMinigameEnded 0x8609ac0)
	void HandleMinigameEnded(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.HandleLockableObjectDestruction (Underlying native function: HandleLockableObjectDestruction 0x71a663c)
	void HandleLockableObjectDestruction(class AActor*& ActorDestroyed); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.FindLockableActor (Underlying native function: FindLockableActor 0x8607f9c)
	class AActor* FindLockableActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.FindAndStoreAClosestLockableActor (Underlying native function: FindAndStoreAClosestLockableActor 0x26daa0c)
	void FindAndStoreAClosestLockableActor(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.BuildingProp_LockDevice.Close (Underlying native function: Close 0x8309530)
	void Close(class AController*& ControllerInstigator); // (BlueprintAuthorityOnly | Native | Protected | BlueprintCallable)
};

