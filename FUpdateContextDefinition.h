// ScriptStruct /Script/Hotfix.UpdateContextDefinition
// Size: 0x68
struct FUpdateContextDefinition
{
	struct FString Name; // 0x0 (0x10)
	bool bEnabled; // 0x10 (0x1)
	bool bCheckAvailabilityOnly; // 0x11 (0x1)
	bool bPatchCheckEnabled; // 0x12 (0x1)
	bool bPlatformEnvironmentDetectionEnabled; // 0x13 (0x1)
	unsigned char unreflected_14[0x4]; // 0x14 (0x4) 
	struct TSet<struct FString> AdditionalTags; // 0x18 (0x50)
};

