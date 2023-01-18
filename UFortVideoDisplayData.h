// Class /Script/FortniteUI.FortVideoDisplayData
// Size: 0xa8
class UFortVideoDisplayData : public UDataAsset
{
	class UMediaPlayer* FortVideoPlayer; // 0x30 (0x8)
	class UFortMediaSubtitlesPlayer* SubtitlePlayer; // 0x38 (0x8)
	class UClass* VideoActivatablePanelClass; // 0x40 (0x8)
	struct TMap<struct FString, int> LocaleAudioTrackIndexMap; // 0x48 (0x50)
	struct TArray<struct FFortVideoInfo> Videos; // 0x98 (0x10)
};

