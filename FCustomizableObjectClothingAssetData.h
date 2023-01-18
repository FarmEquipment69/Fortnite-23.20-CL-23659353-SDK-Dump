// ScriptStruct /Script/CustomizableObject.CustomizableObjectClothingAssetData
// Size: 0x80
struct FCustomizableObjectClothingAssetData
{
	struct TArray<struct FClothLODDataCommon> LodData; // 0x0 (0x10)
	struct TArray<int> LodMap; // 0x10 (0x10)
	struct TArray<struct FName> UsedBoneNames; // 0x20 (0x10)
	struct TArray<int> UsedBoneIndices; // 0x30 (0x10)
	int ReferenceBoneIndex; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FCustomizableObjectClothConfigData> ConfigsData; // 0x48 (0x10)
	struct FString PhysicsAssetPath; // 0x58 (0x10)
	struct FName Name; // 0x68 (0x4)
	struct FGuid OriginalAssetGuid; // 0x6c (0x10)
	unsigned char padding_7c[0x4]; // 0x7c (0x4)
};

