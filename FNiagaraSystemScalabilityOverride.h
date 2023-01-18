// ScriptStruct /Script/Niagara.NiagaraSystemScalabilityOverride
// Size: 0xa0
struct FNiagaraSystemScalabilityOverride : FNiagaraSystemScalabilitySettings
{
	unsigned char bOverrideDistanceSettings; // 0x98 (0x1)
	unsigned char bOverrideInstanceCountSettings; // 0x98 (0x1)
	unsigned char bOverridePerSystemInstanceCountSettings; // 0x98 (0x1)
	unsigned char bOverrideVisibilitySettings; // 0x98 (0x1)
	unsigned char bOverrideGlobalBudgetScalingSettings; // 0x98 (0x1)
	unsigned char bOverrideCullProxySettings; // 0x98 (0x1)
	unsigned char padding_99[0x7]; // 0x99 (0x7)
};

