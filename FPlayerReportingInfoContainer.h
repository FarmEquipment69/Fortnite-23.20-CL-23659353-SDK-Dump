// ScriptStruct /Script/FortniteGame.PlayerReportingInfoContainer
// Size: 0x70
struct FPlayerReportingInfoContainer
{
	class UFortLocalPlayer* Owner; // 0x0 (0x8)
	struct TArray<class UReportablePlayerInfo*> AllPlayerInfo; // 0x8 (0x10)
	struct TArray<class UReportablePlayerInfo*> AllIslandInfo; // 0x18 (0x10)
	unsigned char padding_28[0x48]; // 0x28 (0x48)
};

