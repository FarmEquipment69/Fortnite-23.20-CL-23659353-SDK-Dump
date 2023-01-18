// Class /Script/FortniteGame.FortItemSeriesDefinition
// Size: 0x110
class UFortItemSeriesDefinition : public UPrimaryDataAsset
{
	struct FText DisplayName; // 0x30 (0x18)
	struct FFortColorPalette Colors; // 0x48 (0x50)
	struct TWeakObjectPtr<class UTexture2D> BackgroundTexture; // 0x98 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> ItemCardMaterial; // 0xc0 (0x28)
	struct TWeakObjectPtr<class UMaterialInterface> BackgroundMaterial; // 0xe8 (0x28)
};

