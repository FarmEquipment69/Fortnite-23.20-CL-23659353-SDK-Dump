// ScriptStruct /Script/Engine.SetDevicePropertyParams
// Size: 0x10
struct FSetDevicePropertyParams
{
	class UClass* DevicePropertyClass; // 0x0 (0x8)
	struct FPlatformUserId UserId; // 0x8 (0x4)
	bool bRemoveAfterEvaluationTime; // 0xc (0x1)
	unsigned char padding_d[0x3]; // 0xd (0x3)
};

