// ScriptStruct /Script/Niagara.NiagaraPlatformSetConflictInfo
// Size: 0x18
struct FNiagaraPlatformSetConflictInfo
{
	int SetAIndex; // 0x0 (0x4)
	int SetBIndex; // 0x4 (0x4)
	struct TArray<struct FNiagaraPlatformSetConflictEntry*> Conflicts; // 0x8 (0x10)
};

