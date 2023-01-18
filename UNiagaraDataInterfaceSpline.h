// Class /Script/Niagara.NiagaraDataInterfaceSpline
// Size: 0xb0
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
	class AActor* Source; // 0x38 (0x8)
	struct FNiagaraUserParameterBinding SplineUserParameter; // 0x40 (0x18)
	bool bUseLUT; // 0x58 (0x1)
	unsigned char unreflected_59[0x3]; // 0x59 (0x3) 
	int NumLUTSteps; // 0x5c (0x4)
	unsigned char padding_60[0x50]; // 0x60 (0x50)
};

