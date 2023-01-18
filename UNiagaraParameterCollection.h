// Class /Script/Niagara.NiagaraParameterCollection
// Size: 0x60
class UNiagaraParameterCollection : public UObject
{
	struct FName Namespace; // 0x28 (0x4)
	unsigned char unreflected_2c[0x4]; // 0x2c (0x4) 
	struct TArray<struct FNiagaraVariable> Parameters; // 0x30 (0x10)
	class UMaterialParameterCollection* SourceMaterialCollection; // 0x40 (0x8)
	class UNiagaraParameterCollectionInstance* DefaultInstance; // 0x48 (0x8)
	struct FGuid CompileId; // 0x50 (0x10)
};

