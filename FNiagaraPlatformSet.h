// ScriptStruct /Script/Niagara.NiagaraPlatformSet
// Size: 0x30
struct FNiagaraPlatformSet
{
	int QualityLevelMask; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates; // 0x8 (0x10)
	struct TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions; // 0x18 (0x10)
	unsigned char padding_28[0x8]; // 0x28 (0x8)
};

