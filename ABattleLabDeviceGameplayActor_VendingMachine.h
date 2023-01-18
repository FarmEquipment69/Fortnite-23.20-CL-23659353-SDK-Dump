// Class /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine
// Size: 0xa28
class ABattleLabDeviceGameplayActor_VendingMachine : public ABattleLabDeviceGameplayActor
{
	class UStaticMeshComponent* VendingMachineMesh; // 0x9e0 (0x8)
	class UStaticMeshComponent* FunnelMesh; // 0x9e8 (0x8)
	class UBoxComponent* FunnelCollision; // 0x9f0 (0x8)
	class UArrowComponent* SpawnLootTransformArrow; // 0x9f8 (0x8)
	float LootTossSpeed; // 0xa00 (0x4)
	float LootTossAngleDegrees; // 0xa04 (0x4)
	class AFortPickup* DroppedIntoFunnelPickup; // 0xa08 (0x8)
	struct TArray<class UFortItemDefinition*> StoredItemDefinitions; // 0xa10 (0x10)
	unsigned char padding_a20[0x8]; // 0xa20 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.ServerOnAttemptInteract (Underlying native function: ServerOnAttemptInteract 0x85be534)
	bool ServerOnAttemptInteract(struct FInteractionType& InteractType); // (Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.PreviewImageLoadedFromItemDef (Underlying native function: PreviewImageLoadedFromItemDef 0x85be1b0)
	void PreviewImageLoadedFromItemDef(struct TWeakObjectPtr<class UTexture2D>& PreviewImage); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.PickupDroppedIntoFunnel (Has no native function)
	void PickupDroppedIntoFunnel(class AFortPickup*& PickUp); // (BlueprintCosmetic | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.OnRep_DroppedIntoFunnelPickup (Underlying native function: OnRep_DroppedIntoFunnelPickup 0x85be14c)
	void OnRepDroppedIntoFunnelPickup(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.OnFunnelCollisionBeginOverlap (Underlying native function: OnFunnelCollisionBeginOverlap 0x85bdf1c)
	void OnFunnelCollisionBeginOverlap(class UPrimitiveComponent*& OverlappedComponent, class AActor*& OtherActor, class UPrimitiveComponent*& OtherComp, int& OtherBodyIndex, bool& bFromSweep, struct FHitResult& SweepResult); // (Final | Native | Protected | HasOutParms)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.MachineTookCycleDamage (Has no native function)
	void MachineTookCycleDamage(int& NextIndex); // (BlueprintAuthorityOnly | Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.BattleLabDeviceGameplayActor_VendingMachine.AddStoredItemDefinitionMulti (Underlying native function: AddStoredItemDefinitionMulti 0x85bc5ec)
	void AddStoredItemDefinitionMulti(class UFortItemDefinition*& InItemDefinition); // (Net | NetReliable | Native | Event | NetMulticast | Protected)
};

