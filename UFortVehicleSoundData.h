// Class /Script/VehicleAudioRuntime.FortVehicleSoundData
// Size: 0x48
class UFortVehicleSoundData : public UDataAsset
{
	struct TArray<class UFortVehicleSoundComponent*> SoundComponents; // 0x30 (0x10)
	float MaxListenerDistance; // 0x40 (0x4)
	unsigned char padding_44[0x4]; // 0x44 (0x4)
};

