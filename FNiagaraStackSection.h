// ScriptStruct /Script/Niagara.NiagaraStackSection
// Size: 0x38
struct FNiagaraStackSection
{
	struct FName SectionIdentifier; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FText SectionDisplayName; // 0x8 (0x18)
	struct TArray<struct FText> Categories; // 0x20 (0x10)
	bool bEnabled; // 0x30 (0x1)
	unsigned char padding_31[0x7]; // 0x31 (0x7)
};

