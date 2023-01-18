// ScriptStruct /Script/FortniteGame.PartyFailureLogSubmit
// Size: 0x18
struct FPartyFailureLogSubmit
{
	bool bSubmitLogs; // 0x0 (0x1)
	bool bSubmitSecondaryLogs; // 0x1 (0x1)
	unsigned char unreflected_2[0x2]; // 0x2 (0x2) 
	int LogTailKb; // 0x4 (0x4)
	struct TArray<struct FPartyFailureLogSubmitReason> Reasons; // 0x8 (0x10)
};

