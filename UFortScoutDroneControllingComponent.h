// Class /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent
// Size: 0x320
class UFortScoutDroneControllingComponent : public UFortControllerComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	class UInputComponent* DroneInputComponent; // 0xd0 (0x8)
	class AFortScoutDrone* ControlledDrone; // 0xd8 (0x8)
	class AActor* OriginalDroneOwner; // 0xe0 (0x8)
	struct TArray<struct FScoutDroneInputTriggerableEvent> InputTriggerableEvents; // 0xe8 (0x10)
	class UInputAction* MoveUpAction; // 0xf8 (0x8)
	class UInputAction* MoveAction; // 0x100 (0x8)
	class UInputAction* DismissAction; // 0x108 (0x8)
	class UClass* DroneCooldownEffectClass; // 0x110 (0x8)
	unsigned char unreflected_118[0x18]; // 0x118 (0x18) 
	struct FStenciledActorData OwningActorStencilData; // 0x130 (0x80)
	struct FScoutDroneDeferredDestructionData CurrentDestructionData; // 0x1b0 (0x10)
	class UClass* FirstPersonCameraModeOverride; // 0x1c0 (0x8)
	class UClass* ThirdPersonCameraModeOverride; // 0x1c8 (0x8)
	struct FGameplayAbilitySpec FakeCameraAbilitySpec; // 0x1d0 (0xe8)
	struct TArray<struct FName> LegacyInputActionsToBlock; // 0x2b8 (0x10)
	class UScoutDroneDeferredDestructionPayload* DismissPayloadCache; // 0x2c8 (0x8)
	struct FScalableFloat DismissButtonPressCooldown; // 0x2d0 (0x28)
	unsigned char unreflected_2f8[0x8]; // 0x2f8 (0x8) 
	struct FViewTargetTransitionParams PlayerToDroneTransitionParams; // 0x300 (0x10)
	unsigned char padding_310[0x10]; // 0x310 (0x10)

	/* Functions */

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.ServerRequestDroneDismissal (Underlying native function: ServerRequestDroneDismissal 0x5358280)
	void ServerRequestDroneDismissal(); // (Final | Net | NetReliable | Native | Event | Private | NetServer)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnWeaponEquipped (Underlying native function: OnWeaponEquipped 0x5358150)
	void OnWeaponEquipped(class AFortWeapon*& NewWeapon, class AFortWeapon*& PrevWeapon); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_CurrentDestructionData (Underlying native function: OnRep_CurrentDestructionData 0x5357e60)
	void OnRepCurrentDestructionData(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnRep_ControlledDrone (Underlying native function: OnRep_ControlledDrone 0x5357e20)
	void OnRepControlledDrone(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.OnOwningPlayerStartedDBNO (Underlying native function: OnOwningPlayerStartedDBNO 0x5357d80)
	void OnOwningPlayerStartedDBNO(); // (Final | Native | Private)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.GetControlledDrone (Underlying native function: GetControlledDrone 0x53578b0)
	class AFortScoutDrone* GetControlledDrone(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerShortInteract (Has no native function)
	void BPOnPlayerShortInteract(); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnPlayerInteractLongUseChanged (Has no native function)
	void BPOnPlayerInteractLongUseChanged(bool& bInteracting, bool& bLongUseInteractionCompleted); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDroneDestroyed (Has no native function)
	void BPOnDroneDestroyed(struct FGameplayTag& DismissalReason); // (BlueprintCosmetic | Event | Protected | HasOutParms | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDismissalStarted (Has no native function)
	void BPOnDismissalStarted(bool& bInstantDismissal, struct FGameplayTag& DismissalReason); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/ScoutDroneRuntime.FortScoutDroneControllingComponent.BP_OnDestructionStarted (Has no native function)
	void BPOnDestructionStarted(bool& bInstantDestruction, struct FGameplayTag& DismissalReason); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)
};

