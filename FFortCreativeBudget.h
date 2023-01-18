// ScriptStruct /Script/FortniteGame.FortCreativeBudget
// Size: 0x18
struct FFortCreativeBudget
{
	int TotalBudget; // 0x0 (0x4)
	int UsedBudget; // 0x4 (0x4)
	int PreviewBudget; // 0x8 (0x4)
	enum EFortBudgetCategory category; // 0xc (0x1)
	bool bCritical; // 0xd (0x1)
	unsigned char unreflected_e[0x2]; // 0xe (0x2) 
	int BudgetLowend; // 0x10 (0x4)
	int FixedInstanceCost; // 0x14 (0x4)
};

