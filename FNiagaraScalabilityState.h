// ScriptStruct /Script/Niagara.NiagaraScalabilityState
// Size: 0xc
struct FNiagaraScalabilityState
{
	float Significance; // 0x0 (0x4)
	float LastVisibleTime; // 0x4 (0x4)
	unsigned char unreflected_8[0x2]; // 0x8 (0x2) 
	unsigned char bCulled; // 0xa (0x1)
	unsigned char bPreviousCulled; // 0xa (0x1)
	unsigned char bCulledByDistance; // 0xa (0x1)
	unsigned char bCulledByInstanceCount; // 0xa (0x1)
	unsigned char bCulledByVisibility; // 0xa (0x1)
	unsigned char bCulledByGlobalBudget; // 0xa (0x1)
	unsigned char padding_b[0x1]; // 0xb (0x1)
};

