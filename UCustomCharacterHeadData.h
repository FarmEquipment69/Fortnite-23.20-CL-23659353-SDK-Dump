// Class /Script/FortniteGame.CustomCharacterHeadData
// Size: 0x1a8
class UCustomCharacterHeadData : public UCustomCharacterBodyPartData
{
	struct TWeakObjectPtr<class UFortMontageLookupTable> RootSkeletonDefaultMontageLookupTable; // 0xc8 (0x28)
	struct TWeakObjectPtr<class UFortMontageLookupTable> RootSkeletonOverrideMontageLookupTable; // 0xf0 (0x28)
	struct TWeakObjectPtr<class UCustomSkinColorSwatch> SkinColorSwatch; // 0x118 (0x28)
	struct TWeakObjectPtr<class UCustomHairColorSwatch> HairColorSwatch; // 0x140 (0x28)
	struct TArray<struct FName> CapMorphTargets; // 0x168 (0x10)
	struct TArray<struct FName> HelmetMorphTargets; // 0x178 (0x10)
	struct TArray<struct FName> MaskMorphTargets; // 0x188 (0x10)
	struct TArray<struct FName> HatMorphTargets; // 0x198 (0x10)
};

