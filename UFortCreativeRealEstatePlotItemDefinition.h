// Class /Script/FortniteGame.FortCreativeRealEstatePlotItemDefinition
// Size: 0x5d0
class UFortCreativeRealEstatePlotItemDefinition : public UFortAccountItemDefinition
{
	struct FText UIDisplayName; // 0x420 (0x18)
	struct FText UIDisplayDescription; // 0x438 (0x18)
	struct TWeakObjectPtr<class UFortPlaysetItemDefinition> BasePlayset; // 0x450 (0x28)
	struct FString InitialSaveFileName; // 0x478 (0x10)
	int SizeX; // 0x488 (0x4)
	int SizeY; // 0x48c (0x4)
	struct FVector LocationOffset; // 0x490 (0x18)
	struct FRotator DefaultRotation; // 0x4a8 (0x18)
	enum ERealEstateOffsetType offsetType; // 0x4c0 (0x1)
	unsigned char unreflected_4c1[0xf]; // 0x4c1 (0xf) 
	struct FSlateBrush MapImage; // 0x4d0 (0xc0)
	int SortIndex; // 0x590 (0x4)
	bool bIsAvailableToUsers; // 0x594 (0x1)
	unsigned char unreflected_595[0x3]; // 0x595 (0x3) 
	struct TArray<struct FFortCreativeBudget> CreativeBudgetOverrides; // 0x598 (0x10)
	class UFortPlaylist* OverridePlaylist; // 0x5a8 (0x8)
	bool bCreativeHeatmapThermometerEnabled; // 0x5b0 (0x1)
	unsigned char unreflected_5b1[0x3]; // 0x5b1 (0x3) 
	float CreativeHeatmapThermometerInfluenceDistanceMultiplier; // 0x5b4 (0x4)
	int CreativeHeatmapThermometerCellSizeMultiplier; // 0x5b8 (0x4)
	unsigned char unreflected_5bc[0x4]; // 0x5bc (0x4) 
	struct TArray<struct FFortCreativeGridCellBudget> CreativeHeatmapThermometerBudgetOverrides; // 0x5c0 (0x10)
};

