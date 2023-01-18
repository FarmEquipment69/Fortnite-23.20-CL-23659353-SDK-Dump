// Class /Script/FortniteGame.FortMediaStreamingRadio
// Size: 0x2c8
class AFortMediaStreamingRadio : public AActor
{
	class UMediaSoundComponent* SoundComponent; // 0x288 (0x8)
	struct TArray<struct FString> StationIDs; // 0x290 (0x10)
	class UMediaPlayer* MediaPlayer; // 0x2a0 (0x8)
	class UFortMediaPlayerCtrl* MediaPlayerController; // 0x2a8 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0x2b0 (0x8)
	float MediaStartTimeFromInit; // 0x2b8 (0x4)
	unsigned char padding_2bc[0xc]; // 0x2bc (0xc)

	/* Functions */

	// Function /Script/FortniteGame.FortMediaStreamingRadio.Stop (Underlying native function: Stop 0x8adf774)
	void Stop(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.Start (Underlying native function: Start 0x8adf670)
	void Start(int& StationIndex); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnSuccessfulURL (Underlying native function: OnSuccessfulURL 0x8add5a4)
	void OnSuccessfulURL(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnMediaOpened (Underlying native function: OnMediaOpened 0x8adcf78)
	void OnMediaOpened(struct FString& String); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnMediaClosed (Underlying native function: OnMediaClosed 0x5dbe020)
	void OnMediaClosed(); // (Final | Native | Private)

	// Function /Script/FortniteGame.FortMediaStreamingRadio.OnFailedURL (Underlying native function: OnFailedURL 0x8adcc60)
	void OnFailedURL(struct FString& URL); // (Final | Native | Private)
};

