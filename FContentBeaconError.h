// ScriptStruct /Script/FortniteGame.ContentBeaconError
// Size: 0x110
struct FContentBeaconError
{
	enum EContentBeaconErrorCode ErrorCode; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString InnerErrorCode; // 0x8 (0x10)
	enum EContentBeaconErrorSource ErrorSource; // 0x18 (0x1)
	unsigned char unreflected_19[0x7]; // 0x19 (0x7) 
	struct FString DebugString; // 0x20 (0x10)
	struct FText InnerErrorMessage; // 0x30 (0x18)
	struct TArray<struct FContentBeaconErrorParam> AdditionalErrorParams; // 0x48 (0x10)
	struct FContentRequestId RequestId; // 0x58 (0x10)
	struct FUniqueNetIdRepl ClientId; // 0x68 (0x30)
	struct FClientModuleId ModuleId; // 0x98 (0x40)
	struct FString ModuleURL; // 0xd8 (0x10)
	struct FString VkProjectId; // 0xe8 (0x10)
	struct FString VkModuleId; // 0xf8 (0x10)
	bool IsLocalError; // 0x108 (0x1)
	enum EInnerErrorType CachedInnerErrorType; // 0x109 (0x1)
	unsigned char padding_10a[0x6]; // 0x10a (0x6)
};

