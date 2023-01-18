// Class /Script/FortniteGame.FortVehicleModSubsystem
// Size: 0xd8
class UFortVehicleModSubsystem : public UGameInstanceSubsystem
{
	struct TMap<struct FGameplayTag, struct FFortVehicleModConfigEntries> ModTagToData; // 0x30 (0x50)
	struct TSet<struct TWeakObjectPtr<class AActor>> VehiclesPendingModCollection; // 0x80 (0x50)
	unsigned char padding_d0[0x8]; // 0xd0 (0x8)
};

