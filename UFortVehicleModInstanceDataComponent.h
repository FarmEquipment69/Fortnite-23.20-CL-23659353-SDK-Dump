// Class /Script/FortniteGame.FortVehicleModInstanceDataComponent
// Size: 0xd0
class UFortVehicleModInstanceDataComponent : public UActorComponent
{
	class UFortVehicleModConfig* ModConfig; // 0xa0 (0x8)
	struct TArray<struct TWeakObjectPtr<class ABuildingGameplayActor>> SpawnedBGAs; // 0xa8 (0x10)
	struct TArray<struct FVehicleModPhysicsShapeModifiers> PhysicsShapeModifiers; // 0xb8 (0x10)
	bool bModEnabled; // 0xc8 (0x1)
	unsigned char padding_c9[0x7]; // 0xc9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.FortVehicleModInstanceDataComponent.OnRep_PhysicsShapeModifiers (Underlying native function: OnRep_PhysicsShapeModifiers 0x47ad2e8)
	void OnRepPhysicsShapeModifiers(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVehicleModInstanceDataComponent.OnRep_ModEnabled (Underlying native function: OnRep_ModEnabled 0x27ac4f0)
	void OnRepModEnabled(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortVehicleModInstanceDataComponent.OnRep_ModConfig (Underlying native function: OnRep_ModConfig 0x2fd2d1c)
	void OnRepModConfig(); // (Final | Native | Private)
};

