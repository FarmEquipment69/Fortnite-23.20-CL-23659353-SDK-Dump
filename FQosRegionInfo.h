// ScriptStruct /Script/Qos.QosRegionInfo
// Size: 0x40
struct FQosRegionInfo
{
	struct FText DisplayName; // 0x0 (0x18)
	struct FString RegionId; // 0x18 (0x10)
	bool bEnabled; // 0x28 (0x1)
	bool bVisible; // 0x29 (0x1)
	bool bAutoAssignable; // 0x2a (0x1)
	bool bAllowSubspaceBias; // 0x2b (0x1)
	struct FQosSubspaceComparisonParams SubspaceBiasParams; // 0x2c (0x10)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)
};

