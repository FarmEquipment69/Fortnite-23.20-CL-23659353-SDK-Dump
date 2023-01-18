// Class /Script/FortniteGame.FortVehicleFuelComponent
// Size: 0x330
class UFortVehicleFuelComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x8]; // 0xa0 (0x8) 
	struct FMulticastInlineDelegate OnFuelChanged; // 0xa8 (0x10)
	struct FMulticastInlineDelegate OnRefueledFromEmpty; // 0xb8 (0x10)
	struct FMulticastInlineDelegate OnOutOfFuel; // 0xc8 (0x10)
	struct FMulticastInlineDelegate OnLowFuel; // 0xd8 (0x10)
	class AFortAthenaVehicle* OwnerVehicle; // 0xe8 (0x8)
	float ServerFuel; // 0xf0 (0x4)
	unsigned char unreflected_f4[0x4]; // 0xf4 (0x4) 
	class USoundBase* OutOfFuelSound; // 0xf8 (0x8)
	class USoundBase* LowFuelSound; // 0x100 (0x8)
	class USoundBase* LowFuelRepeatingPing; // 0x108 (0x8)
	struct FScalableFloat UsesFuelSystem; // 0x110 (0x28)
	struct FScalableFloat InitializeWithStartingFuel; // 0x138 (0x28)
	struct FScalableFloat FuelTankCapacity; // 0x160 (0x28)
	struct FScalableFloat FuelPerSecondIdle; // 0x188 (0x28)
	struct FScalableFloat FuelPerSecondDriving; // 0x1b0 (0x28)
	struct FScalableFloat FuelPerSecondBoosting; // 0x1d8 (0x28)
	unsigned char unreflected_200[0x10]; // 0x200 (0x10) 
	struct FScalableFloat MinFuelAtSpawn; // 0x210 (0x28)
	struct FScalableFloat MaxFuelAtSpawn; // 0x238 (0x28)
	struct FScalableFloat InfiniteFuel; // 0x260 (0x28)
	struct FScalableFloat LowFuelRepeatingPingDelay; // 0x288 (0x28)
	struct FScalableFloat LowFuelPercent; // 0x2b0 (0x28)
	struct TArray<struct FVehicleSpecificUIDetails> CustomFuelUI; // 0x2d8 (0x10)
	struct FText FuelSubText; // 0x2e8 (0x18)
	struct TWeakObjectPtr<class UTexture2D> FuelSubTextImage; // 0x300 (0x28)
	unsigned char padding_328[0x8]; // 0x328 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleFuelComponent.SetFuelUsageInfo (Underlying native function: SetFuelUsageInfo 0x8fdbee0)
	void SetFuelUsageInfo(struct FRuntimeFuelUsageInfo& NewFuelUsageInfo); // (Final | BlueprintAuthorityOnly | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleFuelComponent.SetFuel (Underlying native function: SetFuel 0x8fdbe5c)
	void SetFuel(float& NewFuel); // (Final | 0x00000002 | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleFuelComponent.ReinitializeFuelUsageInfo (Underlying native function: ReinitializeFuelUsageInfo 0x26daa0c)
	void ReinitializeFuelUsageInfo(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortVehicleFuelComponent.OnRep_ServerFuel (Underlying native function: OnRep_ServerFuel 0x1460994)
	void OnRepServerFuel(float& PreviousFuel); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVehicleFuelComponent.GetFuelUsageInfo (Underlying native function: GetFuelUsageInfo 0x8fdb7f4)
	struct FRuntimeFuelUsageInfo GetFuelUsageInfo(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortVehicleFuelComponent.GetFuelCapacity (Underlying native function: GetFuelCapacity 0x8fdb7c0)
	float GetFuelCapacity(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

