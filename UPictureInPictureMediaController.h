// Class /Script/PictureInPictureCore.PictureInPictureMediaController
// Size: 0x558
class UPictureInPictureMediaController : public UObject
{
	struct FString PartnerName; // 0x28 (0x10)
	unsigned char unreflected_38[0x10]; // 0x38 (0x10) 
	struct TArray<class UPictureInPictureActionData*> ActionDataArray; // 0x48 (0x10)
	struct FPIPVideoPlayerAssetConfig DefaultPlayerAssetConfig; // 0x58 (0x88)
	struct FPIPVideoPlayerAssetConfig PlayerAssetConfig; // 0xe0 (0x88)
	class UPictureInPicturePlayer* VideoWidget; // 0x168 (0x8)
	struct FPIPVideoPlayerConfig VideoWidgetConfig; // 0x170 (0x48)
	struct TWeakObjectPtr<class UCommonLazyImage> ThumbnailImageNext; // 0x1b8 (0x8)
	struct TWeakObjectPtr<class UCommonLazyImage> ThumbnailImagePrevious; // 0x1c0 (0x8)
	bool bSupportsMultipleSources; // 0x1c8 (0x1)
	unsigned char unreflected_1c9[0x7]; // 0x1c9 (0x7) 
	struct FPiPPartnerSource CurrentSource; // 0x1d0 (0x128)
	struct TArray<struct FPiPPartnerSource> Sources; // 0x2f8 (0x10)
	struct TArray<struct FPiPPartnerSource> ValidSources; // 0x308 (0x10)
	struct FMediaPlayerOptions LocalOptions; // 0x318 (0x30)
	struct FMulticastInlineDelegate BaseErrorEvent; // 0x348 (0x10)
	struct FMulticastInlineDelegate BaseEnabledEvent; // 0x358 (0x10)
	struct FMulticastInlineDelegate SourcesChangedEvent; // 0x368 (0x10)
	struct FMulticastInlineDelegate SourceSelectedEvent; // 0x378 (0x10)
	unsigned char unreflected_388[0x8]; // 0x388 (0x8) 
	struct TArray<struct FPictureInPictureActionConfig> InstanceActionData; // 0x390 (0x10)
	class UPictureInPictureAnalyticsManager* AnalyticsManager; // 0x3a0 (0x8)
	struct FDateTime* ActiveStartTime; // 0x3a8 (0x8)
	struct FDateTime* PausedStartTime; // 0x3b0 (0x8)
	unsigned char unreflected_3b8[0x8]; // 0x3b8 (0x8) 
	struct FPiPSuspendInfo SuspendedInfo; // 0x3c0 (0x130)
	unsigned char padding_4f0[0x68]; // 0x4f0 (0x68)

	/* Functions */

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.ToggleFullScreen (Underlying native function: ToggleFullScreen 0x751c1b0)
	void ToggleFullScreen(); // (Final | Native | Public)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Stop (Underlying native function: Stop 0x28b2a48)
	void Stop(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetEnabled (Underlying native function: SetEnabled 0x751ba44)
	void SetEnabled(bool& bIsEnabled, bool& bIsFromUser); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.SetCurrentSource (Underlying native function: SetCurrentSource 0x751b99c)
	void SetCurrentSource(struct FPiPPartnerSource& SelectedSource); // (Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Play (Underlying native function: Play 0x751b918)
	void Play(bool& bForcePlay); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Pause (Underlying native function: Pause 0xfb0c9c)
	void Pause(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnPrevThumbnailReceived (Underlying native function: OnPrevThumbnailReceived 0x751b898)
	void OnPrevThumbnailReceived(class UTexture2DDynamic*& InTexture); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnNextThumbnailReceived (Underlying native function: OnNextThumbnailReceived 0x751b818)
	void OnNextThumbnailReceived(class UTexture2DDynamic*& InTexture); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaStartedAnalytics (Underlying native function: OnMediaStartedAnalytics 0x751b804)
	void OnMediaStartedAnalytics(); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaResumedAnalytics (Underlying native function: OnMediaResumedAnalytics 0x751b7b4)
	void OnMediaResumedAnalytics(); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaPausedAnalytics (Underlying native function: OnMediaPausedAnalytics 0x751b7c8)
	void OnMediaPausedAnalytics(); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.OnMediaClosedAnalytics (Underlying native function: OnMediaClosedAnalytics 0x751b7b4)
	void OnMediaClosedAnalytics(); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPlaying (Underlying native function: IsPlaying 0x751b66c)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsPaused (Underlying native function: IsPaused 0x751b648)
	bool IsPaused(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsMultiSourceSupported (Underlying native function: IsMultiSourceSupported 0x6ae4fc8)
	bool IsMultiSourceSupported(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.IsEnabled (Underlying native function: IsEnabled 0x751b61c)
	bool IsEnabled(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.HandleSourceSelectedEvent (Underlying native function: HandleSourceSelectedEvent 0x751b42c)
	void HandleSourceSelectedEvent(struct FString& SelectedSource); // (Native | Protected)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetValidSources (Underlying native function: GetValidSources 0x751b368)
	struct TArray<struct FPiPPartnerSource> GetValidSources(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetSources (Underlying native function: GetSources 0x751b338)
	struct TArray<struct FPiPPartnerSource> GetSources(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetPlayerAssetConfig (Underlying native function: GetPlayerAssetConfig 0x751b2cc)
	struct FPIPVideoPlayerAssetConfig GetPlayerAssetConfig(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetMediaPlayerWidget (Underlying native function: GetMediaPlayerWidget 0x751ae14)
	class UPictureInPicturePlayer* GetMediaPlayerWidget(); // (Final | Native | Public | Const)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetDefaultPlayerAssetConfig (Underlying native function: GetDefaultPlayerAssetConfig 0x751aafc)
	struct FPIPVideoPlayerAssetConfig GetDefaultPlayerAssetConfig(); // (Final | Native | Public | Const)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetCurrentSource (Underlying native function: GetCurrentSource 0x751aacc)
	struct FPiPPartnerSource GetCurrentSource(); // (Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.GetActions (Underlying native function: GetActions 0x751a86c)
	struct TArray<class UPictureInPictureActionData*> GetActions(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPictureMediaController.Exit (Underlying native function: Exit 0x751a7d4)
	void Exit(bool& bStop); // (Native | Public | BlueprintCallable)
};

