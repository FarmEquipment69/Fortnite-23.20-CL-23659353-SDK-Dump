// ScriptStruct /Script/AIModule.AIDynamicParam
// Size: 0x38
struct FAIDynamicParam
{
	struct FName ParamName; // 0x0 (0x4)
	enum EAIParamType ParamType; // 0x4 (0x1)
	unsigned char unreflected_5[0x3]; // 0x5 (0x3) 
	float Value; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct FBlackboardKeySelector BBKey; // 0x10 (0x28)
};

