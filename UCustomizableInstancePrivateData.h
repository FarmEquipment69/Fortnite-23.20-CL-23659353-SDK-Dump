// Class /Script/CustomizableObject.CustomizableInstancePrivateData
// Size: 0x288
class UCustomizableInstancePrivateData : public UObject
{
	struct TArray<struct FGeneratedMaterial> GeneratedMaterials; // 0x28 (0x10)
	struct TArray<struct FGeneratedTexture> GeneratedTextures; // 0x38 (0x10)
	unsigned char unreflected_48[0x50]; // 0x48 (0x50) 
	struct TArray<struct FParameterDecorations> ParameterDecorations; // 0x98 (0x10)
	unsigned char unreflected_a8[0x10]; // 0xa8 (0x10) 
	struct TMap<struct FString, struct TWeakObjectPtr<class UTexture2D>> TextureReuseCache; // 0xb8 (0x50)
	unsigned char unreflected_108[0x78]; // 0x108 (0x78) 
	struct TArray<struct FCustomizableInstanceComponentData> ComponentsData; // 0x180 (0x10)
	struct TArray<class UMaterialInterface*> ReferencedMaterials; // 0x190 (0x10)
	unsigned char unreflected_1a0[0xa0]; // 0x1a0 (0xa0) 
	struct TArray<class UPhysicsAsset*> ClothingPhysicsAssets; // 0x240 (0x10)
	struct TArray<class UClass*> GatheredAnimBPs; // 0x250 (0x10)
	struct FGameplayTagContainer AnimBPGameplayTags; // 0x260 (0x20)
	unsigned char padding_280[0x8]; // 0x280 (0x8)
};

