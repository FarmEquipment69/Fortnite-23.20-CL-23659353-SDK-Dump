// Class /Script/FortniteGame.CreativeEditOnlyMeshComponent
// Size: 0x6d0
class UCreativeEditOnlyMeshComponent : public UStaticMeshComponent
{
	unsigned char unreflected_600[0x8]; // 0x600 (0x8) 
	bool bLoadOnServer; // 0x608 (0x1)
	bool bUseStaticRotation; // 0x609 (0x1)
	bool bEditMeshCanBeNull; // 0x60a (0x1)
	unsigned char unreflected_60b[0x5]; // 0x60b (0x5) 
	struct TWeakObjectPtr<class UStaticMesh> EditMesh; // 0x610 (0x28)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> EditOverrideMaterials; // 0x638 (0x10)
	bool bShowInPreview; // 0x648 (0x1)
	unsigned char unreflected_649[0x7]; // 0x649 (0x7) 
	struct TWeakObjectPtr<class UStaticMesh> PreviewOverrideMesh; // 0x650 (0x28)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> PreviewOverrideMaterials; // 0x678 (0x10)
	struct FMulticastInlineDelegate OnMeshAndMaterialsLoaded; // 0x688 (0x10)
	unsigned char unreflected_698[0x10]; // 0x698 (0x10) 
	class UStaticMesh* CachedMesh; // 0x6a8 (0x8)
	struct TArray<class UMaterialInterface*> CachedOverrideMaterials; // 0x6b0 (0x10)
	unsigned char padding_6c0[0x10]; // 0x6c0 (0x10)

	/* Functions */

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.SetPreviewMeshAndMaterials (Underlying native function: SetPreviewMeshAndMaterials 0x8763154)
	void SetPreviewMeshAndMaterials(struct TWeakObjectPtr<class UStaticMesh>& InPreviewMesh, struct TArray<struct TWeakObjectPtr<class UMaterialInterface>>& InPreviewMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.SetEditMeshAndMaterials (Underlying native function: SetEditMeshAndMaterials 0x8762e5c)
	void SetEditMeshAndMaterials(struct TWeakObjectPtr<class UStaticMesh>& InEditMesh, struct TArray<struct TWeakObjectPtr<class UMaterialInterface>>& InEditMaterials); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.ReloadMeshAndMaterials (Underlying native function: ReloadMeshAndMaterials 0x87626d0)
	void ReloadMeshAndMaterials(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.OnMinigamePlayModeChanged (Underlying native function: OnMinigamePlayModeChanged 0x87618d0)
	void OnMinigamePlayModeChanged(class AFortMinigame*& Minigame, bool& bIsInPlayMode); // (Final | Native | Private)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.K2_UpdateEditorPreview (Has no native function)
	void K2UpdateEditorPreview(bool& bHasMoved); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.K2_SetupForEditorPreview (Has no native function)
	void K2SetupForEditorPreview(); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.IsEditorPreview (Underlying native function: IsEditorPreview 0x2486284)
	bool IsEditorPreview(); // (Final | Native | Private | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetPreviewOverrideMesh (Underlying native function: GetPreviewOverrideMesh 0x8760fe8)
	struct TWeakObjectPtr<class UStaticMesh> GetPreviewOverrideMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetPreviewOverrideMaterials (Underlying native function: GetPreviewOverrideMaterials 0x8760fcc)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> GetPreviewOverrideMaterials(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetEditOverrideMaterials (Underlying native function: GetEditOverrideMaterials 0x8760830)
	struct TArray<struct TWeakObjectPtr<class UMaterialInterface>> GetEditOverrideMaterials(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.CreativeEditOnlyMeshComponent.GetEditMesh (Underlying native function: GetEditMesh 0x876079c)
	struct TWeakObjectPtr<class UStaticMesh> GetEditMesh(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

