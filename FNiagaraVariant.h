// ScriptStruct /Script/Niagara.NiagaraVariant
// Size: 0x28
struct FNiagaraVariant
{
	class UObject* Object; // 0x0 (0x8)
	class UNiagaraDataInterface* DataInterface; // 0x8 (0x8)
	struct TArray<unsigned char> Bytes; // 0x10 (0x10)
	enum ENiagaraVariantMode CurrentMode; // 0x20 (0x4)
	unsigned char padding_24[0x4]; // 0x24 (0x4)
};

