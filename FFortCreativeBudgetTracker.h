// ScriptStruct /Script/FortniteGame.FortCreativeBudgetTracker
// Size: 0x2c0
struct FFortCreativeBudgetTracker
{
	struct TArray<struct FFortCreativeBudget> Budgets; // 0x50 (0x10)
	unsigned char unreflected_60[0x50]; // 0x60 (0x50) 
	struct TArray<uint32_t> AssetInstances; // 0xb0 (0x10)
	struct TArray<uint32_t> AssetLastInstances; // 0xc0 (0x10)
	unsigned char unreflected_d0[0x178]; // 0xd0 (0x178) 
	struct TMap<struct TWeakObjectPtr<class UObject>, int> UsedAssetDependencies; // 0x248 (0x50)
	unsigned char padding_298[0x28]; // 0x298 (0x28)
};

