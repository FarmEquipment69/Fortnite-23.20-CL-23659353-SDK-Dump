// ScriptStruct /Script/Engine.SkeletalMeshClothBuildParams
// Size: 0x58
struct FSkeletalMeshClothBuildParams
{
	struct TWeakObjectPtr<class UClothingAssetBase> TargetAsset; // 0x0 (0x8)
	int TargetLod; // 0x8 (0x4)
	bool bRemapParameters; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FString AssetName; // 0x10 (0x10)
	int LODIndex; // 0x20 (0x4)
	int SourceSection; // 0x24 (0x4)
	bool bRemoveFromMesh; // 0x28 (0x1)
	unsigned char unreflected_29[0x7]; // 0x29 (0x7) 
	struct TWeakObjectPtr<class UPhysicsAsset> PhysicsAsset; // 0x30 (0x28)
};

