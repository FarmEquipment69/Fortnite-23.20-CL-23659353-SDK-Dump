// ScriptStruct /Script/MeshNetwork.AggregatedFunctionConfig
// Size: 0x60
struct FAggregatedFunctionConfig
{
	double AggregationTimeout; // 0x0 (0x8)
	bool bAggregationEnabled; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TSet<struct FName> NoAggregationParameters; // 0x10 (0x50)
};

