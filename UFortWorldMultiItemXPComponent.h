// Class /Script/FortniteGame.FortWorldMultiItemXPComponent
// Size: 0x100
class UFortWorldMultiItemXPComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x30]; // 0xa0 (0x30) 
	class AFortWeapon* OwningWeapon; // 0xd0 (0x8)
	class AFortPawn* OwnerPawn; // 0xd8 (0x8)
	class UFortWorldMultiItem* OwningMultiItem; // 0xe0 (0x8)
	bool bReplicateOwningMultiItemToOwningClient; // 0xe8 (0x1)
	unsigned char unreflected_e9[0x3]; // 0xe9 (0x3) 
	struct FMultiItemReplicationProxy OwningItemReplicationProxy; // 0xec (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.OnRep_OwningItemReplicationProxy (Underlying native function: OnRep_OwningItemReplicationProxy 0x8a4746c)
	void OnRepOwningItemReplicationProxy(struct FMultiItemReplicationProxy& OldItemReplicationProxy); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.OnPowerUpPending (Has no native function)
	void OnPowerUpPending(int& CurrentItemIndex, int& PendingItemIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.OnItemXPChanged (Has no native function)
	void OnItemXPChanged(float& XPChangeAmount, float& CurrentXP); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.OnItemSwitchedTo (Has no native function)
	void OnItemSwitchedTo(int& CurrentItemIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.OnItemSwitchedAwayFrom (Has no native function)
	void OnItemSwitchedAwayFrom(int& CurrentItemIndex); // (Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.IsPowerUpPending (Underlying native function: IsPowerUpPending 0x8a473bc)
	bool IsPowerUpPending(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.HandlePowerUpPending (Underlying native function: HandlePowerUpPending 0x8a4728c)
	void HandlePowerUpPending(int& CurrentItemIndex, int& PendingItemIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.HandleItemXPChanged (Underlying native function: HandleItemXPChanged 0x8a470fc)
	void HandleItemXPChanged(float& XPChangeAmount, float& CurrentXP); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.HandleItemSwitched (Underlying native function: HandleItemSwitched 0x8a4707c)
	void HandleItemSwitched(int& CurrentItemIndex); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetWeaponActor (Underlying native function: GetWeaponActor 0x8a46f74)
	class AFortWeapon* GetWeaponActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetSelectedItemIndex (Underlying native function: GetSelectedItemIndex 0x8a46cf8)
	int GetSelectedItemIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetOwningPawn (Underlying native function: GetOwningPawn 0x76c248c)
	class AFortPawn* GetOwningPawn(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetOwningMultiItem (Underlying native function: GetOwningMultiItem 0x8a46a04)
	class UFortWorldMultiItem* GetOwningMultiItem(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetMultiItemXPPercentage (Underlying native function: GetMultiItemXPPercentage 0x8a46968)
	bool GetMultiItemXPPercentage(float& OutItemXPPercentage); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.GetMultiItemXP (Underlying native function: GetMultiItemXP 0x8a46940)
	float GetMultiItemXP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortWorldMultiItemXPComponent.FlushPendingPowerUp (Underlying native function: FlushPendingPowerUp 0x8a46374)
	void FlushPendingPowerUp(); // (Final | Native | Public | BlueprintCallable)
};

