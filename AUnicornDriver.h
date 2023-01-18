// Class /Script/FortniteGame.UnicornDriver
// Size: 0x4c0
class AUnicornDriver : public AInfo
{
	unsigned char unreflected_288[0x128]; // 0x288 (0x128) 
	bool bEnableMainHighlightReel; // 0x3b0 (0x1)
	bool bEnableShorterExtendedHighlightReel; // 0x3b1 (0x1)
	bool bEnableShortHighlightReel; // 0x3b2 (0x1)
	bool bEnableShortExtendedHighlightReel; // 0x3b3 (0x1)
	bool bEnableMediumHighlightReel; // 0x3b4 (0x1)
	bool bEnableMediumExtendedighlightReel; // 0x3b5 (0x1)
	bool bEnablePlayerSpotlightReel; // 0x3b6 (0x1)
	bool bEnablePlayerSpotlightNoDeathsReel; // 0x3b7 (0x1)
	bool bEnableVATReel; // 0x3b8 (0x1)
	unsigned char unreflected_3b9[0x3]; // 0x3b9 (0x3) 
	float ShorterReelMaxClipDuration; // 0x3bc (0x4)
	float ShorterReelMaxLookback; // 0x3c0 (0x4)
	float ShorterReelMaxTailTime; // 0x3c4 (0x4)
	float ShorterReelEliminationLookbackTime; // 0x3c8 (0x4)
	float ShortReelMaxClipDuration; // 0x3cc (0x4)
	float ShortReelMaxLookback; // 0x3d0 (0x4)
	float ShortReelMaxTailTime; // 0x3d4 (0x4)
	float ShortReelEliminationLookbackTime; // 0x3d8 (0x4)
	float ShortExtendedReelMaxClipDuration; // 0x3dc (0x4)
	float ShortExtendedReelMaxLookback; // 0x3e0 (0x4)
	float ShortExtendedReelMaxTailTime; // 0x3e4 (0x4)
	float ShortExtendedReelEliminationLookbackTime; // 0x3e8 (0x4)
	float MediumReelMaxClipDuration; // 0x3ec (0x4)
	float MediumReelMaxLookback; // 0x3f0 (0x4)
	float MediumReelMaxTailTime; // 0x3f4 (0x4)
	float MediumExtendedReelMaxClipDuration; // 0x3f8 (0x4)
	float MediumExtendedReelMaxLookback; // 0x3fc (0x4)
	float MediumExtendedReelMaxTailTime; // 0x400 (0x4)
	float VATReelEliminationLookbackTime; // 0x404 (0x4)
	unsigned char unreflected_408[0x10]; // 0x408 (0x10) 
	int MaxHighlightsToSave; // 0x418 (0x4)
	float MinHighlightScore; // 0x41c (0x4)
	float DefaultShotLeadTime; // 0x420 (0x4)
	float DefaultShotTailTime; // 0x424 (0x4)
	float HighlightAnnotationTime; // 0x428 (0x4)
	int MinimumPlacementForHighlight; // 0x42c (0x4)
	bool bEnsureChronologicalHighlights; // 0x430 (0x1)
	unsigned char unreflected_431[0x77]; // 0x431 (0x77) 
	class UUnicornSocialComponent* SocialComponent; // 0x4a8 (0x8)
	class UUnicornWebAPIComponent* WebAPIComponent; // 0x4b0 (0x8)
	bool bShouldUploadHighlightsPayload; // 0x4b8 (0x1)
	unsigned char padding_4b9[0x7]; // 0x4b9 (0x7)

	/* Functions */

	// Function /Script/FortniteGame.UnicornDriver.UnicornStopStreamRecording (Underlying native function: UnicornStopStreamRecording 0x8fbe828)
	void UnicornStopStreamRecording(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornStartStreamRecording (Underlying native function: UnicornStartStreamRecording 0x8fbe780)
	void UnicornStartStreamRecording(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornStartStreamPlaybackToNow (Underlying native function: UnicornStartStreamPlaybackToNow 0x8fbe76c)
	void UnicornStartStreamPlaybackToNow(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornStartStreamPlayback (Underlying native function: UnicornStartStreamPlayback 0x8fbe758)
	void UnicornStartStreamPlayback(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornSetLoggingEnabled (Underlying native function: UnicornSetLoggingEnabled 0x8fbe6d8)
	void UnicornSetLoggingEnabled(bool& bEnabled); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornResetAll (Underlying native function: UnicornResetAll 0x8fbe6c4)
	void UnicornResetAll(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayUnionAllPlayersHighlights (Underlying native function: UnicornPlayUnionAllPlayersHighlights 0x8fbe5c8)
	void UnicornPlayUnionAllPlayersHighlights(unsigned char& ReelId, unsigned char& MessageSettings, bool& bExportSequenceFile); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayTopHighlights (Underlying native function: UnicornPlayTopHighlights 0x8fbe48c)
	void UnicornPlayTopHighlights(int& NumHighlights, unsigned char& ReelId, unsigned char& MessageSetting, bool& bExportSequenceFile); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayTopEliminationHighlights (Underlying native function: UnicornPlayTopEliminationHighlights 0x8fbe3cc)
	void UnicornPlayTopEliminationHighlights(int& NumHighlights, unsigned char& ReelId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayThroughPlayerHighlightReel (Underlying native function: UnicornPlayThroughPlayerHighlightReel 0x8fbe2d0)
	void UnicornPlayThroughPlayerHighlightReel(unsigned char& ReelId, unsigned char& MessageSettings, bool& bExportSequenceFile); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayOrderedHighlightsWithSocialFeature (Underlying native function: UnicornPlayOrderedHighlightsWithSocialFeature 0x8fbe20c)
	void UnicornPlayOrderedHighlightsWithSocialFeature(int& FeatureAsInt, unsigned char& ReelId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayOrderedHighlightsWithFeature (Underlying native function: UnicornPlayOrderedHighlightsWithFeature 0x8fbe148)
	void UnicornPlayOrderedHighlightsWithFeature(int& FeatureAsInt, unsigned char& ReelId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayLastEliminationHighlights (Underlying native function: UnicornPlayLastEliminationHighlights 0x8fbe084)
	void UnicornPlayLastEliminationHighlights(int& NumHighlights, unsigned char& ReelId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornPlayHighlight (Underlying native function: UnicornPlayHighlight 0x8fbe004)
	void UnicornPlayHighlight(int& HighlightId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornFollowPlayerWithHighlight (Underlying native function: UnicornFollowPlayerWithHighlight 0x8fbdf84)
	void UnicornFollowPlayerWithHighlight(int& HighlightId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornFakeAndUploadAndShutdown (Underlying native function: UnicornFakeAndUploadAndShutdown 0x8fbdf00)
	void UnicornFakeAndUploadAndShutdown(int& NumHighlights); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornFakeAndUpload (Underlying native function: UnicornFakeAndUpload 0x8fbde80)
	void UnicornFakeAndUpload(int& NumHighlights); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugUploadPayloadFile (Underlying native function: UnicornDebugUploadPayloadFile 0x8fbde6c)
	void UnicornDebugUploadPayloadFile(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugPlayerWithIdString (Underlying native function: UnicornDebugPlayerWithIdString 0x8fbdd18)
	void UnicornDebugPlayerWithIdString(struct FString& PlayerIdString); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugHighlightTime (Underlying native function: UnicornDebugHighlightTime 0x8fbdc98)
	void UnicornDebugHighlightTime(int& HighlightId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugHighlight (Underlying native function: UnicornDebugHighlight 0x8fbdc18)
	void UnicornDebugHighlight(int& HighlightId); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugCurrentReplayPlayer (Underlying native function: UnicornDebugCurrentReplayPlayer 0x8fbdbb4)
	void UnicornDebugCurrentReplayPlayer(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugCurrentPlayerSampler (Underlying native function: UnicornDebugCurrentPlayerSampler 0x8fbdb44)
	void UnicornDebugCurrentPlayerSampler(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornDebugCurrentPlayerPlayerLog (Underlying native function: UnicornDebugCurrentPlayerPlayerLog 0x8fbdb30)
	void UnicornDebugCurrentPlayerPlayerLog(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornCreateAndPlayServerGameHighlights (Underlying native function: UnicornCreateAndPlayServerGameHighlights 0x8fbd9f4)
	void UnicornCreateAndPlayServerGameHighlights(int& TargetSeconds, unsigned char& ReelId, unsigned char& MessageSetting, bool& bExportSequenceFile); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.UnicornClearDebugPlayer (Underlying native function: UnicornClearDebugPlayer 0x8fbd980)
	void UnicornClearDebugPlayer(); // (Final | Exec | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.RunHighlightExtractors (Underlying native function: RunHighlightExtractors 0x8fbd710)
	void RunHighlightExtractors(); // (Final | Exec | Native | Private)

	// Function /Script/FortniteGame.UnicornDriver.OnGamePhaseChanged (Underlying native function: OnGamePhaseChanged 0x8fbd654)
	void OnGamePhaseChanged(enum EAthenaGamePhase& GamePhase); // (Final | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.HandleDemoRecordingFinish (Underlying native function: HandleDemoRecordingFinish 0x8fbd230)
	void HandleDemoRecordingFinish(class UWorld*& InWorld); // (Final | Native | Public)

	// Function /Script/FortniteGame.UnicornDriver.HandleDemoPlaybackFinish (Underlying native function: HandleDemoPlaybackFinish 0x8fbd1b0)
	void HandleDemoPlaybackFinish(class UWorld*& InWorld); // (Final | Native | Public)
};

