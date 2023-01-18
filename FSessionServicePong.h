// ScriptStruct /Script/SessionMessages.SessionServicePong
// Size: 0x90
struct FSessionServicePong
{
	bool AUTHORIZED; // 0x0 (0x1)
	unsigned char unreflected_1[0x7]; // 0x1 (0x7) 
	struct FString BuildDate; // 0x8 (0x10)
	struct FString DeviceName; // 0x18 (0x10)
	struct FGuid InstanceID; // 0x28 (0x10)
	struct FString InstanceName; // 0x38 (0x10)
	struct FString PlatformName; // 0x48 (0x10)
	struct FGuid SessionId; // 0x58 (0x10)
	struct FString SessionName; // 0x68 (0x10)
	struct FString SessionOwner; // 0x78 (0x10)
	bool Standalone; // 0x88 (0x1)
	unsigned char padding_89[0x7]; // 0x89 (0x7)
};

