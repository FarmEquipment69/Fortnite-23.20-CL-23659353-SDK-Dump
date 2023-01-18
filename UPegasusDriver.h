// Class /Script/FortniteGame.PegasusDriver
// Size: 0x330
class UPegasusDriver : public UObject
{
	unsigned char unreflected_28[0x18]; // 0x28 (0x18) 
	float PollIntervalSeconds; // 0x40 (0x4)
	float BaseHoursUntilClose; // 0x44 (0x4)
	unsigned char unreflected_48[0x8]; // 0x48 (0x8) 
	class UReplayVideoManager* VideoManager; // 0x50 (0x8)
	unsigned char unreflected_58[0x51]; // 0x58 (0x51) 
	bool bShouldDevBuildsShowFPS; // 0xa9 (0x1)
	unsigned char unreflected_aa[0x1ee]; // 0xaa (0x1ee) 
	float InactivityCheckSecondsInterval; // 0x298 (0x4)
	float MaxSecondsBetweenVideoExports; // 0x29c (0x4)
	unsigned char padding_2a0[0x90]; // 0x2a0 (0x90)

	/* Functions */

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerJobShotWatched (Underlying native function: HandleVideoManagerJobShotWatched 0x8e475a0)
	void HandleVideoManagerJobShotWatched(struct FVideoManagerExtractionJob& VideoManagerJob, struct FWatchedReplayShotInfo& WatchedInfo); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerJobShotExported (Underlying native function: HandleVideoManagerJobShotExported 0x8e47378)
	void HandleVideoManagerJobShotExported(struct FVideoManagerExtractionJob& VideoManagerJob, int& ShotIndex, struct FString& VideoPath); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerJobFailed (Underlying native function: HandleVideoManagerJobFailed 0x8e47088)
	void HandleVideoManagerJobFailed(struct FVideoManagerExtractionJob& ExtractionJob, struct FString& FailureReason, struct FString& ErrorCode); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerJobComplete (Underlying native function: HandleVideoManagerJobComplete 0x8e46fc4)
	void HandleVideoManagerJobComplete(struct FVideoManagerExtractionJob& ExtractionJob); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerJobBeganProcessing (Underlying native function: HandleVideoManagerJobBeganProcessing 0x8e46f00)
	void HandleVideoManagerJobBeganProcessing(struct FVideoManagerExtractionJob& ExtractionJob); // (Final | Native | Private | HasOutParms)

	// Function /Script/FortniteGame.PegasusDriver.HandleVideoManagerFinishedAllJobs (Underlying native function: HandleVideoManagerFinishedAllJobs 0x8e46eec)
	void HandleVideoManagerFinishedAllJobs(); // (Final | Native | Private)
};

