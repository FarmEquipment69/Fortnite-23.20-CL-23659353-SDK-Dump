// Class /Script/FortniteGame.FortCreativeBudgeterData
// Size: 0xb0
class UFortCreativeBudgeterData : public UObject
{
	struct TArray<struct FFortCreativeBudgetOverride> CostOverrides; // 0x28 (0x10)
	struct TArray<struct FFortCreativeBudgetClassInstanceLimit*> TransientClassLimits; // 0x38 (0x10)
	struct TArray<struct FFortCreativeBudgetPickupInstanceLimit*> TransientPickupLimits; // 0x48 (0x10)
	struct TArray<struct FFortCreativeBudgetClassInstanceLimit*> SavedClassLimits; // 0x58 (0x10)
	struct TArray<struct FFortCreativeBudgetComponentSimulationCost> ComponentSimulationCosts; // 0x68 (0x10)
	struct TArray<struct FFortCreativeBudget> Budgets; // 0x78 (0x10)
	struct TArray<struct FFortCreativeBudgetPlotBudgetOverride> PlotBudgetOverrides; // 0x88 (0x10)
	struct TArray<struct FFortCreativeBudget> BattleLabBudgets; // 0x98 (0x10)
	bool bEnableInstanceTracking; // 0xa8 (0x1)
	unsigned char padding_a9[0x7]; // 0xa9 (0x7)
};

