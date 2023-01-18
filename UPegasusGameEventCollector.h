// Class /Script/FortniteGame.PegasusGameEventCollector
// Size: 0x5c8
class UPegasusGameEventCollector : public UActorComponent
{
	unsigned char unreflected_a0[0x1b0]; // 0xa0 (0x1b0) 
	float InventoryChangesTimeSpan; // 0x250 (0x4)
	unsigned char unreflected_254[0x4c]; // 0x254 (0x4c) 
	float EndSkydivePlayerCheckRadius; // 0x2a0 (0x4)
	unsigned char unreflected_2a4[0x84]; // 0x2a4 (0x84) 
	float WeaponExecutedTimeSpan; // 0x328 (0x4)
	unsigned char unreflected_32c[0x4c]; // 0x32c (0x4c) 
	float BuildingBeginPlayTimeSpan; // 0x378 (0x4)
	unsigned char unreflected_37c[0x8c]; // 0x37c (0x8c) 
	float ExpensiveTestInterval; // 0x408 (0x4)
	unsigned char unreflected_40c[0x4]; // 0x40c (0x4) 
	float SquadCohesionTestRadius; // 0x410 (0x4)
	unsigned char unreflected_414[0x44]; // 0x414 (0x44) 
	float PlayerResourceEventsTimeSpan; // 0x458 (0x4)
	unsigned char unreflected_45c[0xdc]; // 0x45c (0xdc) 
	float EliminationEventsTimeSpan; // 0x538 (0x4)
	unsigned char padding_53c[0x8c]; // 0x53c (0x8c)

	/* Functions */

	// Function /Script/FortniteGame.PegasusGameEventCollector.HandleOwnerVehicleStateChange (Underlying native function: HandleOwnerVehicleStateChange 0x8e468e0)
	void HandleOwnerVehicleStateChange(class AFortPlayerPawn*& Sender, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteGame.PegasusGameEventCollector.HandleOwnerEndSkyDiving (Underlying native function: HandleOwnerEndSkyDiving 0x8e468cc)
	void HandleOwnerEndSkyDiving(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PegasusGameEventCollector.HandleOwnerBeginSkyDiving (Underlying native function: HandleOwnerBeginSkyDiving 0x8e468b8)
	void HandleOwnerBeginSkyDiving(); // (Final | Native | Private)

	// Function /Script/FortniteGame.PegasusGameEventCollector.HandleOwnerAthenaPlaceChanged (Underlying native function: HandleOwnerAthenaPlaceChanged 0x8e467f4)
	void HandleOwnerAthenaPlaceChanged(class AFortPlayerStateAthena*& Sender, int& NewPlace); // (Final | Native | Private)
};

