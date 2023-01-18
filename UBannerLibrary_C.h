// BlueprintGeneratedClass /Game/Banners/BannerLibrary.BannerLibrary_C
// Size: 0x28
class UBannerLibrary_C : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Game/Banners/BannerLibrary.BannerLibrary_C.UpdateBannerIconOnMaterial (Has no native function)
	static void UpdateBannerIconOnMaterial(class UMaterialInstanceDynamic*& Material, class UTexture*& Icon, class UObject*& WorldContext); // (Static | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Banners/BannerLibrary.BannerLibrary_C.UpdateBannerColorOnMaterial (Has no native function)
	static void UpdateBannerColorOnMaterial(class UMaterialInstanceDynamic*& Material, struct FLinearColor& PrimaryBGColor, struct FLinearColor& SecondaryBGColor, class UObject*& WorldContext); // (Static | Public | BlueprintCallable | BlueprintEvent)

	// Function /Game/Banners/BannerLibrary.BannerLibrary_C.GenericUpdateMaterial (Has no native function)
	static void GenericUpdateMaterial(class UMaterialInstanceDynamic*& Target, class UTexture*& BannerIcon, struct FLinearColor& BGPrimaryColor, struct FLinearColor& BGSecondaryColor, class UTexture*& ShapeIcon, class UObject*& WorldContext); // (Static | Public | BlueprintCallable | BlueprintEvent)
};

