// Class /Script/FortniteGame.FortDecoPreview
// Size: 0x3e0
class AFortDecoPreview : public AActor
{
	struct TEnumAsByte<EBuildingAttachmentType> FallbackAttachmentType; // 0x288 (0x1)
	struct TEnumAsByte<EPlacementType> FallbackPlacementType; // 0x289 (0x1)
	unsigned char unreflected_28a[0x6]; // 0x28a (0x6) 
	struct TWeakObjectPtr<class UMaterialInterface> PreviewPlacementMaterial; // 0x290 (0x28)
	struct TWeakObjectPtr<class UCurveFloat> MotionBounceCurve; // 0x2b8 (0x28)
	struct FName CanBePlacedMaterialScalarParam; // 0x2e0 (0x4)
	float ValidPlacementScalarParam; // 0x2e4 (0x4)
	float InvalidPlacementScalarParam; // 0x2e8 (0x4)
	struct FName InverseMovementVectorMaterialParam; // 0x2ec (0x4)
	float MovementEffectScale; // 0x2f0 (0x4)
	struct FName InverseOuterScaleVectorParam; // 0x2f4 (0x4)
	struct FName InverseInnerScaleVectorParam; // 0x2f8 (0x4)
	struct FName WorldSpacePivotVectorParam; // 0x2fc (0x4)
	struct FName DiffuseTextureParam; // 0x300 (0x4)
	float FreePlacementOffset; // 0x304 (0x4)
	struct FTimeline BounceTimeline; // 0x308 (0x90)
	struct TArray<class UMaterialInstanceDynamic*> PreviewMIDs; // 0x398 (0x10)
	struct FVector DirectionChange; // 0x3a8 (0x18)
	struct FVector WorldSpacePivot; // 0x3c0 (0x18)
	class AFortDecoHelper* ParentDecoHelper; // 0x3d8 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortDecoPreview.SetVectorParameterValueOnAllPreviewMIDs (Underlying native function: SetVectorParameterValueOnAllPreviewMIDs 0x9042e04)
	void SetVectorParameterValueOnAllPreviewMIDs(struct FName& ParamName, struct FLinearColor& ParamValue); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.SetScalarParameterValueOnAllPreviewMIDs (Underlying native function: SetScalarParameterValueOnAllPreviewMIDs 0x90427e4)
	void SetScalarParameterValueOnAllPreviewMIDs(struct FName& ParamName, float& ParamValue); // (Native | Event | Public | BlueprintCallable | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.OnUpdateVisuals (Underlying native function: OnUpdateVisuals 0x9040c38)
	void OnUpdateVisuals(float& DeltaSeconds, bool& bSafeToPlace); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.OnUpdateScale (Underlying native function: OnUpdateScale 0x9040b64)
	void OnUpdateScale(float& Scale, struct FVector& InWorldSpacePivot); // (Native | Event | Public | HasOutParms | HasDefaults | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.OnInitializeDecoPreview (Underlying native function: OnInitializeDecoPreview 0x90408ec)
	void OnInitializeDecoPreview(class ABuildingActor*& NewBuildingActor, class UFortDecoItemDefinition*& NewDecoItemDefinition); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.OnBounceMotionUpdate (Underlying native function: OnBounceMotionUpdate 0x76c8a88)
	void OnBounceMotionUpdate(float& VectorScale); // (Native | Event | Public | BlueprintEvent)

	// Function /Script/FortniteGame.FortDecoPreview.GetTextureParameterValueFromMeshComponent (Underlying native function: GetTextureParameterValueFromMeshComponent 0x903fd3c)
	class UTexture* GetTextureParameterValueFromMeshComponent(class UMeshComponent*& MeshComp, int& ElementIdx, struct FName& ParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortDecoPreview.CreatePreviewMID (Underlying native function: CreatePreviewMID 0x903ed70)
	class UMaterialInstanceDynamic* CreatePreviewMID(class UMaterialInterface*& OverrideParentMaterial); // (Final | Native | Public | BlueprintCallable)
};

