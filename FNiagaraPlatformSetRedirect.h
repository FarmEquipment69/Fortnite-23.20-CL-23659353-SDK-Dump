// ScriptStruct /Script/Niagara.NiagaraPlatformSetRedirect
// Size: 0x78
struct FNiagaraPlatformSetRedirect
{
	struct TArray<struct FName> ProfileNames; // 0x0 (0x10)
	enum ENiagaraDeviceProfileRedirectMode Mode; // 0x10 (0x1)
	unsigned char unreflected_11[0x3]; // 0x11 (0x3) 
	struct FName RedirectProfileName; // 0x14 (0x4)
	struct FNiagaraPlatformSetCVarCondition CVarConditionEnabled; // 0x18 (0x30)
	struct FNiagaraPlatformSetCVarCondition CVarConditionDisabled; // 0x48 (0x30)
};

