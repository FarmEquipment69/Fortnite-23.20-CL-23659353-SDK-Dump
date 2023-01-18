// Class /Script/FortniteGame.BuildingEditModeSupport
// Size: 0x2e8
class UBuildingEditModeSupport : public UObject
{
	struct TWeakObjectPtr<class ABuildingSMActor> OwnerBuilding; // 0x28 (0x8)
	class AFortPlayerController* EditingController; // 0x30 (0x8)
	class UBuildingEditModeMetadata* PreviewMetadata; // 0x38 (0x8)
	class UBuildingEditModeMetadata* ScratchpadMetadata; // 0x40 (0x8)
	class UClass* ExpectedMetadataClass; // 0x48 (0x8)
	struct TArray<class UClass*> PossibleEditClasses; // 0x50 (0x10)
	struct TWeakObjectPtr<class UStaticMesh> EditTileMesh; // 0x60 (0x28)
	struct TArray<class UStaticMeshComponent*> EditTileMeshComponents; // 0x88 (0x10)
	struct TWeakObjectPtr<class UMaterialInterface> TileMaterialParent; // 0x98 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> AlternateTileMaterialParent; // 0xc0 (0x28)
	struct TWeakObjectPtr<class UTexture2D> ActiveTileTexture; // 0xe8 (0x28)
	struct TWeakObjectPtr<class UTexture2D> InactiveTileTexture; // 0x110 (0x28)
	class UStaticMeshComponent* LastInteractedComp; // 0x138 (0x8)
	class UStaticMeshComponent* LastHighlightedComp; // 0x140 (0x8)
	class UStaticMeshComponent* PreviewComponent; // 0x148 (0x8)
	struct TWeakObjectPtr<class UMaterialInterface> PreviewMaterial; // 0x150 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> AlternatePreviewMaterial; // 0x178 (0x28)
	struct FEditModeState PreviewEditModeState; // 0x1a0 (0x10)
	struct TWeakObjectPtr<class UCurveFloat> SuccessfulPatternMatchCurve; // 0x1b0 (0x28)
	struct FTimeline SuccessfulMatchInteractTimeline; // 0x1d8 (0x90)
	unsigned char bCanMirrorMetadataToMatch; // 0x268 (0x1)
	unsigned char bCanRotateMetadataToMatch; // 0x268 (0x1)
	unsigned char bEditActionInProgress; // 0x268 (0x1)
	unsigned char bInitializedTimelines; // 0x268 (0x1)
	unsigned char bUseAlternateMaterials; // 0x268 (0x1)
	unsigned char padding_269[0x7f]; // 0x269 (0x7f)

	/* Functions */

	// Function /Script/FortniteGame.BuildingEditModeSupport.OnSuccessfulMatchInteractParamUpdate (Underlying native function: OnSuccessfulMatchInteractParamUpdate 0x6cc2d20)
	void OnSuccessfulMatchInteractParamUpdate(float& NewInteractParamVal); // (Native | Public)

	// Function /Script/FortniteGame.BuildingEditModeSupport.OnSuccessfulMatchInteractComplete (Underlying native function: OnSuccessfulMatchInteractComplete 0x735d960)
	void OnSuccessfulMatchInteractComplete(); // (Native | Public)
};

