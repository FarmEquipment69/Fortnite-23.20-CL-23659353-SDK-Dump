// Class /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
// Size: 0x7c0
class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget
{
	unsigned char unreflected_300[0x8]; // 0x300 (0x8) 
	int VersionByte; // 0x308 (0x4)
	struct FCDCInt VersionByteTracker; // 0x30c (0x4)
	struct FMulticastInlineDelegate VersionByteEvent; // 0x310 (0x10)
	int ScoreTeam; // 0x320 (0x4)
	unsigned char unreflected_324[0x4]; // 0x324 (0x4) 
	struct FCDCString ScoreTeamTracker; // 0x328 (0x10)
	struct FMulticastInlineDelegate ScoreTeamEvent; // 0x338 (0x10)
	struct FString ScoreTotal; // 0x348 (0x10)
	struct FCDCStringIntMap ScoreTotalTracker; // 0x358 (0x50)
	struct FMulticastInlineDelegate ScoreTotalEvent; // 0x3a8 (0x10)
	int64_t ScoreboardTimeLeft; // 0x3b8 (0x8)
	struct FCDCLargeInt* ScoreboardTimeLeftTracker; // 0x3c0 (0x8)
	struct FMulticastInlineDelegate ScoreboardTimeLeftEvent; // 0x3c8 (0x10)
	struct FString ScoreboardBestOf; // 0x3d8 (0x10)
	struct FCDCStringIntMap ScoreboardBestOfTracker; // 0x3e8 (0x50)
	struct FMulticastInlineDelegate ScoreboardBestOfEvent; // 0x438 (0x10)
	int OverTime; // 0x448 (0x4)
	struct FCDCInt OvertimeTracker; // 0x44c (0x4)
	struct FMulticastInlineDelegate OvertimeEvent; // 0x450 (0x10)
	struct FString TeamNames; // 0x460 (0x10)
	struct FCDCStringArray TeamNamesTracker; // 0x470 (0x18)
	struct FMulticastInlineDelegate TeamNamesEvent; // 0x488 (0x10)
	struct FString PlayerNames; // 0x498 (0x10)
	struct FCDCStringArray PlayerNamesTracker; // 0x4a8 (0x18)
	struct FMulticastInlineDelegate PlayerNamesEvent; // 0x4c0 (0x10)
	struct FString PlayerBoost; // 0x4d0 (0x10)
	struct FCDCStringIntMap PlayerBoostTracker; // 0x4e0 (0x50)
	struct FMulticastInlineDelegate PlayerBoostEvent; // 0x530 (0x10)
	struct FString PlayerBoostCollected; // 0x540 (0x10)
	struct FCDCStringStringMap PlayerBoostCollectedTracker; // 0x550 (0xa0)
	struct FMulticastInlineDelegate PlayerBoostCollectedEvent; // 0x5f0 (0x10)
	struct FString PlayerCoords; // 0x600 (0x10)
	struct FCDCStringFloatArrayMap PlayerCoordsTracker; // 0x610 (0x50)
	struct FMulticastInlineDelegate PlayerCoordsEvent; // 0x660 (0x10)
	struct FString BallCoords; // 0x670 (0x10)
	struct FCDCFloatArray BallCoordsTracker; // 0x680 (0x10)
	struct FMulticastInlineDelegate BallCoordsEvent; // 0x690 (0x10)
	struct FString MediaStart; // 0x6a0 (0x10)
	struct FCDCStringStringMap MediaStartTracker; // 0x6b0 (0xa0)
	struct FMulticastInlineDelegate MediaStartEvent; // 0x750 (0x10)
	int MediaStop; // 0x760 (0x4)
	struct FCDCInt MediaStopTracker; // 0x764 (0x4)
	struct FMulticastInlineDelegate MediaStopEvent; // 0x768 (0x10)
	int SeriesState; // 0x778 (0x4)
	struct FCDCInt SeriesStateTracker; // 0x77c (0x4)
	struct FMulticastInlineDelegate SeriesStateEvent; // 0x780 (0x10)
	int MatchState; // 0x790 (0x4)
	struct FCDCInt MatchStateTracker; // 0x794 (0x4)
	struct FMulticastInlineDelegate MatchStateEvent; // 0x798 (0x10)
	int FinaleState; // 0x7a8 (0x4)
	struct FCDCInt FinaleStateTracker; // 0x7ac (0x4)
	struct FMulticastInlineDelegate FinaleStateEvent; // 0x7b0 (0x10)

	/* Functions */

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.ReportServerStateStreamError (Underlying native function: ReportServerStateStreamError 0x7365fa0)
	void ReportServerStateStreamError(struct FString& Error, struct FString& UID, struct FString& URL); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_VersionByte (Underlying native function: OnRep_VersionByte 0x7365f68)
	void OnRepVersionByte(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_TeamNames (Underlying native function: OnRep_TeamNames 0x7365eec)
	void OnRepTeamNames(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_SeriesState (Underlying native function: OnRep_SeriesState 0x7365eb4)
	void OnRepSeriesState(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTotal (Underlying native function: OnRep_ScoreTotal 0x7365e50)
	void OnRepScoreTotal(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreTeam (Underlying native function: OnRep_ScoreTeam 0x7365e3c)
	void OnRepScoreTeam(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardTimeLeft (Underlying native function: OnRep_ScoreboardTimeLeft 0x7365e78)
	void OnRepScoreboardTimeLeft(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_ScoreboardBestOf (Underlying native function: OnRep_ScoreboardBestOf 0x7365e64)
	void OnRepScoreboardBestOf(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerNames (Underlying native function: OnRep_PlayerNames 0x7365e28)
	void OnRepPlayerNames(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerCoords (Underlying native function: OnRep_PlayerCoords 0x7365e14)
	void OnRepPlayerCoords(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoostCollected (Underlying native function: OnRep_PlayerBoostCollected 0x7365e00)
	void OnRepPlayerBoostCollected(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_PlayerBoost (Underlying native function: OnRep_PlayerBoost 0x7365dec)
	void OnRepPlayerBoost(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_Overtime (Underlying native function: OnRep_Overtime 0x7365db4)
	void OnRepOvertime(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStop (Underlying native function: OnRep_MediaStop 0x7365d7c)
	void OnRepMediaStop(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MediaStart (Underlying native function: OnRep_MediaStart 0x7365d68)
	void OnRepMediaStart(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_MatchState (Underlying native function: OnRep_MatchState 0x7365d30)
	void OnRepMatchState(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_FinaleState (Underlying native function: OnRep_FinaleState 0x7365cf8)
	void OnRepFinaleState(); // (Final | Native | Public)

	// Function /Script/CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL.OnRep_BallCoords (Underlying native function: OnRep_BallCoords 0x7365ce4)
	void OnRepBallCoords(); // (Final | Native | Public)
};

