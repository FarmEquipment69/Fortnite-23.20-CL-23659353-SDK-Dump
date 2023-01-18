// Class /Script/FortniteGame.FortPlaylistUIInfo
// Size: 0x140
class UFortPlaylistUIInfo : public UDataAsset
{
	struct TArray<struct FFortOptionsMenuData> OptionsMenuOverrides; // 0x30 (0x10)
	class UClass* PostGamePlacementOverlayClass; // 0x40 (0x8)
	struct TArray<struct FPostGameScreenTagClassPair> PostGameScreenOverrides; // 0x48 (0x10)
	class USoundCue* VictoryStinger; // 0x58 (0x8)
	struct FText VictoryText; // 0x60 (0x18)
	bool bIsCinematicVictory; // 0x78 (0x1)
	bool bShouldPushEmoteInput; // 0x79 (0x1)
	bool bShouldPlayOnLoss; // 0x7a (0x1)
	unsigned char unreflected_7b[0x1]; // 0x7b (0x1) 
	float StingerFadesToAudioMusicAfter; // 0x7c (0x4)
	struct FSlateBrush MinimapOverride; // 0x80 (0xc0)
};

