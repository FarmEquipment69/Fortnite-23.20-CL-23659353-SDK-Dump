// ScriptStruct /Script/FortniteGame.VoiceChatLogSubmitOptions
// Size: 0x28
struct FVoiceChatLogSubmitOptions
{
	bool bSubmitLogs; // 0x0 (0x1)
	bool bSubmitSecondaryLogs; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int LogTailKb; // 0x4 (0x4)
	struct TArray<struct FVoiceChatLogUploadRule> IncludeRules; // 0x8 (0x10)
	struct TArray<struct FVoiceChatLogUploadRule> ExcludeRules; // 0x18 (0x10)
};

