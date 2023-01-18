// ScriptStruct /Script/Niagara.NiagaraEmitterHandle
// Size: 0x40
struct FNiagaraEmitterHandle
{
	struct FGuid ID; // 0x0 (0x10)
	struct FName IdName; // 0x10 (0x4)
	bool bIsEnabled; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FName Name; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	class UNiagaraEmitter* Instance; // 0x20 (0x8)
	struct FVersionedNiagaraEmitter VersionedInstance; // 0x28 (0x18)
};

