// ScriptStruct /Script/FortniteGame.CosmeticContentOnDemandTelemetryData
// Size: 0x28
struct FCosmeticContentOnDemandTelemetryData
{
	int NumDynamicInstallBundles; // 0x0 (0x4)
	bool bDynamicInstallBundlesError; // 0x4 (0x1)
	bool bDynamicInstallCancelled; // 0x5 (0x1)
	unsigned char unreflected_6[0x2]; // 0x6 (0x2) 
	double InstallTime; // 0x8 (0x8)
	int RetryCount; // 0x10 (0x4)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct FString LastDynamicInstallBundleError; // 0x18 (0x10)
};

