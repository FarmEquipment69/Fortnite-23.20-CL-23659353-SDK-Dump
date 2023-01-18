// ScriptStruct /Script/Niagara.NiagaraGlobalBudgetScaling
// Size: 0x38
struct FNiagaraGlobalBudgetScaling
{
	unsigned char bCullByGlobalBudget; // 0x0 (0x1)
	unsigned char bScaleMaxDistanceByGlobalBudgetUse; // 0x0 (0x1)
	unsigned char bScaleMaxInstanceCountByGlobalBudgetUse; // 0x0 (0x1)
	unsigned char bScaleSystemInstanceCountByGlobalBudgetUse; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	float MaxGlobalBudgetUsage; // 0x4 (0x4)
	struct FNiagaraLinearRamp MaxDistanceScaleByGlobalBudgetUse; // 0x8 (0x10)
	struct FNiagaraLinearRamp MaxInstanceCountScaleByGlobalBudgetUse; // 0x18 (0x10)
	struct FNiagaraLinearRamp MaxSystemInstanceCountScaleByGlobalBudgetUse; // 0x28 (0x10)
};

