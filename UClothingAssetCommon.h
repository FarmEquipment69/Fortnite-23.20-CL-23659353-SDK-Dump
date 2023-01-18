// Class /Script/ClothingSystemRuntimeCommon.ClothingAssetCommon
// Size: 0xf0
class UClothingAssetCommon : public UClothingAssetBase
{
	class UPhysicsAsset* PhysicsAsset; // 0x48 (0x8)
	struct TMap<struct FName, class UClothConfigBase*> ClothConfigs; // 0x50 (0x50)
	struct TArray<struct FClothLODDataCommon> LodData; // 0xa0 (0x10)
	struct TArray<int> LodMap; // 0xb0 (0x10)
	struct TArray<struct FName> UsedBoneNames; // 0xc0 (0x10)
	struct TArray<int> UsedBoneIndices; // 0xd0 (0x10)
	int ReferenceBoneIndex; // 0xe0 (0x4)
	unsigned char unreflected_e4[0x4]; // 0xe4 (0x4) 
	class UClothingAssetCustomData* CustomData; // 0xe8 (0x8)
};

