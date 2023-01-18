// ScriptStruct /Script/Niagara.NiagaraBoolParameterMetaData
// Size: 0x20
struct FNiagaraBoolParameterMetaData
{
	enum ENiagaraBoolDisplayMode DisplayMode; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FName OverrideNameTrue; // 0x4 (0x4)
	struct FName OverrideNameFalse; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	class UTexture2D* IconOverrideTrue; // 0x10 (0x8)
	class UTexture2D* IconOverrideFalse; // 0x18 (0x8)
};

