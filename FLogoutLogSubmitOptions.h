// ScriptStruct /Script/FortniteGame.LogoutLogSubmitOptions
// Size: 0x20
struct FLogoutLogSubmitOptions
{
	bool bSubmitLogs; // 0x0 (0x1)
	bool bSubmitSecondaryLogs; // 0x1 (0x1)
	bool bSubmitLogsDuringLogin; // 0x2 (0x1)
	unsigned char unreflected_3[0x1]; // 0x3 (0x1) 
	int LogTailKb; // 0x4 (0x4)
	float LogSubmitChance; // 0x8 (0x4)
	unsigned char unreflected_c[0x4]; // 0xc (0x4) 
	struct TArray<struct FString> DoNotUploadReasons; // 0x10 (0x10)
};

