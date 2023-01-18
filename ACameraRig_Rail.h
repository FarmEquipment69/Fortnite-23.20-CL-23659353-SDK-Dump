// Class /Script/CinematicCamera.CameraRig_Rail
// Size: 0x2a8
class ACameraRig_Rail : public AActor
{
	float CurrentPositionOnRail; // 0x288 (0x4)
	bool bLockOrientationToRail; // 0x28c (0x1)
	unsigned char unreflected_28d[0x3]; // 0x28d (0x3) 
	class USceneComponent* TransformComponent; // 0x290 (0x8)
	class USplineComponent* RailSplineComponent; // 0x298 (0x8)
	class USceneComponent* RailCameraMount; // 0x2a0 (0x8)

	/* Functions */

	// Function /Script/CinematicCamera.CameraRig_Rail.GetRailSplineComponent (Underlying native function: GetRailSplineComponent 0x9b313c8)
	class USplineComponent* GetRailSplineComponent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)
};

