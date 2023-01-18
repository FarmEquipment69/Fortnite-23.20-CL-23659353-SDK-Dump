// Class /Script/MotionTrajectory.MotionTrajectoryComponent
// Size: 0x270
class UMotionTrajectoryComponent : public UActorComponent
{
	unsigned char unreflected_a0[0x1a0]; // 0xa0 (0x1a0) 
	struct FMotionTrajectorySettings PredictionSettings; // 0x240 (0xc)
	struct FMotionTrajectorySettings HistorySettings; // 0x24c (0xc)
	int SampleRate; // 0x258 (0x4)
	int MaxSamples; // 0x25c (0x4)
	bool bPredictionIncludesHistory; // 0x260 (0x1)
	bool bUniformSampledHistory; // 0x261 (0x1)
	bool bSmoothInterpolation; // 0x262 (0x1)
	unsigned char padding_263[0xd]; // 0x263 (0xd)

	/* Functions */

	// Function /Script/MotionTrajectory.MotionTrajectoryComponent.SetSampleRate (Underlying native function: SetSampleRate 0x5c2b8f0)
	void SetSampleRate(int& Rate); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/MotionTrajectory.MotionTrajectoryComponent.GetTrajectoryWithSettings (Underlying native function: GetTrajectoryWithSettings 0x5c2ac10)
	struct FTrajectorySampleRange GetTrajectoryWithSettings(struct FMotionTrajectorySettings& Settings, bool& bIncludeHistory); // (Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotionTrajectory.MotionTrajectoryComponent.GetTrajectory (Underlying native function: GetTrajectory 0x5c2ab80)
	struct FTrajectorySampleRange GetTrajectory(); // (Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/MotionTrajectory.MotionTrajectoryComponent.GetHistory (Underlying native function: GetHistory 0x5c2ab00)
	struct FTrajectorySampleRange GetHistory(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

