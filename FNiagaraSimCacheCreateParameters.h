// ScriptStruct /Script/Niagara.NiagaraSimCacheCreateParameters
// Size: 0x38
struct FNiagaraSimCacheCreateParameters
{
	enum ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	unsigned char bAllowRebasing; // 0x4 (0x1)
	unsigned char bAllowDataInterfaceCaching; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TArray<struct FName> RebaseIncludeAttributes; // 0x8 (0x10)
	struct TArray<struct FName> RebaseExcludeAttributes; // 0x18 (0x10)
	struct TArray<struct FName> ExplicitCaptureAttributes; // 0x28 (0x10)
};

