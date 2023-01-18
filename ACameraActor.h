// Class /Script/Engine.CameraActor
// Size: 0x990
class ACameraActor : public AActor
{
	struct TEnumAsByte<EAutoReceiveInput> AutoActivateForPlayer; // 0x288 (0x1)
	unsigned char unreflected_289[0x7]; // 0x289 (0x7) 
	class UCameraComponent* CameraComponent; // 0x290 (0x8)
	class USceneComponent* SceneComponent; // 0x298 (0x8)
	unsigned char bConstrainAspectRatio; // 0x2a0 (0x1)
	unsigned char unreflected_2a1[0x3]; // 0x2a1 (0x3) 
	float AspectRatio; // 0x2a4 (0x4)
	float FOVAngle; // 0x2a8 (0x4)
	float PostProcessBlendWeight; // 0x2ac (0x4)
	struct FPostProcessSettings PostProcessSettings; // 0x2b0 (0x6e0)

	/* Functions */

	// Function /Script/Engine.CameraActor.GetAutoActivatePlayerIndex (Underlying native function: GetAutoActivatePlayerIndex 0x9c9ba80)
	int GetAutoActivatePlayerIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

