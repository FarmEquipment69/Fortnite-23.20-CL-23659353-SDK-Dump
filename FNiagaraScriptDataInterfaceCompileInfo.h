// ScriptStruct /Script/Niagara.NiagaraScriptDataInterfaceCompileInfo
// Size: 0x28
struct FNiagaraScriptDataInterfaceCompileInfo
{
	struct FName Name; // 0x0 (0x4)
	int UserPtrIdx; // 0x4 (0x4)
	struct FNiagaraTypeDefinition Type; // 0x8 (0x10)
	struct FName RegisteredParameterMapRead; // 0x18 (0x4)
	struct FName RegisteredParameterMapWrite; // 0x1c (0x4)
	bool bIsPlaceholder; // 0x20 (0x1)
	unsigned char padding_21[0x7]; // 0x21 (0x7)
};

