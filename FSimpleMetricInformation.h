// ScriptStruct /Script/FortniteGame.SimpleMetricInformation
// Size: 0x78
struct FSimpleMetricInformation
{
	struct TArray<enum EFortBudgetCategory> CategoryNames; // 0x0 (0x10)
	struct TArray<int> CategoryValues; // 0x10 (0x10)
	struct TArray<int> CategoryBudgets; // 0x20 (0x10)
	struct FVector Location; // 0x30 (0x18)
	float NormalizedGroupBudgetValue; // 0x48 (0x4)
	int GroupTotalBudget; // 0x4c (0x4)
	struct FVector NeighbourGroupCenter; // 0x50 (0x18)
	struct TArray<unsigned char> NeighbourGroupBudgetValue; // 0x68 (0x10)
};

