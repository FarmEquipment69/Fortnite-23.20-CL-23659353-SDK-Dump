// Class /Script/MediaMovieStreamer.MediaMovieAssets
// Size: 0x50
class UMediaMovieAssets : public UObject
{
	class UMediaPlayer* MediaPlayer; // 0x28 (0x8)
	class UMediaSoundComponent* MediaSoundComponent; // 0x30 (0x8)
	class UMediaSource* MediaSource; // 0x38 (0x8)
	class UMediaTexture* MediaTexture; // 0x40 (0x8)
	unsigned char padding_48[0x8]; // 0x48 (0x8)

	/* Functions */

	// Function /Script/MediaMovieStreamer.MediaMovieAssets.OnMediaEnd (Underlying native function: OnMediaEnd 0x7522814)
	void OnMediaEnd(); // (Final | Native | Private)
};

