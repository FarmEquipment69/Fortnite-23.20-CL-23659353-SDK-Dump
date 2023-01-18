// ScriptStruct /Script/Niagara.NiagaraScriptDataInterfaceInfo
// Size: 0x28
struct FNiagaraScriptDataInterfaceInfo
{
	class UNiagaraDataInterface* DataInterface; // 0x0 (0x8)
	struct FName Name; // 0x8 (0x4)
	int UserPtrIdx; // 0xc (0x4)
	struct FNiagaraTypeDefinition Type; // 0x10 (0x10)
	struct FName RegisteredParameterMapRead; // 0x20 (0x4)
	struct FName RegisteredParameterMapWrite; // 0x24 (0x4)
};

