// Class /Script/Engine.RPCDoSDetectionConfig
// Size: 0x88
class URPCDoSDetectionConfig : public UObject
{
	bool bRPCDoSDetection; // 0x28 (0x1)
	bool bRPCDoSAnalytics; // 0x29 (0x1)
	unsigned char unreflected_2a[0x2]; // 0x2a (0x2) 
	int HitchTimeQuotaMS; // 0x2c (0x4)
	int HitchSuspendDetectionTimeMS; // 0x30 (0x4)
	unsigned char unreflected_34[0x4]; // 0x34 (0x4) 
	struct TArray<struct FString> DetectionSeverity; // 0x38 (0x10)
	int InitialConnectToleranceMS; // 0x48 (0x4)
	unsigned char unreflected_4c[0x4]; // 0x4c (0x4) 
	struct TArray<struct FName> RPCBlockWhitelist; // 0x50 (0x10)
	struct TArray<struct FName> RPCBlockAllowlist; // 0x60 (0x10)
	struct TArray<struct FRPCAnalyticsThreshold> RPCAnalyticsThresholds; // 0x70 (0x10)
	double RPCAnalyticsOverrideChance; // 0x80 (0x8)
};

