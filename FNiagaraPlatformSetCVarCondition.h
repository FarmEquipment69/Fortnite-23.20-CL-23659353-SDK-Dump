// ScriptStruct /Script/Niagara.NiagaraPlatformSetCVarCondition
// Size: 0x30
struct FNiagaraPlatformSetCVarCondition
{
	struct FName CVarName; // 0x0 (0x4)
	enum ENiagaraCVarConditionResponse PassResponse; // 0x4 (0x1)
	enum ENiagaraCVarConditionResponse FailResponse; // 0x5 (0x1)
	bool Value; // 0x6 (0x1)
	unsigned char unreflected_7[0x1]; // 0x7 (0x1) 
	int MinInt; // 0x8 (0x4)
	int MaxInt; // 0xc (0x4)
	float MinFloat; // 0x10 (0x4)
	float MaxFloat; // 0x14 (0x4)
	unsigned char bUseMinInt; // 0x18 (0x1)
	unsigned char bUseMaxInt; // 0x18 (0x1)
	unsigned char bUseMinFloat; // 0x18 (0x1)
	unsigned char bUseMaxFloat; // 0x18 (0x1)
	unsigned char padding_19[0x17]; // 0x19 (0x17)
};

