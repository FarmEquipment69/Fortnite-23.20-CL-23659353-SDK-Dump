// Class /Script/UMG.Image
// Size: 0x280
class UImage : public UWidget
{
	unsigned char unreflected_148[0x8]; // 0x148 (0x8) 
	struct FSlateBrush Brush; // 0x150 (0xc0)
	struct FDelegate BrushDelegate; // 0x210 (0xc)
	struct FLinearColor ColorAndOpacity; // 0x21c (0x10)
	struct FDelegate ColorAndOpacityDelegate; // 0x22c (0xc)
	bool bFlipForRightToLeftFlowDirection; // 0x238 (0x1)
	unsigned char unreflected_239[0x3]; // 0x239 (0x3) 
	struct FDelegate OnMouseButtonDownEvent; // 0x23c (0xc)
	unsigned char padding_248[0x38]; // 0x248 (0x38)

	/* Functions */

	// Function /Script/UMG.Image.SetOpacity (Underlying native function: SetOpacity 0x187bd70)
	void SetOpacity(float& InOpacity); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetDesiredSizeOverride (Underlying native function: SetDesiredSizeOverride 0x2221b84)
	void SetDesiredSizeOverride(struct FVector2D& DesiredSize); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Image.SetColorAndOpacity (Underlying native function: SetColorAndOpacity 0x187cde4)
	void SetColorAndOpacity(struct FLinearColor& InColorAndOpacity); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushTintColor (Underlying native function: SetBrushTintColor 0x256c1a0)
	void SetBrushTintColor(struct FSlateColor& TintColor); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushResourceObject (Underlying native function: SetBrushResourceObject 0x9b0d2c4)
	void SetBrushResourceObject(class UObject*& ResourceObject); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromTextureDynamic (Underlying native function: SetBrushFromTextureDynamic 0x9b0d1f8)
	void SetBrushFromTextureDynamic(class UTexture2DDynamic*& Texture, bool& bMatchSize); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromTexture (Underlying native function: SetBrushFromTexture 0x1ac5278)
	void SetBrushFromTexture(class UTexture2D*& Texture, bool& bMatchSize); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromSoftTexture (Underlying native function: SetBrushFromSoftTexture 0x260e034)
	void SetBrushFromSoftTexture(struct TWeakObjectPtr<class UTexture2D>& SoftTexture, bool& bMatchSize); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromSoftMaterial (Underlying native function: SetBrushFromSoftMaterial 0x14e6f00)
	void SetBrushFromSoftMaterial(struct TWeakObjectPtr<class UMaterialInterface>& SoftMaterial); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromMaterial (Underlying native function: SetBrushFromMaterial 0x15debcc)
	void SetBrushFromMaterial(class UMaterialInterface*& Material); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromAtlasInterface (Underlying native function: SetBrushFromAtlasInterface 0x176d610)
	void SetBrushFromAtlasInterface(struct TScriptInterface<class ISlateTextureAtlasInterface>& AtlasRegion, bool& bMatchSize); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrushFromAsset (Underlying native function: SetBrushFromAsset 0x9b0d174)
	void SetBrushFromAsset(class USlateBrushAsset*& Asset); // (Native | Public | BlueprintCallable)

	// Function /Script/UMG.Image.SetBrush (Underlying native function: SetBrush 0x1ac592c)
	void SetBrush(struct FSlateBrush& InBrush); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/UMG.Image.GetDynamicMaterial (Underlying native function: GetDynamicMaterial 0x176cbbc)
	class UMaterialInstanceDynamic* GetDynamicMaterial(); // (Final | Native | Public | BlueprintCallable)
};

