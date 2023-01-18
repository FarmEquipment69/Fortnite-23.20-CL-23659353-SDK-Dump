// ScriptStruct /Script/FortniteGame.FortMediaPlaylistExt
// Size: 0xa0
struct FFortMediaPlaylistExt
{
	struct FString Language; // 0x0 (0x10)
	struct FString Type; // 0x10 (0x10)
	struct FString URL; // 0x20 (0x10)
	struct FString RelUrl; // 0x30 (0x10)
	struct FString Data; // 0x40 (0x10)
	double Duration; // 0x50 (0x8)
	double FPS; // 0x58 (0x8)
	struct TArray<struct FFortMediaImageDataExt> Images; // 0x60 (0x10)
	struct TArray<struct FFortMediaAudioOnlyPeriodsDataExt> AudioOnlyPeriods; // 0x70 (0x10)
	struct TArray<struct FFortMediaVolumeChangeDataExt> VolumeChanges; // 0x80 (0x10)
	double SkipBoundaryTime; // 0x90 (0x8)
	double PreEndEventTime; // 0x98 (0x8)
};

