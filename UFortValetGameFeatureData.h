// Class /Script/ValetRuntime.FortValetGameFeatureData
// Size: 0x5a0
class UFortValetGameFeatureData : public UFortGameFeatureData
{
	struct TMap<struct TWeakObjectPtr<class UClass>, struct FVehiclePropReplacementData> PropReplacements; // 0x520 (0x50)
	struct TWeakObjectPtr<class UClass> VehicleSpawnerClass; // 0x570 (0x28)
	enum ESpawnActorCollisionHandlingMethod SpawnActorCollisionHandlingMethod; // 0x598 (0x1)
	unsigned char padding_599[0x7]; // 0x599 (0x7)
};

