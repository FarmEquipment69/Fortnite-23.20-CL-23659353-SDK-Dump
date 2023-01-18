// Class /Script/Qos.QosRegionManager
// Size: 0xf8
class UQosRegionManager : public UObject
{
	int NumTestsPerRegion; // 0x28 (0x4)
	float PingTimeout; // 0x2c (0x4)
	bool bEnableSubspaceBiasOrder; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct FString SubspaceDelimiter; // 0x38 (0x10)
	struct TArray<struct FQosRegionInfo> RegionDefinitions; // 0x48 (0x10)
	struct TArray<struct FQosDatacenterInfo> DatacenterDefinitions; // 0x58 (0x10)
	struct FDateTime* LastCheckTimestamp; // 0x68 (0x8)
	class UQosEvaluator* Evaluator; // 0x70 (0x8)
	enum EQosCompletionResult QosEvalResult; // 0x78 (0x1)
	unsigned char unreflected_79[0x7]; // 0x79 (0x7) 
	struct TArray<struct FRegionQosInstance> RegionOptions; // 0x80 (0x10)
	struct FString ForceRegionId; // 0x90 (0x10)
	bool bRegionForcedViaCommandline; // 0xa0 (0x1)
	unsigned char unreflected_a1[0x7]; // 0xa1 (0x7) 
	struct FString SelectedRegionId; // 0xa8 (0x10)
	unsigned char padding_b8[0x40]; // 0xb8 (0x40)
};

