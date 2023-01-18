// Class /Script/EyeTracker.EyeTrackerFunctionLibrary
// Size: 0x28
class UEyeTrackerFunctionLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.SetEyeTrackedPlayer (Underlying native function: SetEyeTrackedPlayer 0x938fca8)
	static void SetEyeTrackedPlayer(class APlayerController*& PlayerController); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsStereoGazeDataAvailable (Underlying native function: IsStereoGazeDataAvailable 0x938fc64)
	static bool IsStereoGazeDataAvailable(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.IsEyeTrackerConnected (Underlying native function: IsEyeTrackerConnected 0x938fc18)
	static bool IsEyeTrackerConnected(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetStereoGazeData (Underlying native function: GetStereoGazeData 0x938fb54)
	static bool GetStereoGazeData(struct FEyeTrackerStereoGazeData& OutGazeData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/EyeTracker.EyeTrackerFunctionLibrary.GetGazeData (Underlying native function: GetGazeData 0x938fa94)
	static bool GetGazeData(struct FEyeTrackerGazeData& OutGazeData); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

