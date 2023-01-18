// ScriptStruct /Script/NiagaraShader.NiagaraCompileEvent
// Size: 0x68
struct FNiagaraCompileEvent
{
	enum FNiagaraCompileEventSeverity Severity; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString message; // 0x8 (0x10)
	struct FString ShortDescription; // 0x18 (0x10)
	bool bDismissable; // 0x28 (0x1)
	unsigned char unreflected_29[0x3]; // 0x29 (0x3) 
	struct FGuid NodeGUID; // 0x2c (0x10)
	struct FGuid PinGuid; // 0x3c (0x10)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FGuid> StackGuids; // 0x50 (0x10)
	enum FNiagaraCompileEventSource Source; // 0x60 (0x1)
	unsigned char padding_61[0x7]; // 0x61 (0x7)
};

