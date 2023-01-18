// Class /Script/FortniteGame.FortCreativeInteractVisualizationComponent
// Size: 0x110
class UFortCreativeInteractVisualizationComponent : public UActorComponent
{
	class UClass* CollisionComponentClass; // 0xa0 (0x8)
	class UClass* CollisionComponentAreaClass; // 0xa8 (0x8)
	class UCurveFloat* FloatCurve; // 0xb0 (0x8)
	class UStaticMesh* StaticMesh; // 0xb8 (0x8)
	class UMaterialInterface* StaticMeshMaterial; // 0xc0 (0x8)
	struct FVector ComponentRelativeOffset; // 0xc8 (0x18)
	float TransitionInterval; // 0xe0 (0x4)
	float CurrentTime; // 0xe4 (0x4)
	float VisualizationDiameterStart; // 0xe8 (0x4)
	float VisualizationDiameterDesired; // 0xec (0x4)
	float InteractRadius; // 0xf0 (0x4)
	bool bPendingShow; // 0xf4 (0x1)
	unsigned char padding_f5[0x1b]; // 0xf5 (0x1b)

	/* Functions */

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.SetRadius (Underlying native function: SetRadius 0x87b6ce8)
	void SetRadius(float& InInteractRadius); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.OnPlayModeChanged (Underlying native function: OnPlayModeChanged 0x87b5ae0)
	void OnPlayModeChanged(class AFortMinigame*& InMinigame, bool& bIsInPlayMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.HasInteractRadius (Underlying native function: HasInteractRadius 0x87b445c)
	bool HasInteractRadius(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetVisualMeshComponent (Underlying native function: GetVisualMeshComponent 0x87b3ec0)
	class UStaticMeshComponent* GetVisualMeshComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetVisualizationDiameterStart (Underlying native function: GetVisualizationDiameterStart 0x7f928d0)
	float GetVisualizationDiameterStart(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetVisualizationDiameterDesired (Underlying native function: GetVisualizationDiameterDesired 0x7f928b8)
	float GetVisualizationDiameterDesired(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetPendingShow (Underlying native function: GetPendingShow 0x87b2ca8)
	bool GetPendingShow(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetInteractRadius (Underlying native function: GetInteractRadius 0x87b2640)
	float GetInteractRadius(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetCurrentTime (Underlying native function: GetCurrentTime 0x87b243c)
	float GetCurrentTime(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.GetCollisionComponent (Underlying native function: GetCollisionComponent 0x87b2340)
	class UShapeComponent* GetCollisionComponent(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.BP_OnVisualMeshComponentCreated (Has no native function)
	void BPOnVisualMeshComponentCreated(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.BP_OnUpdateVisibility (Has no native function)
	void BPOnUpdateVisibility(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.BP_OnUpdateCollision (Has no native function)
	void BPOnUpdateCollision(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.FortCreativeInteractVisualizationComponent.BP_OnCollisionComponentCreated (Has no native function)
	void BPOnCollisionComponentCreated(); // (Event | Protected | BlueprintEvent)
};

