// Class /Script/Engine.DebugCameraController
// Size: 0x9c0
class ADebugCameraController : public APlayerController
{
	unsigned char bShowSelectedInfo; // 0x848 (0x1)
	unsigned char bIsFrozenRendering; // 0x848 (0x1)
	unsigned char bIsOrbitingSelectedActor; // 0x848 (0x1)
	unsigned char bOrbitPivotUseCenter; // 0x848 (0x1)
	unsigned char bEnableBufferVisualization; // 0x848 (0x1)
	unsigned char bEnableBufferVisualizationFullMode; // 0x848 (0x1)
	unsigned char bIsBufferVisualizationInputSetup; // 0x848 (0x1)
	unsigned char bLastDisplayEnabled; // 0x848 (0x1)
	unsigned char unreflected_849[0x7]; // 0x849 (0x7) 
	class UDrawFrustumComponent* DrawFrustum; // 0x850 (0x8)
	struct TWeakObjectPtr<class AActor> SelectedActor; // 0x858 (0x8)
	struct TWeakObjectPtr<class UPrimitiveComponent> SelectedComponent; // 0x860 (0x8)
	struct FHitResult SelectedHitPoint; // 0x868 (0xe0)
	class APlayerController* OriginalControllerRef; // 0x948 (0x8)
	class UPlayer* OriginalPlayer; // 0x950 (0x8)
	float SpeedScale; // 0x958 (0x4)
	float InitialMaxSpeed; // 0x95c (0x4)
	float InitialAccel; // 0x960 (0x4)
	float InitialDecel; // 0x964 (0x4)
	unsigned char padding_968[0x58]; // 0x968 (0x58)

	/* Functions */

	// Function /Script/Engine.DebugCameraController.ToggleDisplay (Underlying native function: ToggleDisplay 0x9d521dc)
	void ToggleDisplay(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DebugCameraController.ShowDebugSelectedInfo (Underlying native function: ShowDebugSelectedInfo 0x9d521c4)
	void ShowDebugSelectedInfo(); // (Exec | Native | Public)

	// Function /Script/Engine.DebugCameraController.SetPawnMovementSpeedScale (Underlying native function: SetPawnMovementSpeedScale 0x9d52134)
	void SetPawnMovementSpeedScale(float& NewSpeedScale); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.DebugCameraController.ReceiveOnDeactivate (Has no native function)
	void ReceiveOnDeactivate(class APlayerController*& RestoredPC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.DebugCameraController.ReceiveOnActorSelected (Has no native function)
	void ReceiveOnActorSelected(class AActor*& NewSelectedActor, struct FVector& SelectHitLocation, struct FVector& SelectHitNormal, struct FHitResult& Hit); // (Event | Protected | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/Engine.DebugCameraController.ReceiveOnActivate (Has no native function)
	void ReceiveOnActivate(class APlayerController*& OriginalPC); // (Event | Public | BlueprintEvent)

	// Function /Script/Engine.DebugCameraController.GetSelectedActor (Underlying native function: GetSelectedActor 0x9d51e20)
	class AActor* GetSelectedActor(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

