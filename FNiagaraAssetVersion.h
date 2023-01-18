// ScriptStruct /Script/Niagara.NiagaraAssetVersion
// Size: 0x1c
struct FNiagaraAssetVersion
{
	int MajorVersion; // 0x0 (0x4)
	int MinorVersion; // 0x4 (0x4)
	struct FGuid VersionGuid; // 0x8 (0x10)
	bool bIsVisibleInVersionSelector; // 0x18 (0x1)
	unsigned char padding_19[0x3]; // 0x19 (0x3)
};

