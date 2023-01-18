// Class /Script/FortniteGame.FortStreamMediaSource
// Size: 0x448
class UFortStreamMediaSource : public UStreamMediaSource
{
	struct FString VideoStreamSource; // 0x98 (0x10)
	float VideoStreamSourceAB; // 0xa8 (0x4)
	unsigned char unreflected_ac[0x4]; // 0xac (0x4) 
	struct TMap<struct FString, struct FString> VideoId; // 0xb0 (0x50)
	bool bIsLive; // 0x100 (0x1)
	bool bBlurlLive; // 0x101 (0x1)
	unsigned char unreflected_102[0x2]; // 0x102 (0x2) 
	int MaxResolution; // 0x104 (0x4)
	int MaxBandwidth; // 0x108 (0x4)
	float AspectRatio; // 0x10c (0x4)
	bool bShareLock; // 0x110 (0x1)
	bool bAudioOnly; // 0x111 (0x1)
	bool bPartySync; // 0x112 (0x1)
	unsigned char unreflected_113[0x1]; // 0x113 (0x1) 
	float MediaDuration; // 0x114 (0x4)
	struct FString mimetype; // 0x118 (0x10)
	struct FString StreamDenyHTTPCode; // 0x128 (0x10)
	class UFortMediaMetadataResolver* MetadataResolver; // 0x138 (0x8)
	class UFortMediaCDNHostnames* CDNHostNames; // 0x140 (0x8)
	unsigned char unreflected_148[0x1d8]; // 0x148 (0x1d8) 
	struct FMulticastInlineDelegate OnVideoUrlSuccess; // 0x320 (0x10)
	struct FMulticastInlineDelegate OnVideoUrlFailed; // 0x330 (0x10)
	struct FMulticastInlineDelegate OnMetaDataFailure; // 0x340 (0x10)
	unsigned char unreflected_350[0x10]; // 0x350 (0x10) 
	class UFortDownloadLocalizedOverlays* FortDownloadLocalizedOverlays; // 0x360 (0x8)
	struct FString ProtectUserFromAVSettings; // 0x368 (0x10)
	struct FString StreamID; // 0x378 (0x10)
	struct FString StreamIDDevelopment; // 0x388 (0x10)
	class UMediaSource* LocalFilePlaybackAsset; // 0x398 (0x8)
	double HighestFramerate; // 0x3a0 (0x8)
	class UFortMediaRegionLockComponent* RegionLock; // 0x3a8 (0x8)
	unsigned char padding_3b0[0x98]; // 0x3b0 (0x98)

	/* Functions */

	// Function /Script/FortniteGame.FortStreamMediaSource.UpdatePlayerOptions (Underlying native function: UpdatePlayerOptions 0x89bb740)
	struct FMediaPlayerOptions UpdatePlayerOptions(struct FMediaPlayerOptions& PlayerOptions); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortStreamMediaSource.ShouldStreamBePlaying (Underlying native function: ShouldStreamBePlaying 0x89bb328)
	bool ShouldStreamBePlaying(class UObject*& WorldContextObject, class UPrimitiveComponent*& PrimitiveComponent, float& CullRadius); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortStreamMediaSource.ShouldProtectPlayerFromContent (Underlying native function: ShouldProtectPlayerFromContent 0x89bb304)
	struct TEnumAsByte<UCPTypes> ShouldProtectPlayerFromContent(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortStreamMediaSource.SetUrl (Underlying native function: SetUrl 0x89bb074)
	void SetUrl(struct FString& InURL); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.SetPlaybackStartTime (Underlying native function: SetPlaybackStartTime 0x89bac40)
	void SetPlaybackStartTime(float& StartTime); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.SetLocalizedOverlays (Underlying native function: SetLocalizedOverlays 0x86e9e68)
	void SetLocalizedOverlays(class UFortDownloadLocalizedOverlays*& InOverlays); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.RequestVideoUrl (Underlying native function: RequestVideoUrl 0x89b9bb4)
	void RequestVideoUrl(class APlayerController*& FortPC); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.ReinstateSharing (Underlying native function: ReinstateSharing 0x89b9b88)
	void ReinstateSharing(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.MetadataResultHandler (Underlying native function: MetadataResultHandler 0x2365934)
	void MetadataResultHandler(struct FFortMediaMetadataExt& MetaData, bool& bSuccess); // (Final | Native | Public | HasOutParms)

	// Function /Script/FortniteGame.FortStreamMediaSource.IsScreenRecordingInProgress (Underlying native function: IsScreenRecordingInProgress 0x2486284)
	bool IsScreenRecordingInProgress(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.HasLocalFilePlayback (Underlying native function: HasLocalFilePlayback 0x89b8f5c)
	bool HasLocalFilePlayback(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortStreamMediaSource.DisableSharing (Underlying native function: DisableSharing 0x89b86fc)
	void DisableSharing(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortStreamMediaSource.CancelVideoUrlRequest (Underlying native function: CancelVideoUrlRequest 0x89b8480)
	void CancelVideoUrlRequest(bool& bInCancelled); // (Final | Native | Public | BlueprintCallable)
};

