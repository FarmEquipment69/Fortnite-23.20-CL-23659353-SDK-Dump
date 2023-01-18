// Class /Script/FortniteGame.DevicesDataTrackingComponent
// Size: 0xb0
class UDevicesDataTrackingComponent : public UActorComponent
{
	struct TArray<class UDeviceTrackedData*> DevicesTrackedData; // 0xa0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.DevicesDataTrackingComponent.AddNewTracker (Underlying native function: AddNewTracker 0x877ded4)
	class UDeviceTrackedData* AddNewTracker(class UClass*& DataTrackedClass); // (Final | Native | Public | BlueprintCallable)
};

