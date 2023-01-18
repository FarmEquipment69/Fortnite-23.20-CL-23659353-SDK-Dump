// ScriptStruct /Script/FortniteGame.CreativeBetaPermissionConfig
// Size: 0x40
struct FCreativeBetaPermissionConfig
{
	bool bUseCustomPrimaryAssetId; // 0x0 (0x1)
	unsigned char unreflected_1[0x3]; // 0x1 (0x3) 
	struct FPrimaryAssetId* PrimaryAssetId; // 0x4 (0x8)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FString> PermissionTagContainer; // 0x10 (0x10)
	struct TArray<struct FString> EntitlementTagContainer; // 0x20 (0x10)
	struct FCreativeBetaPermissionCustomPrimaryAssetId* CustomPrimaryAssetId; // 0x30 (0x8)
	bool bEnabled; // 0x38 (0x1)
	unsigned char padding_39[0x7]; // 0x39 (0x7)
};

