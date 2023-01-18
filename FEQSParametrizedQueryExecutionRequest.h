// ScriptStruct /Script/AIModule.EQSParametrizedQueryExecutionRequest
// Size: 0x48
struct FEQSParametrizedQueryExecutionRequest
{
	class UEnvQuery* QueryTemplate; // 0x0 (0x8)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0x8 (0x10)
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0x18 (0x28)
	struct TEnumAsByte<EEnvQueryRunMode> RunMode; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	unsigned char bUseBBKeyForQueryTemplate; // 0x44 (0x1)
	unsigned char padding_45[0x3]; // 0x45 (0x3)
};

