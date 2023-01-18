// Class /Script/PictureInPictureCore.PictureInPicturePlayer
// Size: 0x230
class UPictureInPicturePlayer : public UObject
{
	unsigned char unreflected_28[0xe0]; // 0x28 (0xe0) 
	struct FPIPVideoPlayerAssetConfig AssetConfig; // 0x108 (0x88)
	class UPictureInPictureMediaPlayerCtrl* MediaController; // 0x190 (0x8)
	unsigned char unreflected_198[0x50]; // 0x198 (0x50) 
	class USoundSubmixBase* DefaultSubmix; // 0x1e8 (0x8)
	class USoundSubmixBase* LicensedSubmix; // 0x1f0 (0x8)
	unsigned char padding_1f8[0x38]; // 0x1f8 (0x38)

	/* Functions */

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.UpdateStreamingPlayerSize (Underlying native function: UpdateStreamingPlayerSize 0x751c2a0)
	void UpdateStreamingPlayerSize(struct FVector2D& InVector); // (Final | Native | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlSuccess (Underlying native function: StreamedVideoOnUrlSuccess 0x751c03c)
	void StreamedVideoOnUrlSuccess(struct FString& URL); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.StreamedVideoOnUrlFailure (Underlying native function: StreamedVideoOnUrlFailure 0x751bedc)
	void StreamedVideoOnUrlFailure(struct FString& URL); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.SetPlayerAssetConfig (Underlying native function: SetPlayerAssetConfig 0x751bb10)
	bool SetPlayerAssetConfig(struct FPIPVideoPlayerAssetConfig& InAssetConfig); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.IsAssetConfigSet (Underlying native function: IsAssetConfigSet 0x751b604)
	bool IsAssetConfigSet(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.HandleUCPAudioChanged (Underlying native function: HandleUCPAudioChanged 0x751b584)
	void HandleUCPAudioChanged(class UFortClientSettingsRecord*& Settings); // (Final | Native | Private)

	// Function /Script/PictureInPictureCore.PictureInPicturePlayer.FlushPlayerAssetConfig (Underlying native function: FlushPlayerAssetConfig 0x751a858)
	void FlushPlayerAssetConfig(); // (Final | Native | Public | BlueprintCallable)
};

