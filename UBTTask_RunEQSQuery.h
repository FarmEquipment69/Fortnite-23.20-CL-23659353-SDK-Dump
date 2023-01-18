// Class /Script/AIModule.BTTask_RunEQSQuery
// Size: 0x158
class UBTTask_RunEQSQuery : public UBTTask_BlackboardBase
{
	class UEnvQuery* QueryTemplate; // 0x98 (0x8)
	struct TArray<struct FEnvNamedValue> QueryParams; // 0xa0 (0x10)
	struct TArray<struct FAIDynamicParam> QueryConfig; // 0xb0 (0x10)
	struct TEnumAsByte<EEnvQueryRunMode> RunMode; // 0xc0 (0x1)
	unsigned char unreflected_c1[0x7]; // 0xc1 (0x7) 
	struct FBlackboardKeySelector EQSQueryBlackboardKey; // 0xc8 (0x28)
	bool bUseBBKey; // 0xf0 (0x1)
	unsigned char unreflected_f1[0x7]; // 0xf1 (0x7) 
	struct FEQSParametrizedQueryExecutionRequest EQSRequest; // 0xf8 (0x48)
	bool bUpdateBBOnFail; // 0x140 (0x1)
	unsigned char padding_141[0x17]; // 0x141 (0x17)
};

