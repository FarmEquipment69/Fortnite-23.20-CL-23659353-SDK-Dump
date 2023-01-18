// Class /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer
// Size: 0x2b8
class AElectraDataChannelPlayer : public AActor
{
	struct FMulticastInlineDelegate OnTerminalError; // 0x288 (0x10)
	unsigned char padding_298[0x20]; // 0x298 (0x20)

	/* Functions */

	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.UseTimeFromMediaPlayer (Underlying native function: UseTimeFromMediaPlayer 0x737bf64)
	void UseTimeFromMediaPlayer(class UMediaPlayer*& InMediaPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromStateStreamServer (Underlying native function: PlayFromStateStreamServer 0x737bb4c)
	void PlayFromStateStreamServer(struct FString& InStatePlaylistURL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromMediaPlayer (Underlying native function: PlayFromMediaPlayer 0x737bacc)
	void PlayFromMediaPlayer(class UMediaPlayer*& InMediaPlayer); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.PlayFromFile (Underlying native function: PlayFromFile 0x737b978)
	void PlayFromFile(struct FString& InFilename); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/ElectraDataChannelRuntime.ElectraDataChannelPlayer.EndPlayback (Underlying native function: EndPlayback 0x737b870)
	void EndPlayback(); // (Final | Native | Public | BlueprintCallable)
};

