// ScriptStruct /Script/FortniteGame.HighlightReelPayload
// Size: 0xb0
struct FHighlightReelPayload
{
	struct FUniqueNetIdRepl UCRNPlayerId; // 0x0 (0x30)
	struct FString UCRNPlayerName; // 0x30 (0x10)
	int UCRNMMR; // 0x40 (0x4)
	unsigned char unreflected_44[0x4]; // 0x44 (0x4) 
	struct FHighlightReelPlayerInfoPayload UCRNPlayerInfo; // 0x48 (0x50)
	enum EHighlightReelIds UCRNHighlightReelId; // 0x98 (0x1)
	unsigned char unreflected_99[0x7]; // 0x99 (0x7) 
	struct TArray<struct FHighlightClipPayload> UCRNClips; // 0xa0 (0x10)
};

