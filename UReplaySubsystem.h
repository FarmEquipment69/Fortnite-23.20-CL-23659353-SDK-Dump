// Class /Script/Engine.ReplaySubsystem
// Size: 0x40
class UReplaySubsystem : public UGameInstanceSubsystem
{
	bool bLoadDefaultMapOnStop; // 0x30 (0x1)
	unsigned char padding_31[0xf]; // 0x31 (0xf)

	/* Functions */

	// Function /Script/Engine.ReplaySubsystem.RequestCheckpoint (Underlying native function: RequestCheckpoint 0x9f47070)
	void RequestCheckpoint(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/Engine.ReplaySubsystem.IsRecording (Underlying native function: IsRecording 0x9f4704c)
	bool IsRecording(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ReplaySubsystem.IsPlaying (Underlying native function: IsPlaying 0x9f47028)
	bool IsPlaying(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ReplaySubsystem.GetReplayCurrentTime (Underlying native function: GetReplayCurrentTime 0x9f47000)
	float GetReplayCurrentTime(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/Engine.ReplaySubsystem.GetActiveReplayName (Underlying native function: GetActiveReplayName 0x9f46f8c)
	struct FString GetActiveReplayName(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

