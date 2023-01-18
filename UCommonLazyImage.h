// Class /Script/CommonUI.CommonLazyImage
// Size: 0x380
class UCommonLazyImage : public UImage
{
	struct FSlateBrush LoadingBackgroundBrush; // 0x280 (0xc0)
	struct FName MaterialTextureParamName; // 0x340 (0x4)
	unsigned char unreflected_344[0x4]; // 0x344 (0x4) 
	struct FMulticastInlineDelegate BPOnLoadingStateChanged; // 0x348 (0x10)
	unsigned char padding_358[0x28]; // 0x358 (0x28)

	/* Functions */

	// Function /Script/CommonUI.CommonLazyImage.SetMaterialTextureParamName (Underlying native function: SetMaterialTextureParamName 0x6a4e1cc)
	void SetMaterialTextureParamName(struct FName& TextureParamName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyTexture (Underlying native function: SetBrushFromLazyTexture 0x14e5548)
	void SetBrushFromLazyTexture(struct TWeakObjectPtr<class UTexture2D>& LazyTexture, bool& bMatchSize); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyMaterial (Underlying native function: SetBrushFromLazyMaterial 0x6a4d088)
	void SetBrushFromLazyMaterial(struct TWeakObjectPtr<class UMaterialInterface>& LazyMaterial); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonLazyImage.SetBrushFromLazyDisplayAsset (Underlying native function: SetBrushFromLazyDisplayAsset 0x6a4cf84)
	void SetBrushFromLazyDisplayAsset(struct TWeakObjectPtr<class UObject>& LazyObject, bool& bMatchTextureSize); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/CommonUI.CommonLazyImage.IsLoading (Underlying native function: IsLoading 0x6a4c4fc)
	bool IsLoading(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

