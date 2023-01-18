// ScriptStruct /Script/NVIDIAGfeSDK.GfeSDKCreateResponse
// Size: 0x68
struct FGfeSDKCreateResponse
{
	uint16_t VersionMajor; // 0x0 (0x2)
	uint16_t VersionMinor; // 0x2 (0x2)
	unsigned char unreflected_4[0x4]; // 0x4 (0x4) 
	struct FString NVIDIAGfeVersion; // 0x8 (0x10)
	struct TMap<enum EGfeSDKScope, enum EGfeSDKPermission> ScopePermissions; // 0x18 (0x50)
};

