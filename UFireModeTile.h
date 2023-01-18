// Class /Script/FortniteUI.FireModeTile
// Size: 0x14f0
class UFireModeTile : public UCommonButtonBase
{
	struct TMap<enum EFireModeType, struct FText> FireModeNames; // 0x13e0 (0x50)
	struct FText FireModeDescription; // 0x1430 (0x18)
	struct FText RecommendedTag; // 0x1448 (0x18)
	struct FText CustomOptionsTabName; // 0x1460 (0x18)
	enum EFireModeType PresetFireModeType; // 0x1478 (0x1)
	enum EFireModeType CustomOption1; // 0x1479 (0x1)
	enum EFireModeType CustomOption2; // 0x147a (0x1)
	unsigned char unreflected_147b[0x5]; // 0x147b (0x5) 
	struct FString VideoUID; // 0x1480 (0x10)
	class UMediaTexture* VideoTexture; // 0x1490 (0x8)
	class UCommonTextBlock* TextRecommendedTag; // 0x1498 (0x8)
	class UCommonTextBlock* TextTitle; // 0x14a0 (0x8)
	class UCommonTextBlock* TextDescription; // 0x14a8 (0x8)
	class UCommonTextBlock* TextCustomOptionsTabName; // 0x14b0 (0x8)
	class UButton* ButtonToggleCustomOptions; // 0x14b8 (0x8)
	class UFireModeCustomOptionButton* ButtonCustomOption1; // 0x14c0 (0x8)
	class UFireModeCustomOptionButton* ButtonCustomOption2; // 0x14c8 (0x8)
	class UFortFireModeStreamingVideo* VideoPlayer; // 0x14d0 (0x8)
	unsigned char padding_14d8[0x18]; // 0x14d8 (0x18)

	/* Functions */

	// Function /Script/FortniteUI.FireModeTile.UpdateDisplayedText (Underlying native function: UpdateDisplayedText 0xa6b6574)
	void UpdateDisplayedText(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FireModeTile.SetIsCustomOptionsPanelOpen (Underlying native function: SetIsCustomOptionsPanelOpen 0xa6b51c0)
	void SetIsCustomOptionsPanelOpen(bool& bIsOpen); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteUI.FireModeTile.OnMoviePlaybackChanged (Has no native function)
	void OnMoviePlaybackChanged(bool& bIsPlaying); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FireModeTile.OnCustomOptionsPanelToggled (Has no native function)
	void OnCustomOptionsPanelToggled(bool& bIsOpen); // (Event | Protected | BlueprintEvent)

	// Function /Script/FortniteUI.FireModeTile.HandleVideoPlayerPlaybackResumed (Underlying native function: HandleVideoPlayerPlaybackResumed 0xa6b3f78)
	void HandleVideoPlayerPlaybackResumed(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FireModeTile.HandleToggleCustomOptionsClicked (Underlying native function: HandleToggleCustomOptionsClicked 0xa6b3f50)
	void HandleToggleCustomOptionsClicked(); // (Final | Native | Private)
};

