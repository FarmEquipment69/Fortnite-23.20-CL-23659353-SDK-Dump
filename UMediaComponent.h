// Class /Script/MediaAssets.MediaComponent
// Size: 0xb0
class UMediaComponent : public UActorComponent
{
	class UMediaTexture* MediaTexture; // 0xa0 (0x8)
	class UMediaPlayer* MediaPlayer; // 0xa8 (0x8)

	/* Functions */

	// Function /Script/MediaAssets.MediaComponent.GetMediaTexture (Underlying native function: GetMediaTexture 0x2676038)
	class UMediaTexture* GetMediaTexture(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MediaAssets.MediaComponent.GetMediaPlayer (Underlying native function: GetMediaPlayer 0x76c2cd8)
	class UMediaPlayer* GetMediaPlayer(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

