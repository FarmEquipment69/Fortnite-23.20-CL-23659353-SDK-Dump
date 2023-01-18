// Class /Script/MediaAssets.MediaPlayer
// Size: 0x140
class UMediaPlayer : public UObject
{
	struct FMulticastInlineDelegate OnEndReached; // 0x28 (0x10)
	struct FMulticastInlineDelegate OnMediaClosed; // 0x38 (0x10)
	struct FMulticastInlineDelegate OnMediaOpened; // 0x48 (0x10)
	struct FMulticastInlineDelegate OnMediaOpenFailed; // 0x58 (0x10)
	struct FMulticastInlineDelegate OnPlaybackResumed; // 0x68 (0x10)
	struct FMulticastInlineDelegate OnPlaybackSuspended; // 0x78 (0x10)
	struct FMulticastInlineDelegate OnSeekCompleted; // 0x88 (0x10)
	struct FMulticastInlineDelegate OnTracksChanged; // 0x98 (0x10)
	struct FTimespan* CacheAhead; // 0xa8 (0x8)
	struct FTimespan* CacheBehind; // 0xb0 (0x8)
	struct FTimespan* CacheBehindGame; // 0xb8 (0x8)
	bool NativeAudioOut; // 0xc0 (0x1)
	bool PlayOnOpen; // 0xc1 (0x1)
	unsigned char unreflected_c2[0x2]; // 0xc2 (0x2) 
	unsigned char Shuffle; // 0xc4 (0x1)
	unsigned char Loop; // 0xc4 (0x1)
	unsigned char unreflected_c5[0x3]; // 0xc5 (0x3) 
	class UMediaPlaylist* Playlist; // 0xc8 (0x8)
	int PlaylistIndex; // 0xd0 (0x4)
	unsigned char unreflected_d4[0x4]; // 0xd4 (0x4) 
	struct FTimespan* TimeDelay; // 0xd8 (0x8)
	float HorizontalFieldOfView; // 0xe0 (0x4)
	float VerticalFieldOfView; // 0xe4 (0x4)
	struct FRotator ViewRotation; // 0xe8 (0x18)
	unsigned char unreflected_100[0x28]; // 0x100 (0x28) 
	struct FGuid PlayerGuid; // 0x128 (0x10)
	unsigned char padding_138[0x8]; // 0x138 (0x8)

	/* Functions */

	// Function /Script/MediaAssets.MediaPlayer.SupportsSeeking (Underlying native function: SupportsSeeking 0x9bcb8fc)
	bool SupportsSeeking(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.SupportsScrubbing (Underlying native function: SupportsScrubbing 0x9bcb8d0)
	bool SupportsScrubbing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.SupportsRate (Underlying native function: SupportsRate 0x9bcb800)
	bool SupportsRate(float& Rate, bool& Unthinned); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.SetViewRotation (Underlying native function: SetViewRotation 0x9bcb724)
	bool SetViewRotation(struct FRotator& Rotation, bool& Absolute); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetViewField (Underlying native function: SetViewField 0x9bcb624)
	bool SetViewField(float& Horizontal, float& Vertical, bool& Absolute); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetVideoTrackFrameRate (Underlying native function: SetVideoTrackFrameRate 0x9bcb528)
	bool SetVideoTrackFrameRate(int& TrackIndex, int& FormatIndex, float& FrameRate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetTrackFormat (Underlying native function: SetTrackFormat 0x9bcb430)
	bool SetTrackFormat(enum EMediaPlayerTrack& TrackType, int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetTimeDelay (Underlying native function: SetTimeDelay 0x9bcb3b0)
	void SetTimeDelay(struct FTimespan*& TimeDelay); // (Final | Native | Public | HasDefaults | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetRate (Underlying native function: SetRate 0x9bcb238)
	bool SetRate(float& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetNativeVolume (Underlying native function: SetNativeVolume 0x9bcb18c)
	bool SetNativeVolume(float& Volume); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetMediaOptions (Underlying native function: SetMediaOptions 0x9bcaebc)
	void SetMediaOptions(class UMediaSource*& Options); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetLooping (Underlying native function: SetLooping 0x9bca9d0)
	bool SetLooping(bool& Looping); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetDesiredPlayerName (Underlying native function: SetDesiredPlayerName 0x9bca5c4)
	void SetDesiredPlayerName(struct FName& PlayerName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SetBlockOnTime (Underlying native function: SetBlockOnTime 0x9bca538)
	void SetBlockOnTime(struct FTimespan*& Time); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.SelectTrack (Underlying native function: SelectTrack 0x9bca478)
	bool SelectTrack(enum EMediaPlayerTrack& TrackType, int& TrackIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Seek (Underlying native function: Seek 0x9bca3e0)
	bool Seek(struct FTimespan*& Time); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Rewind (Underlying native function: Rewind 0x9bca354)
	bool Rewind(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Reopen (Underlying native function: Reopen 0x9bca258)
	bool Reopen(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Previous (Underlying native function: Previous 0x9bca0d0)
	bool Previous(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.PlayAndSeek (Underlying native function: PlayAndSeek 0x9bca0bc)
	void PlayAndSeek(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Play (Underlying native function: Play 0x9bca098)
	bool Play(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Pause (Underlying native function: Pause 0x9bca074)
	bool Pause(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenUrl (Underlying native function: OpenUrl 0x9bc9f10)
	bool OpenUrl(struct FString& URL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenSourceWithOptions (Underlying native function: OpenSourceWithOptions 0x9bc9e1c)
	bool OpenSourceWithOptions(class UMediaSource*& MediaSource, struct FMediaPlayerOptions& Options); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenSourceLatent (Underlying native function: OpenSourceLatent 0x9bc9c34)
	void OpenSourceLatent(class UObject*& WorldContextObject, struct FLatentActionInfo& LatentInfo, class UMediaSource*& MediaSource, struct FMediaPlayerOptions& Options, bool& bSuccess); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenSource (Underlying native function: OpenSource 0x9bc9ba4)
	bool OpenSource(class UMediaSource*& MediaSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylistIndex (Underlying native function: OpenPlaylistIndex 0x9bc9ae0)
	bool OpenPlaylistIndex(class UMediaPlaylist*& InPlaylist, int& Index); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenPlaylist (Underlying native function: OpenPlaylist 0x9bc9a50)
	bool OpenPlaylist(class UMediaPlaylist*& InPlaylist); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.OpenFile (Underlying native function: OpenFile 0x9bc98ec)
	bool OpenFile(struct FString& FilePath); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.Next (Underlying native function: Next 0x9bc98c8)
	bool Next(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.IsReady (Underlying native function: IsReady 0x9bc98a4)
	bool IsReady(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsPreparing (Underlying native function: IsPreparing 0x9bc9878)
	bool IsPreparing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsPlaying (Underlying native function: IsPlaying 0x9bc984c)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsPaused (Underlying native function: IsPaused 0x9bc9820)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsLooping (Underlying native function: IsLooping 0x9bc975c)
	bool IsLooping(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsConnecting (Underlying native function: IsConnecting 0x9bc9730)
	bool IsConnecting(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsClosed (Underlying native function: IsClosed 0x9bc9704)
	bool IsClosed(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.IsBuffering (Underlying native function: IsBuffering 0x9bc96d8)
	bool IsBuffering(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.HasError (Underlying native function: HasError 0x9bc9598)
	bool HasError(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetViewRotation (Underlying native function: GetViewRotation 0x9bc9560)
	struct FRotator GetViewRotation(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackType (Underlying native function: GetVideoTrackType 0x9bc939c)
	struct FString GetVideoTrackType(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRates (Underlying native function: GetVideoTrackFrameRates 0x9bc92cc)
	struct FFloatRange GetVideoTrackFrameRates(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackFrameRate (Underlying native function: GetVideoTrackFrameRate 0x9bc9204)
	float GetVideoTrackFrameRate(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackDimensions (Underlying native function: GetVideoTrackDimensions 0x9bc90f8)
	struct FIntPoint* GetVideoTrackDimensions(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVideoTrackAspectRatio (Underlying native function: GetVideoTrackAspectRatio 0x9bc9030)
	float GetVideoTrackAspectRatio(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetVerticalFieldOfView (Underlying native function: GetVerticalFieldOfView 0x9bc9008)
	float GetVerticalFieldOfView(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetUrl (Underlying native function: GetUrl 0x9bc8f8c)
	struct FString GetUrl(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTrackLanguage (Underlying native function: GetTrackLanguage 0x9bc8e9c)
	struct FString GetTrackLanguage(enum EMediaPlayerTrack& TrackType, int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTrackFormat (Underlying native function: GetTrackFormat 0x9bc8dd4)
	int GetTrackFormat(enum EMediaPlayerTrack& TrackType, int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTrackDisplayName (Underlying native function: GetTrackDisplayName 0x9bc8cd8)
	struct FText GetTrackDisplayName(enum EMediaPlayerTrack& TrackType, int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTimeStamp (Underlying native function: GetTimeStamp 0x9bc8c6c)
	class UMediaTimeStampInfo* GetTimeStamp(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTimeDelay (Underlying native function: GetTimeDelay 0x9bc8c50)
	struct FTimespan* GetTimeDelay(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetTime (Underlying native function: GetTime 0x9bc8c18)
	struct FTimespan* GetTime(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetSupportedRates (Underlying native function: GetSupportedRates 0x9bc8a24)
	void GetSupportedRates(struct TArray<struct FFloatRange>& OutRates, bool& Unthinned); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetSelectedTrack (Underlying native function: GetSelectedTrack 0x9bc8830)
	int GetSelectedTrack(enum EMediaPlayerTrack& TrackType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetRate (Underlying native function: GetRate 0x9bc8804)
	float GetRate(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetPlaylistIndex (Underlying native function: GetPlaylistIndex 0x712055c)
	int GetPlaylistIndex(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetPlaylist (Underlying native function: GetPlaylist 0x9bc869c)
	class UMediaPlaylist* GetPlaylist(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetPlayerName (Underlying native function: GetPlayerName 0x9bc8668)
	struct FName GetPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetNumTracks (Underlying native function: GetNumTracks 0x9bc8564)
	int GetNumTracks(enum EMediaPlayerTrack& TrackType); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetNumTrackFormats (Underlying native function: GetNumTrackFormats 0x9bc849c)
	int GetNumTrackFormats(enum EMediaPlayerTrack& TrackType, int& TrackIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetMediaName (Underlying native function: GetMediaName 0x9bc814c)
	struct FText GetMediaName(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetHorizontalFieldOfView (Underlying native function: GetHorizontalFieldOfView 0x9bc8124)
	float GetHorizontalFieldOfView(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetDuration (Underlying native function: GetDuration 0x9bc80a8)
	struct FTimespan* GetDuration(); // (Final | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetDesiredPlayerName (Underlying native function: GetDesiredPlayerName 0x9bc808c)
	struct FName GetDesiredPlayerName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackType (Underlying native function: GetAudioTrackType 0x9bc7ec8)
	struct FString GetAudioTrackType(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackSampleRate (Underlying native function: GetAudioTrackSampleRate 0x9bc7e04)
	int GetAudioTrackSampleRate(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.GetAudioTrackChannels (Underlying native function: GetAudioTrackChannels 0x9bc7d40)
	int GetAudioTrackChannels(int& TrackIndex, int& FormatIndex); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaPlayer.Close (Underlying native function: Close 0x9bc79e0)
	void Close(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.CanPlayUrl (Underlying native function: CanPlayUrl 0x9bc77f8)
	bool CanPlayUrl(struct FString& URL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.CanPlaySource (Underlying native function: CanPlaySource 0x9bc76a8)
	bool CanPlaySource(class UMediaSource*& MediaSource); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MediaAssets.MediaPlayer.CanPause (Underlying native function: CanPause 0x9bc767c)
	bool CanPause(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

