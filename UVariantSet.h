// Class /Script/VariantManagerContent.VariantSet
// Size: 0x78
class UVariantSet : public UObject
{
	struct FText DisplayText; // 0x28 (0x18)
	unsigned char unreflected_40[0x18]; // 0x40 (0x18) 
	bool bExpanded; // 0x58 (0x1)
	unsigned char unreflected_59[0x7]; // 0x59 (0x7) 
	struct TArray<class UVariant*> Variants; // 0x60 (0x10)
	class UTexture2D* Thumbnail; // 0x70 (0x8)

	/* Functions */

	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromTexture (Underlying native function: SetThumbnailFromTexture 0x80124d8)
	void SetThumbnailFromTexture(class UTexture2D*& NewThumbnail); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromFile (Underlying native function: SetThumbnailFromFile 0x80122b0)
	void SetThumbnailFromFile(struct FString& FilePath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromEditorViewport (Underlying native function: SetThumbnailFromEditorViewport 0x26daa0c)
	void SetThumbnailFromEditorViewport(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.SetThumbnailFromCamera (Underlying native function: SetThumbnailFromCamera 0x8011f04)
	void SetThumbnailFromCamera(class UObject*& WorldContextObject, struct FTransform& CameraTransform, float& FOVDegrees, float& MinZ, float& Gamma); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.SetDisplayText (Underlying native function: SetDisplayText 0x8011b44)
	void SetDisplayText(struct FText& NewDisplayText); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.GetVariantByName (Underlying native function: GetVariantByName 0x80114e0)
	class UVariant* GetVariantByName(struct FString& VariantName); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.VariantSet.GetVariant (Underlying native function: GetVariant 0x8011440)
	class UVariant* GetVariant(int& VariantIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.VariantSet.GetThumbnail (Underlying native function: GetThumbnail 0x8011428)
	class UTexture2D* GetThumbnail(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/VariantManagerContent.VariantSet.GetParent (Underlying native function: GetParent 0x8011358)
	class ULevelVariantSets* GetParent(); // (Final | Native | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/VariantManagerContent.VariantSet.GetNumVariants (Underlying native function: GetNumVariants 0x8011290)
	int GetNumVariants(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/VariantManagerContent.VariantSet.GetDisplayText (Underlying native function: GetDisplayText 0x8011110)
	struct FText GetDisplayText(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

