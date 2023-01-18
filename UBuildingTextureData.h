// Class /Script/FortniteGame.BuildingTextureData
// Size: 0x78
class UBuildingTextureData : public UDataAsset
{
	class UTexture2D* Diffuse; // 0x30 (0x8)
	class UTexture2D* Normal; // 0x38 (0x8)
	class UTexture2D* Specular; // 0x40 (0x8)
	struct FColor TintColor; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	class UMaterialInterface* OverrideMaterial; // 0x50 (0x8)
	struct TEnumAsByte<EFortTextureDataType> Type; // 0x58 (0x1)
	struct TEnumAsByte<EFortResourceType> ResourceType; // 0x59 (0x1)
	unsigned char unreflected_5a[0x2]; // 0x5a (0x2) 
	float ResourceCost[0x6]; // 0x5c (0x4) (ARRAY) 
	unsigned char padding_74[0x4]; // 0x74 (0x4)

	/* Functions */

	// Function /Script/FortniteGame.BuildingTextureData.GetColorOptions (Underlying native function: GetColorOptions 0x8090afc)
	struct TArray<struct FString> GetColorOptions(); // (Final | Native | Public | Const)
};

