// ScriptStruct /Script/FortniteGame.AudioAnalysisParameterBase
// Size: 0xb0
struct FAudioAnalysisParameterBase
{
	struct FName Name; // 0x0 (0x4)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	class UMaterialParameterCollection* MaterialPC; // 0x8 (0x8)
	class UNiagaraParameterCollection* NiagaraPC; // 0x10 (0x8)
	unsigned char unreflected_18[0x8]; // 0x18 (0x8) 
	struct FAudioAnalysisParamHistory History; // 0x20 (0x80)
	unsigned char unreflected_a0[0x1]; // 0xa0 (0x1) 
	unsigned char bDebug; // 0xa1 (0x1)
	unsigned char padding_a2[0xe]; // 0xa2 (0xe)
};

