// Class /Script/CinematicCamera.CineCameraActor
// Size: 0xa10
class ACineCameraActor : public ACameraActor
{
	struct FCameraLookatTrackingSettings LookatTrackingSettings; // 0x990 (0x68)
	unsigned char padding_9f8[0x18]; // 0x9f8 (0x18)

	/* Functions */

	// Function /Script/CinematicCamera.CineCameraActor.GetCineCameraComponent (Underlying native function: GetCineCameraComponent 0x9b307c4)
	class UCineCameraComponent* GetCineCameraComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

