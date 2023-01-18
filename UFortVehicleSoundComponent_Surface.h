// Class /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface
// Size: 0x100
class UFortVehicleSoundComponent_Surface : public UFortVehicleSoundComponent
{
	struct FFortVehicleSoundComponent_SurfaceContext Context; // 0xb0 (0x4c)
	unsigned char padding_fc[0x4]; // 0xfc (0x4)

	/* Functions */

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnSkiddingChanged (Has no native function)
	void OnSkiddingChanged(bool& bNewState); // (Event | Public | BlueprintEvent)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnInAirChanged (Has no native function)
	void OnInAirChanged(bool& bNewState); // (Event | Public | BlueprintEvent)

	// Function /Script/VehicleAudioRuntime.FortVehicleSoundComponent_Surface.OnBrakingChanged (Has no native function)
	void OnBrakingChanged(bool& bNewState); // (Event | Public | BlueprintEvent)
};

