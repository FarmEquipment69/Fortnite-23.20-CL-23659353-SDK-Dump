// ScriptStruct /Script/Engine.EmitterDynamicParameter
// Size: 0x40
struct FEmitterDynamicParameter
{
	struct FName ParamName; // 0x0 (0x4)
	unsigned char bUseEmitterTime; // 0x4 (0x1)
	unsigned char bSpawnTimeOnly; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	struct TEnumAsByte<EEmitterDynamicParameterValue> ValueMethod; // 0x8 (0x1)
	unsigned char unreflected_9[0x3]; // 0x9 (0x3) 
	unsigned char bScaleVelocityByParamValue; // 0xc (0x1)
	unsigned char unreflected_d[0x3]; // 0xd (0x3) 
	struct FRawDistributionFloat ParamValue; // 0x10 (0x30)
};

