// Class /Script/FortniteGame.AthenaWrapPreviewActor
// Size: 0x520
class AAthenaWrapPreviewActor : public AFortItemPreviewMultiAngleActor
{
	unsigned char unreflected_4a0[0x8]; // 0x4a0 (0x8) 
	class UCameraComponent* ZoomedInWeaponCameraComponent; // 0x4a8 (0x8)
	class UCameraComponent* ZoomedOutVehicleCameraComponent; // 0x4b0 (0x8)
	class UCameraComponent* ZoomedInVehicleCameraComponent; // 0x4b8 (0x8)
	class UCameraComponent* ZoomedOutCampaignVehicleCameraComponent; // 0x4c0 (0x8)
	class UCameraComponent* ZoomedInCampaignVehicleCameraComponent; // 0x4c8 (0x8)
	class UCameraComponent* ZoomedOutLargeWeaponCameraComponent; // 0x4d0 (0x8)
	class UCameraComponent* ZoomedInLargeWeaponCameraComponent; // 0x4d8 (0x8)
	unsigned char unreflected_4e0[0x20]; // 0x4e0 (0x20) 
	class USceneComponent* PreviewSpawnPointComponent; // 0x500 (0x8)
	class UAthenaItemWrapDefinition* ItemWrapDef; // 0x508 (0x8)
	unsigned char padding_510[0x10]; // 0x510 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.AthenaWrapPreviewActor.ShowNextPreviewMesh (Underlying native function: ShowNextPreviewMesh 0x8a08ff4)
	void ShowNextPreviewMesh(); // (Final | Native | Protected | BlueprintCallable)

	// Function /Script/FortniteGame.AthenaWrapPreviewActor.IsShowingVehicle (Underlying native function: IsShowingVehicle 0x8a07dd8)
	bool IsShowingVehicle(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaWrapPreviewActor.GetActiveCamera (Underlying native function: GetActiveCamera 0x8a05d7c)
	enum EWrapPreviewCamera GetActiveCamera(); // (Final | Native | Protected | BlueprintCallable | BlueprintPure | Const)
};

