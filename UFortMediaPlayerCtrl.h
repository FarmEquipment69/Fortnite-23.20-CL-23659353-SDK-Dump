// Class /Script/FortniteGame.FortMediaPlayerCtrl
// Size: 0x118
class UFortMediaPlayerCtrl : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	class UMediaPlayer* MediaPlayer; // 0x30 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0x38 (0x8)
	float InitialBufferDurationInSeconds; // 0x40 (0x4)
	float SegmentBufferDurationInSeconds; // 0x44 (0x4)
	struct FTimespan* MaxSyncedOffset; // 0x48 (0x8)
	float ServerTimeOffsetSmoothingFactor; // 0x50 (0x4)
	unsigned char MaxConsecutiveDesyncedFrames; // 0x54 (0x1)
	unsigned char unreflected_55[0x8b]; // 0x55 (0x8b) 
	class UMediaSource* CachedMediaSource; // 0xe0 (0x8)
	unsigned char padding_e8[0x30]; // 0xe8 (0x30)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaPlayerCtrl.SetPlayerStartTime (Underlying native function: SetPlayerStartTime 0x8e494e4)
	void SetPlayerStartTime(double& InRequestSentTime); // (0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaPlayerCtrl.Play (Underlying native function: Play 0x8e48bf0)
	bool Play(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaPlayerCtrl.OpenSourceWithOptions (Underlying native function: OpenSourceWithOptions 0x8e48ab0)
	bool OpenSourceWithOptions(class UMediaSource*& InMediaSource, struct FMediaPlayerOptions& InOptions); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaPlayerCtrl.GetPlayerStateIsPreparing (Underlying native function: GetPlayerStateIsPreparing 0x8e46440)
	bool GetPlayerStateIsPreparing(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortMediaPlayerCtrl.Close (Underlying native function: Close 0x8e45ee0)
	void Close(); // (Final | 0x00000002 | Native | Public | BlueprintCallable)
};

