// Class /Script/FortniteUI.FortEventLevelScreen
// Size: 0x458
class UFortEventLevelScreen : public UAthenaSpatialFrontend
{
	class UFortEventLevelData* EventLevelScreenData; // 0x438 (0x8)
	class UFortActivatableVideoPanel* CinematicMovieWidgetInstance; // 0x440 (0x8)
	struct FTimerHandle* StreamedVideoOpeningTimer; // 0x448 (0x8)
	bool bCollapseTopbar; // 0x450 (0x1)
	bool bCollapseBottombar; // 0x451 (0x1)
	unsigned char padding_452[0x6]; // 0x452 (0x6)

	/* Functions */

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOpeningTimedOut (Underlying native function: StreamedVideoOpeningTimedOut 0xa6b6538)
	void StreamedVideoOpeningTimedOut(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnUrlSuccess (Underlying native function: StreamedVideoOnUrlSuccess 0xa6b63d8)
	void StreamedVideoOnUrlSuccess(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnUrlFailure (Underlying native function: StreamedVideoOnUrlFailure 0xa6b6278)
	void StreamedVideoOnUrlFailure(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnSkipButtonClicked (Underlying native function: StreamedVideoOnSkipButtonClicked 0xa6b6264)
	void StreamedVideoOnSkipButtonClicked(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnSkipBeforeVideoURLReceived (Underlying native function: StreamedVideoOnSkipBeforeVideoURLReceived 0xa6b6250)
	void StreamedVideoOnSkipBeforeVideoURLReceived(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnOpenFailure (Underlying native function: StreamedVideoOnOpenFailure 0xa6b60fc)
	void StreamedVideoOnOpenFailure(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnMediaPlayerEndReached (Underlying native function: StreamedVideoOnMediaPlayerEndReached 0xa6b60e8)
	void StreamedVideoOnMediaPlayerEndReached(); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.StreamedVideoOnMediaOpened (Underlying native function: StreamedVideoOnMediaOpened 0xa6b5f94)
	void StreamedVideoOnMediaOpened(struct FString& OpenedURL); // (Final | Native | Private)

	// Function /Script/FortniteUI.FortEventLevelScreen.OnEventCinematicVideoFinished (Underlying native function: OnEventCinematicVideoFinished 0x8d3c318)
	void OnEventCinematicVideoFinished(); // (Native | Protected)
};

