// Class /Script/AugmentedReality.ARSharedWorldGameState
// Size: 0x328
class AARSharedWorldGameState : public AGameState
{
	struct TArray<unsigned char> PreviewImageData; // 0x2f0 (0x10)
	struct TArray<unsigned char> ARWorldData; // 0x300 (0x10)
	int PreviewImageBytesTotal; // 0x310 (0x4)
	int ARWorldBytesTotal; // 0x314 (0x4)
	int PreviewImageBytesDelivered; // 0x318 (0x4)
	int ARWorldBytesDelivered; // 0x31c (0x4)
	unsigned char padding_320[0x8]; // 0x320 (0x8)

	/* Functions */

	// Function /Script/AugmentedReality.ARSharedWorldGameState.K2_OnARWorldMapIsReady (Has no native function)
	void K2OnARWorldMapIsReady(); // (Event | Public | BlueprintEvent)
};

