// ScriptStruct /Script/GameFeedback.LogSubmitOptions
// Size: 0x30
struct FLogSubmitOptions
{
	struct FString EventName; // 0x0 (0x10)
	bool bSubmitLogs; // 0x10 (0x1)
	bool bSubmitLogsInOptionState; // 0x11 (0x1)
	unsigned char unreflected_12[0x2]; // 0x12 (0x2) 
	int LogTailKb; // 0x14 (0x4)
	float LogSubmitChance; // 0x18 (0x4)
	unsigned char unreflected_1c[0x4]; // 0x1c (0x4) 
	struct TArray<struct FString> DoNotUploadReasons; // 0x20 (0x10)
};

