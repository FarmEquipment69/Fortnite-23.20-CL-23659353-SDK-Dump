// Class /Script/VariantManagerContent.Variant
// Size: 0x80
class UVariant : public UObject
{
	struct TArray<struct FVariantDependency> Dependencies; // 0x28 (0x10)
	struct FText DisplayText; // 0x38 (0x18)
	unsigned char unreflected_50[0x18]; // 0x50 (0x18) 
	struct TArray<class UVariantObjectBinding*> ObjectBindings; // 0x68 (0x10)
	class UTexture2D* Thumbnail; // 0x78 (0x8)

	/* Functions */

	// Function /Script/VariantManagerContent.Variant.SwitchOn (Underlying native function: SwitchOn 0x8012564)
	void SwitchOn(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromTexture (Underlying native function: SetThumbnailFromTexture 0x801244c)
	void SetThumbnailFromTexture(class UTexture2D*& NewThumbnail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromFile (Underlying native function: SetThumbnailFromFile 0x8012114)
	void SetThumbnailFromFile(struct FString& FilePath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromEditorViewport (Underlying native function: SetThumbnailFromEditorViewport 0x26daa0c)
	void SetThumbnailFromEditorViewport(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetThumbnailFromCamera (Underlying native function: SetThumbnailFromCamera 0x8011cf4)
	void SetThumbnailFromCamera(class UObject*& WorldContextObject, struct FTransform& CameraTransform, float& FOVDegrees, float& MinZ, float& Gamma); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetDisplayText (Underlying native function: SetDisplayText 0x8011a14)
	void SetDisplayText(struct FText& NewDisplayText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.SetDependency (Underlying native function: SetDependency 0x8011914)
	void SetDependency(int& Index, struct FVariantDependency& Dependency); // (Final | Native | Public | HasOutParms)

	// Function /Script/VariantManagerContent.Variant.IsActive (Underlying native function: IsActive 0x8011870)
	bool IsActive(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.GetThumbnail (Underlying native function: GetThumbnail 0x8011410)
	class UTexture2D* GetThumbnail(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.GetParent (Underlying native function: GetParent 0x8011318)
	class UVariantSet* GetParent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.Variant.GetNumDependencies (Underlying native function: GetNumDependencies 0x731dc50)
	int GetNumDependencies(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.Variant.GetNumActors (Underlying native function: GetNumActors 0x801127c)
	int GetNumActors(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.Variant.GetDisplayText (Underlying native function: GetDisplayText 0x80110a8)
	struct FText GetDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VariantManagerContent.Variant.GetDependents (Underlying native function: GetDependents 0x8010d40)
	struct TArray<class UVariant*> GetDependents(class ULevelVariantSets*& LevelVariantSets, bool& bOnlyEnabledDependencies); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.Variant.GetDependency (Underlying native function: GetDependency 0x8010cac)
	struct FVariantDependency GetDependency(int& Index); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.Variant.GetActor (Underlying native function: GetActor 0x8010c00)
	class AActor* GetActor(int& ActorIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.Variant.DeleteDependency (Underlying native function: DeleteDependency 0x8010b80)
	void DeleteDependency(int& Index); // (Final | Native | Public)

	// Function /Script/VariantManagerContent.Variant.AddDependency (Underlying native function: AddDependency 0x8010ac0)
	int AddDependency(struct FVariantDependency& Dependency); // (Final | Native | Public | HasOutParms)
};

