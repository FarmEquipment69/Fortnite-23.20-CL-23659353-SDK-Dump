// ScriptStruct /Script/FortniteGame.FortCreativeBudgetPlotBudgetOverride
// Size: 0x58
struct FFortCreativeBudgetPlotBudgetOverride
{
	struct TWeakObjectPtr<class UFortCreativeRealEstatePlotItemDefinition> PlotItemDefinitionClass; // 0x0 (0x28)
	struct TArray<struct FFortCreativeBudget> Budgets; // 0x28 (0x10)
	bool bCreativeHeatmapThermometerEnabled; // 0x38 (0x1)
	unsigned char unreflected_39[0x3]; // 0x39 (0x3) 
	float CreativeHeatmapThermometerCellSize; // 0x3c (0x4)
	float CreativeHeatmapThermometerInfluenceDistanceMultiplier; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct TArray<struct FFortCreativeGridCellBudget> CreativeHeatmapThermometerBudgetOverrides; // 0x48 (0x10)
};

