// Class /Script/OnlineSubsystemUtils.OnlinePIESettings
// Size: 0x48
class UOnlinePIESettings : public UDeveloperSettings
{
	bool bOnlinePIEEnabled; // 0x30 (0x1)
	unsigned char unreflected_31[0x7]; // 0x31 (0x7) 
	struct TArray<struct FPIELoginSettingsInternal> Logins; // 0x38 (0x10)
};

