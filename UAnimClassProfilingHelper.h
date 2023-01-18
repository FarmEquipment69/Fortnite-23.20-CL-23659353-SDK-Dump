// Class /Script/FortniteGame.AnimClassProfilingHelper
// Size: 0x28
class UAnimClassProfilingHelper : public UObject
{

	/* Functions */

	// Function /Script/FortniteGame.AnimClassProfilingHelper.PrintAnimClassStatsToLog (Underlying native function: PrintAnimClassStatsToLog 0x8dff784)
	static void PrintAnimClassStatsToLog(struct FAnimClassStats& Stats); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.AnimClassProfilingHelper.PrintAnimClassStatListToLog (Underlying native function: PrintAnimClassStatListToLog 0x8dff6b4)
	static void PrintAnimClassStatListToLog(struct TMap<struct FString, struct FAnimClassStats>& InCapture); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.AnimClassProfilingHelper.CaptureAnimClassStats (Underlying native function: CaptureAnimClassStats 0x8dfc124)
	static struct TMap<struct FString, struct FAnimClassStats> CaptureAnimClassStats(struct TMap<struct FString, struct FAnimClassStats>& InPrevCapture, struct TMap<struct FString, struct FAnimClassStats>& OutComparison, struct TArray<struct FString>& DesiredStats); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

