// Class /Script/FortniteGame.MemoryStatsProfilingHelper
// Size: 0x28
class UMemoryStatsProfilingHelper : public UObject
{

	/* Functions */

	// Function /Script/FortniteGame.MemoryStatsProfilingHelper.PrintMemoryCaptureToLog (Underlying native function: PrintMemoryCaptureToLog 0x8dffc64)
	static void PrintMemoryCaptureToLog(struct TMap<struct FString, float>& InCapture, bool& bCaptureIsInMB); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MemoryStatsProfilingHelper.PrintMemoryCaptureToCsv (Underlying native function: PrintMemoryCaptureToCsv 0x8dff944)
	static void PrintMemoryCaptureToCsv(struct TMap<struct FString, float>& InCapture, struct FString& InFilename, struct FString& OptionalCaptureName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MemoryStatsProfilingHelper.FinalizeMemoryCaptureCsv (Underlying native function: FinalizeMemoryCaptureCsv 0x8dfc9d4)
	static void FinalizeMemoryCaptureCsv(struct FString& InFilename); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.MemoryStatsProfilingHelper.CaptureMemoryValues (Underlying native function: CaptureMemoryValues 0x8dfc328)
	static struct TMap<struct FString, float> CaptureMemoryValues(struct TMap<struct FString, float>& InPrevCapture, struct TMap<struct FString, float>& OutComparison, bool& bConvertToMB); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)
};

