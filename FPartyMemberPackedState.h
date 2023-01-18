// ScriptStruct /Script/FortniteGame.PartyMemberPackedState
// Size: 0x9
struct FPartyMemberPackedState
{
	enum ESubGame SubGame; // 0x0 (0x1)
	enum EFortPartyMemberLocation Location; // 0x1 (0x1)
	enum EFortPartyMemberInGameMode GameMode; // 0x2 (0x1)
	enum EPartyMemberVoiceChatStatus VoiceChatStatus; // 0x3 (0x1)
	bool HasCompletedSTWTutorial; // 0x4 (0x1)
	bool HasPurchasedSTW; // 0x5 (0x1)
	bool PlatformSupportsSTW; // 0x6 (0x1)
	bool bDownloadOnDemandActive; // 0x7 (0x1)
	bool bIsPartyLFG; // 0x8 (0x1)
};

