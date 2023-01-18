// ScriptStruct /Script/EngineMessages.EngineServicePong
// Size: 0x50
struct FEngineServicePong
{
	struct FString CurrentLevel; // 0x0 (0x10)
	int EngineVersion; // 0x10 (0x4)
	bool HasBegunPlay; // 0x14 (0x1)
	unsigned char unreflected_15[0x3]; // 0x15 (0x3) 
	struct FGuid InstanceID; // 0x18 (0x10)
	struct FString InstanceType; // 0x28 (0x10)
	struct FGuid SessionId; // 0x38 (0x10)
	float WorldTimeSeconds; // 0x48 (0x4)
	unsigned char padding_4c[0x4]; // 0x4c (0x4)
};

