// Class /Script/FortniteGame.BuildingEditModeSupport_Stair
// Size: 0x3b8
class UBuildingEditModeSupport_Stair : public UBuildingEditModeSupport
{
	class UBuildingEditModeMetadata_Stair* StairPreviewMetadata; // 0x2e8 (0x8)
	class UBuildingEditModeMetadata_Stair* LastValidMetadataConfiguration; // 0x2f0 (0x8)
	struct TWeakObjectPtr<class UStaticMesh> AuxiliaryIndicatorMesh; // 0x2f8 (0x28)
	struct TArray<class UStaticMeshComponent*> AuxiliaryIndicatorComponents; // 0x320 (0x10)
	class UStaticMeshComponent* ActivatedAuxIndicatorComponent; // 0x330 (0x8)
	struct TWeakObjectPtr<class UMaterialInterface> AuxIndicatorComponentParentMaterial; // 0x338 (0x28)
	struct TWeakObjectPtr<class UTexture2D> AuxIndicatorArrowTexture; // 0x360 (0x28)
	struct TWeakObjectPtr<class UTexture2D> AuxIndicatorGridTexture; // 0x388 (0x28)
	unsigned char padding_3b0[0x8]; // 0x3b0 (0x8)
};

