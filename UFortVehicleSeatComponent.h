// Class /Script/FortniteGame.FortVehicleSeatComponent
// Size: 0x120
class UFortVehicleSeatComponent : public UActorComponent
{
	float SeatSwitchCooldown; // 0xa0 (0x4)
	bool bHasAnyMountedWeaponSeats; // 0xa4 (0x1)
	unsigned char unreflected_a5[0x1b]; // 0xa5 (0x1b) 
	struct TArray<struct FAthenaCarPlayerSlot> PlayerSlots; // 0xc0 (0x10)
	struct TArray<struct FAthenaCarPlayerSlot> PreviousPlayerSlots; // 0xd0 (0x10)
	struct TArray<struct FAthenaCarPlayerSlotUnreplicated*> PlayerSlotsUnreplicated; // 0xe0 (0x10)
	struct TArray<int> PlayerSlotPriorityList; // 0xf0 (0x10)
	bool bAlwaysAllowEntry; // 0x100 (0x1)
	struct TEnumAsByte<ESeatSelectionRule> SeatSelectionRule; // 0x101 (0x1)
	unsigned char unreflected_102[0x2]; // 0x102 (0x2) 
	struct TWeakObjectPtr<class AFortPawn> PreviousDriver; // 0x104 (0x8)
	unsigned char padding_10c[0x14]; // 0x10c (0x14)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleSeatComponent.OnRep_PlayerSlots (Underlying native function: OnRep_PlayerSlots 0x1b50838)
	void OnRepPlayerSlots(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortVehicleSeatComponent.GetPlayerSlots (Underlying native function: GetPlayerSlots 0x8fdb888)
	struct TArray<struct FAthenaCarPlayerSlot> GetPlayerSlots(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortVehicleSeatComponent.BP_GetPlayerSlot (Underlying native function: BP_GetPlayerSlot 0x8fdb564)
	struct FAthenaCarPlayerSlot BPGetPlayerSlot(int& SeatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

