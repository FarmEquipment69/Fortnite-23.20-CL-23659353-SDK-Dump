// Class /Script/FortniteGame.FortDecoItemDefinition
// Size: 0xe30
class UFortDecoItemDefinition : public UFortWeaponItemDefinition
{
	bool bReplacesEditedSurfaces; // 0xd58 (0x1)
	unsigned char unreflected_d59[0x7]; // 0xd59 (0x7) 
	struct TWeakObjectPtr<class UClass> BlueprintClass; // 0xd60 (0x28)
	struct TWeakObjectPtr<class UClass> PlacementPreviewClass; // 0xd88 (0x28)
	unsigned char bCanBePlacedOnEnemyBuildings; // 0xdb0 (0x1)
	unsigned char unreflected_db1[0x3]; // 0xdb1 (0x3) 
	float GridSnapSizeOverride; // 0xdb4 (0x4)
	float RotationAngleIncrement; // 0xdb8 (0x4)
	float GridPlacementOffset; // 0xdbc (0x4)
	struct TEnumAsByte<EPlacementType> PlacementTypeOverride; // 0xdc0 (0x1)
	unsigned char bForceIgnoreOverlapTest; // 0xdc1 (0x1)
	unsigned char bIgnoreCollisionWithVehicles; // 0xdc1 (0x1)
	unsigned char bForceIgnoreBuildingOverlaps; // 0xdc1 (0x1)
	unsigned char bIgnoreCollisionWithCriticalActors; // 0xdc1 (0x1)
	unsigned char bIgnoreCollisionWithStructuralGridActors; // 0xdc1 (0x1)
	unsigned char bIgnoreCollisionWithFortStaticMeshActors; // 0xdc1 (0x1)
	unsigned char bIgnoreCollisionWithPlayers; // 0xdc1 (0x1)
	unsigned char bDisableLocationLerpWhilePlacing; // 0xdc1 (0x1)
	unsigned char bDisableRotationLerpWhilePlacing; // 0xdc2 (0x1)
	unsigned char bDisableScaleLerpWhilePlacing; // 0xdc2 (0x1)
	unsigned char bAttachWhenPlacing; // 0xdc2 (0x1)
	unsigned char bAllowPlacementOnWorldGeometry; // 0xdc2 (0x1)
	unsigned char bAllowPlacementOnBuildings; // 0xdc2 (0x1)
	unsigned char bDestroySmallObjectsWhenPlaced; // 0xdc2 (0x1)
	unsigned char bSetOwningPlayerForSpawnedDeco; // 0xdc2 (0x1)
	bool bSetSpawnedDecoOnPlayerTeam; // 0xdc3 (0x1)
	unsigned char bConsumeWhenPlaced; // 0xdc4 (0x1)
	unsigned char bCancelToolWhenPlaced; // 0xdc4 (0x1)
	unsigned char bCancelAbilityOnUnequip; // 0xdc4 (0x1)
	unsigned char bRequiresPlayerPlaceableAttachmentActors; // 0xdc4 (0x1)
	unsigned char bUseRelativeCameraRotation; // 0xdc4 (0x1)
	unsigned char bAllowStairsWhenAttachingToFloors; // 0xdc4 (0x1)
	unsigned char bSnapYawToHorizontalAxes; // 0xdc4 (0x1)
	unsigned char bAllowAnyFloorPlacement; // 0xdc4 (0x1)
	unsigned char bRequiresPermissionToEditWorld; // 0xdc5 (0x1)
	unsigned char bAutoCreateAttachmentBuilding; // 0xdc5 (0x1)
	unsigned char bAllowAutoCreateExtraPiece; // 0xdc5 (0x1)
	unsigned char bGiveFreeDecoOnUndergroundPiece; // 0xdc5 (0x1)
	unsigned char bReplacesDecoOnAttachment; // 0xdc5 (0x1)
	unsigned char bReplacesBuildingWhenPlaced; // 0xdc5 (0x1)
	unsigned char bShowPreviewOnPressHeld; // 0xdc5 (0x1)
	unsigned char bServerValidateCollision; // 0xdc5 (0x1)
	struct TEnumAsByte<EFortResourceType> AutoCreateAttachmentBuildingResourceType; // 0xdc6 (0x1)
	unsigned char unreflected_dc7[0x1]; // 0xdc7 (0x1) 
	int MaxPlacementDistance; // 0xdc8 (0x4)
	unsigned char unreflected_dcc[0x4]; // 0xdcc (0x4) 
	struct TArray<struct TWeakObjectPtr<class UBuildingEditModeMetadata>> AutoCreateAttachmentBuildingShapes; // 0xdd0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UBuildingEditModeMetadata>> AllowedShapes; // 0xde0 (0x10)
	struct TArray<struct TWeakObjectPtr<class UBuildingEditModeMetadata>> AllowedPlayerBuiltShapes; // 0xdf0 (0x10)
	struct FVector CollisionBoxExtent; // 0xe00 (0x18)
	struct FVector CollisionBoxOffset; // 0xe18 (0x18)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldUseRelativeCameraRotation (Underlying native function: ShouldUseRelativeCameraRotation 0x8a658e4)
	bool ShouldUseRelativeCameraRotation(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldSnapYawToHorizontalAxes (Underlying native function: ShouldSnapYawToHorizontalAxes 0x8a658c8)
	bool ShouldSnapYawToHorizontalAxes(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldIgnoreCollisionWithVehicles (Underlying native function: ShouldIgnoreCollisionWithVehicles 0x8a658ac)
	bool ShouldIgnoreCollisionWithVehicles(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldIgnoreCollisionWithStructuralGridActors (Underlying native function: ShouldIgnoreCollisionWithStructuralGridActors 0x8a65890)
	bool ShouldIgnoreCollisionWithStructuralGridActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldIgnoreCollisionWithPlayers (Underlying native function: ShouldIgnoreCollisionWithPlayers 0x8a65874)
	bool ShouldIgnoreCollisionWithPlayers(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldIgnoreCollisionWithFortStaticMeshActors (Underlying native function: ShouldIgnoreCollisionWithFortStaticMeshActors 0x8a65858)
	bool ShouldIgnoreCollisionWithFortStaticMeshActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldIgnoreCollisionWithCriticalActors (Underlying native function: ShouldIgnoreCollisionWithCriticalActors 0x8a6583c)
	bool ShouldIgnoreCollisionWithCriticalActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldForceIgnoreOverlapTest (Underlying native function: ShouldForceIgnoreOverlapTest 0x8a65820)
	bool ShouldForceIgnoreOverlapTest(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldForceIgnoreBuildingOverlaps (Underlying native function: ShouldForceIgnoreBuildingOverlaps 0x8a65804)
	bool ShouldForceIgnoreBuildingOverlaps(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldDisableScaleLerpWhilePlacing (Underlying native function: ShouldDisableScaleLerpWhilePlacing 0x8a657e8)
	bool ShouldDisableScaleLerpWhilePlacing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldDisableRotationLerpWhilePlacing (Underlying native function: ShouldDisableRotationLerpWhilePlacing 0x8a657cc)
	bool ShouldDisableRotationLerpWhilePlacing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldDisableLocationLerpWhilePlacing (Underlying native function: ShouldDisableLocationLerpWhilePlacing 0x8a657b0)
	bool ShouldDisableLocationLerpWhilePlacing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldDestroySmallObjectsWhenPlaced (Underlying native function: ShouldDestroySmallObjectsWhenPlaced 0x8a65790)
	bool ShouldDestroySmallObjectsWhenPlaced(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldConsumeWhenPlaced (Underlying native function: ShouldConsumeWhenPlaced 0x8a65700)
	bool ShouldConsumeWhenPlaced(class AFortPlayerController*& PlayerController); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldCancelToolWhenPlaced (Underlying native function: ShouldCancelToolWhenPlaced 0x8a656e4)
	bool ShouldCancelToolWhenPlaced(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldCancelAbilityOnUnequip (Underlying native function: ShouldCancelAbilityOnUnequip 0x8a656c8)
	bool ShouldCancelAbilityOnUnequip(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldAttachWhenPlacing (Underlying native function: ShouldAttachWhenPlacing 0x8a656ac)
	bool ShouldAttachWhenPlacing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldAllowStairsWhenAttachingToFloors (Underlying native function: ShouldAllowStairsWhenAttachingToFloors 0x8a65690)
	bool ShouldAllowStairsWhenAttachingToFloors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldAllowPlacementOnWorldGeometry (Underlying native function: ShouldAllowPlacementOnWorldGeometry 0x8a65674)
	bool ShouldAllowPlacementOnWorldGeometry(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldAllowPlacementOnBuildings (Underlying native function: ShouldAllowPlacementOnBuildings 0x8a65658)
	bool ShouldAllowPlacementOnBuildings(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.ShouldAllowAnyFloorPlacement (Underlying native function: ShouldAllowAnyFloorPlacement 0x8a6563c)
	bool ShouldAllowAnyFloorPlacement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.RequiresPlayerPlaceableAttachmentActors (Underlying native function: RequiresPlayerPlaceableAttachmentActors 0x8a652e8)
	bool RequiresPlayerPlaceableAttachmentActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.RequiresPermissionToEditWorld (Underlying native function: RequiresPermissionToEditWorld 0x8a652cc)
	bool RequiresPermissionToEditWorld(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetRotationAngleIncrement (Underlying native function: GetRotationAngleIncrement 0x8a63f68)
	float GetRotationAngleIncrement(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetPlacementTypeOverride (Underlying native function: GetPlacementTypeOverride 0x8a63700)
	struct TEnumAsByte<EPlacementType> GetPlacementTypeOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetPlacementPreviewClass (Underlying native function: GetPlacementPreviewClass 0x8a636d4)
	class UClass* GetPlacementPreviewClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetMaxPlacementDistance (Underlying native function: GetMaxPlacementDistance 0x8a63480)
	int GetMaxPlacementDistance(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetGridSnapSizeOverride (Underlying native function: GetGridSnapSizeOverride 0x8a62be0)
	float GetGridSnapSizeOverride(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetGridPlacementOffset (Underlying native function: GetGridPlacementOffset 0x8a62bc8)
	float GetGridPlacementOffset(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortDecoItemDefinition.GetBlueprintClass (Underlying native function: GetBlueprintClass 0x8a624a4)
	class UClass* GetBlueprintClass(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

