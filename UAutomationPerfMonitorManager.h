// Class /Script/FortniteGame.AutomationPerfMonitorManager
// Size: 0xa8
class UAutomationPerfMonitorManager : public UObject
{
	unsigned char unreflected_28[0x8]; // 0x28 (0x8) 
	struct TArray<struct FString> DesiredStats; // 0x30 (0x10)
	bool bRecording; // 0x40 (0x1)
	unsigned char unreflected_41[0x3]; // 0x41 (0x3) 
	float TimeSinceLastRecord; // 0x44 (0x4)
	int LastGoodFrame; // 0x48 (0x4)
	unsigned char padding_4c[0x5c]; // 0x4c (0x5c)

	/* Functions */

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.StopRecordingFTestPerf (Underlying native function: StopRecordingFTestPerf 0x26daa0c)
	void StopRecordingFTestPerf(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.StartRecordingFTestPerf (Underlying native function: StartRecordingFTestPerf 0x8d3d560)
	void StartRecordingFTestPerf(struct TArray<struct FString>& StatsToRecord); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.IsRecordingFTestPerf (Underlying native function: IsRecordingFTestPerf 0x89b8b40)
	bool IsRecordingFTestPerf(); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.GetStatAverage (Underlying native function: GetStatAverage 0x8f34c44)
	float GetStatAverage(struct FString& StatName); // (Final | Native | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AutomationPerfMonitorManager.GetPerfMonitorInstance (Underlying native function: GetPerfMonitorInstance 0x8f34a8c)
	static class UAutomationPerfMonitorManager* GetPerfMonitorInstance(); // (Final | Native | Static | Public | BlueprintCallable)
};

