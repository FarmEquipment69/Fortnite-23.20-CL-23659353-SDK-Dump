// Class /Script/FortniteGame.FortAnimSet
// Size: 0xd8
class UFortAnimSet : public UDataAsset
{
	struct FDirectoryPath SourceRootPath; // 0x30 (0x10)
	struct TArray<struct FDirectoryPath> TargetRootPathList; // 0x40 (0x10)
	class UAnimSequenceBase* FallbackSequence; // 0x50 (0x8)
	struct TArray<struct FName> UniqueInSourceAssets; // 0x58 (0x10)
	struct TArray<struct FName> UniqueInTargetAssets; // 0x68 (0x10)
	struct TArray<struct FFortAnimSetRandomAnimation> RandomAnimations; // 0x78 (0x10)
	struct TMap<struct FName, class UAnimationAsset*> AssetRemapping; // 0x88 (0x50)

	/* Functions */

	// Function /Script/FortniteGame.FortAnimSet.UpdateReferencesInRandomSection (Underlying native function: UpdateReferencesInRandomSection 0x82362cc)
	void UpdateReferencesInRandomSection(); // (Final | Native | Public)

	// Function /Script/FortniteGame.FortAnimSet.UpdateAssets (Underlying native function: UpdateAssets 0x82362b8)
	void UpdateAssets(); // (Final | Native | Public)
};

