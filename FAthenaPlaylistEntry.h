// ScriptStruct /Script/FortniteGame.AthenaPlaylistEntry
// Size: 0x78
struct FAthenaPlaylistEntry
{
	struct FString PlaylistName; // 0x0 (0x10)
	struct FString DisplayName; // 0x10 (0x10)
	struct FString DisplaySubName; // 0x20 (0x10)
	struct FString Description; // 0x30 (0x10)
	struct FString Violator; // 0x40 (0x10)
	struct FString Image; // 0x50 (0x10)
	struct TArray<struct FString> ExtraImages; // 0x60 (0x10)
	int CropOffset; // 0x70 (0x4)
	enum EFortMatchmakingTileStyle SpecialBorderId; // 0x74 (0x1)
	bool bShowRevealAnimation; // 0x75 (0x1)
	bool bIsCMSDataHidden; // 0x76 (0x1)
	unsigned char padding_77[0x1]; // 0x77 (0x1)
};

