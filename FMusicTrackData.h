// ScriptStruct /Script/FortniteGame.MusicTrackData
// Size: 0x50
struct FMusicTrackData : FTableRowBase
{
	bool Enabled; // 0x8 (0x1)
	unsigned char unreflected_9[0x7]; // 0x9 (0x7) 
	struct TWeakObjectPtr<class USoundBase> MusicTrackPath; // 0x10 (0x28)
	struct FText trackName; // 0x38 (0x18)
};

