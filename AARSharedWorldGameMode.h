// Class /Script/AugmentedReality.ARSharedWorldGameMode
// Size: 0x3d8
class AARSharedWorldGameMode : public AGameMode
{
	int BufferSizePerChunk; // 0x370 (0x4)
	unsigned char padding_374[0x64]; // 0x374 (0x64)

	/* Functions */

	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetPreviewImageData (Underlying native function: SetPreviewImageData 0x97bf5fc)
	void SetPreviewImageData(struct TArray<unsigned char>& ImageData); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARWorldSharingIsReady (Underlying native function: SetARWorldSharingIsReady 0x97be8a0)
	void SetARWorldSharingIsReady(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSharedWorldGameMode.SetARSharedWorldData (Underlying native function: SetARSharedWorldData 0x97be5e0)
	void SetARSharedWorldData(struct TArray<unsigned char>& ARWorldData); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)

	// Function /Script/AugmentedReality.ARSharedWorldGameMode.GetARSharedWorldGameState (Underlying native function: GetARSharedWorldGameState 0x73ad514)
	class AARSharedWorldGameState* GetARSharedWorldGameState(); // (Final | BlueprintAuthorityOnly | Native | Public | BlueprintCallable)
};

