// Class /Script/FortniteUI.FortLoadingVideoPlayer
// Size: 0x108
class UFortLoadingVideoPlayer : public UObject
{
	unsigned char unreflected_28[0xa8]; // 0x28 (0xa8) 
	class UMediaPlayer* VideoPlayer; // 0xd0 (0x8)
	class UMediaTexture* VideoTexture; // 0xd8 (0x8)
	class UMediaSoundComponent* SoundComponent; // 0xe0 (0x8)
	class UFortStreamMediaSource* MediaSource; // 0xe8 (0x8)
	unsigned char unreflected_f0[0x8]; // 0xf0 (0x8) 
	class UFileMediaSource* FileMediaSource; // 0xf8 (0x8)
	unsigned char padding_100[0x8]; // 0x100 (0x8)

	/* Functions */

	// Function /Script/FortniteUI.FortLoadingVideoPlayer.RequestSuccess (Underlying native function: RequestSuccess 0xa701320)
	void RequestSuccess(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLoadingVideoPlayer.RequestFailure (Underlying native function: RequestFailure 0xa701120)
	void RequestFailure(struct FString& URL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortLoadingVideoPlayer.GetMediaTexture (Underlying native function: GetMediaTexture 0x76c248c)
	class UMediaTexture* GetMediaTexture(); // (Final | Native | Public)

	// Function /Script/FortniteUI.FortLoadingVideoPlayer.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x8a46f74)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public)
};

