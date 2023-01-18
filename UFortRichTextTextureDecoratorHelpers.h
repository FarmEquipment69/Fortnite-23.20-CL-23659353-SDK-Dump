// Class /Script/FortniteUI.FortRichTextTextureDecoratorHelpers
// Size: 0x28
class UFortRichTextTextureDecoratorHelpers : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.FortRichTextTextureDecoratorHelpers.MakeFortRichTextTexture (Underlying native function: MakeFortRichTextTexture 0x6164260)
	static struct FText MakeFortRichTextTexture(struct TWeakObjectPtr<class UTexture2D>& InTexture, bool& bUseDesiredSize, int& Width, int& Height); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.FortRichTextTextureDecoratorHelpers.MakeFortRichTextMaterial (Underlying native function: MakeFortRichTextMaterial 0x6164260)
	static struct FText MakeFortRichTextMaterial(struct TWeakObjectPtr<class UMaterialInterface>& InMaterial, bool& bUseDesiredSize, int& Width, int& Height); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

