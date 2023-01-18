// Class /Script/FortniteGame.FortControllerComponent_SpawnedVehicle
// Size: 0xe8
class UFortControllerComponent_SpawnedVehicle : public UFortControllerComponent
{
	class AFortAthenaVehicle* SpawnedVehicle; // 0xa0 (0x8)
	unsigned char padding_a8[0x40]; // 0xa8 (0x40)

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.OnRep_SpawnedVehicle (Underlying native function: OnRep_SpawnedVehicle 0x8289460)
	void OnRepSpawnedVehicle(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleVehicleStateChanged (Underlying native function: HandleVehicleStateChanged 0x82887a0)
	void HandleVehicleStateChanged(class AFortPlayerPawn*& PlayerPawn, class AActor*& NewVehicle, class AActor*& OldVehicle); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleTestStillAttached (Underlying native function: HandleTestStillAttached 0x828878c)
	void HandleTestStillAttached(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandlePlayerDisconnectedChanged (Underlying native function: HandlePlayerDisconnectedChanged 0x82885e4)
	void HandlePlayerDisconnectedChanged(class AFortPlayerStateAthena*& DisconnectingPlayerState, bool& bIsDisconnected); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortControllerComponent_SpawnedVehicle.HandleDeferredExitSpawnVehicle (Underlying native function: HandleDeferredExitSpawnVehicle 0x8288238)
	void HandleDeferredExitSpawnVehicle(); // (Final | Native | Private)
};

