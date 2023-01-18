// Class /Script/FortniteUI.LiveStreamScreen
// Size: 0x610
class ULiveStreamScreen : public UFortActivatableVideoPanel
{
	class UFortStreamMediaSource* StreamMediaSource; // 0x5f8 (0x8)
	unsigned char padding_600[0x10]; // 0x600 (0x10)

	/* Functions */

	// Function /Script/FortniteUI.LiveStreamScreen.OnRetrieveVideoUrlResult (Underlying native function: OnRetrieveVideoUrlResult 0xa848da4)
	void OnRetrieveVideoUrlResult(struct FString& URL); // (Final | Native | Private)
};

