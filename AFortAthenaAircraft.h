// Class /Script/FortniteGame.FortAthenaAircraft
// Size: 0x570
class AFortAthenaAircraft : public AFortAircraft
{
	struct FLinearColor MinimapIconColorTeammate; // 0x2c8 (0x10)
	struct FLinearColor MinimapIconColorEnemy; // 0x2d8 (0x10)
	unsigned char unreflected_2e8[0x10]; // 0x2e8 (0x10) 
	struct FMulticastInlineDelegate OnDropZoneExited; // 0x2f8 (0x10)
	unsigned char unreflected_308[0x10]; // 0x308 (0x10) 
	int NumSpawnSlots; // 0x318 (0x4)
	float SpawnOffsetRadius; // 0x31c (0x4)
	unsigned char unreflected_320[0x10]; // 0x320 (0x10) 
	struct FAircraftFlightInfo FlightInfo; // 0x330 (0x48)
	float FlightStartTime; // 0x378 (0x4)
	float FlightEndTime; // 0x37c (0x4)
	float DropStartTime; // 0x380 (0x4)
	float DropEndTime; // 0x384 (0x4)
	bool bWasSpawnedForAircraftPhase; // 0x388 (0x1)
	unsigned char unreflected_389[0x3]; // 0x389 (0x3) 
	float ReplicatedFlightTimestamp; // 0x38c (0x4)
	float FlightElapsedTime; // 0x390 (0x4)
	float ClientFlightTimerDrift; // 0x394 (0x4)
	unsigned char unreflected_398[0x4]; // 0x398 (0x4) 
	float MiniMapIconScale; // 0x39c (0x4)
	struct FSlateBrush MiniMapIconBrush; // 0x3a0 (0xc0)
	float MiniMapTeamIndicatorIconScale; // 0x460 (0x4)
	unsigned char unreflected_464[0xc]; // 0x464 (0xc) 
	struct FSlateBrush MiniMapTeamIndicatorIconBrush; // 0x470 (0xc0)
	class UAthenaBattleBusItemDefinition* DefaultBusSkin; // 0x530 (0x8)
	class ABattleBusCosmeticInstanceBase* SpawnedCosmeticActor; // 0x538 (0x8)
	class UAthenaBattleBusItemDefinition* AsyncLoadingSkin; // 0x540 (0x8)
	unsigned char unreflected_548[0x10]; // 0x548 (0x10) 
	int AircraftIndex; // 0x558 (0x4)
	unsigned char unreflected_55c[0x4]; // 0x55c (0x4) 
	class UFortMiniMapIndicator* Indicator; // 0x560 (0x8)
	class UFortMiniMapIndicator* TeamIndicator; // 0x568 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaAircraft.StartFlightPath (Underlying native function: StartFlightPath 0x82b49b4)
	void StartFlightPath(float& StartTime); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAircraft.SpawnAircraft (Underlying native function: SpawnAircraft 0x82b480c)
	static class AFortAthenaAircraft* SpawnAircraft(class UWorld*& World, class UClass*& AircraftClass, struct FAircraftFlightInfo& InFlightInfo); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortAthenaAircraft.OnRep_ReplicatedFlightTimestamp (Underlying native function: OnRep_ReplicatedFlightTimestamp 0x2756178)
	void OnRepReplicatedFlightTimestamp(); // (Final | Native | Protected)

	// Function /Script/FortniteGame.FortAthenaAircraft.GetDropStartTime (Underlying native function: GetDropStartTime 0x82b2588)
	float GetDropStartTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortAthenaAircraft.GetDropEndTime (Underlying native function: GetDropEndTime 0x82b2570)
	float GetDropEndTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// DelegateFunction /Script/FortniteGame.FortAthenaAircraft.FortAthenaAircraftDelegate__DelegateSignature (Has no native function)
	void FortAthenaAircraftDelegateDelegateSignature(class AFortAthenaAircraft*& FortAthenaAircraft); // (MulticastDelegate | Public | Delegate)

	// Function /Script/FortniteGame.FortAthenaAircraft.EjectPlayersInAircraft (Underlying native function: EjectPlayersInAircraft 0x26daa0c)
	void EjectPlayersInAircraft(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

