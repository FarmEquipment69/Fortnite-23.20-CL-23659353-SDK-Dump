// Class /Script/EngineSettings.GeneralProjectSettings
// Size: 0x118
class UGeneralProjectSettings : public UObject
{
	struct FString CompanyName; // 0x28 (0x10)
	struct FString CompanyDistinguishedName; // 0x38 (0x10)
	struct FString CopyrightNotice; // 0x48 (0x10)
	struct FString Description; // 0x58 (0x10)
	struct FString Homepage; // 0x68 (0x10)
	struct FString LicensingTerms; // 0x78 (0x10)
	struct FString PrivacyPolicy; // 0x88 (0x10)
	struct FGuid ProjectID; // 0x98 (0x10)
	struct FString ProjectName; // 0xa8 (0x10)
	struct FString ProjectVersion; // 0xb8 (0x10)
	struct FString SupportContact; // 0xc8 (0x10)
	struct FText ProjectDisplayedTitle; // 0xd8 (0x18)
	struct FText ProjectDebugTitleInfo; // 0xf0 (0x18)
	bool bShouldWindowPreserveAspectRatio; // 0x108 (0x1)
	bool bUseBorderlessWindow; // 0x109 (0x1)
	bool bStartInVR; // 0x10a (0x1)
	bool bAllowWindowResize; // 0x10b (0x1)
	bool bAllowClose; // 0x10c (0x1)
	bool bAllowMaximize; // 0x10d (0x1)
	bool bAllowMinimize; // 0x10e (0x1)
	unsigned char unreflected_10f[0x1]; // 0x10f (0x1) 
	float EyeOffsetForFakeStereoRenderingDevice; // 0x110 (0x4)
	float FOVForFakeStereoRenderingDevice; // 0x114 (0x4)
};

