// Class /Script/FortniteGame.PrimitiveStatsProfilingHelper
// Size: 0x28
class UPrimitiveStatsProfilingHelper : public UObject
{

	/* Functions */

	// Function /Script/FortniteGame.PrimitiveStatsProfilingHelper.PrintPrimitiveCaptureToLog (Underlying native function: PrintPrimitiveCaptureToLog 0x8e000d4)
	static void PrintPrimitiveCaptureToLog(struct TMap<struct FString, float>& InCapture); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveStatsProfilingHelper.PrintPrimitiveCaptureToCsv (Underlying native function: PrintPrimitiveCaptureToCsv 0x8dffdb4)
	static void PrintPrimitiveCaptureToCsv(struct TMap<struct FString, float>& InCapture, struct FString& InFilename, struct FString& OptionalCaptureName); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveStatsProfilingHelper.FinalizePrimitiveCaptureCsv (Underlying native function: FinalizePrimitiveCaptureCsv 0x8dfcb30)
	static void FinalizePrimitiveCaptureCsv(struct FString& InFilename); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveStatsProfilingHelper.EnablePrimitiveStatsCapture (Underlying native function: EnablePrimitiveStatsCapture 0x26daa0c)
	static void EnablePrimitiveStatsCapture(); // (Final | Native | Static | Private | BlueprintCallable)

	// Function /Script/FortniteGame.PrimitiveStatsProfilingHelper.CapturePrimitiveValues (Underlying native function: CapturePrimitiveValues 0x8dfc680)
	static struct TMap<struct FString, float> CapturePrimitiveValues(struct TMap<struct FString, float>& InPrevCapture, struct TMap<struct FString, float>& OutComparison, struct TArray<struct FString>& DesiredStats); // (Final | Native | Static | Private | HasOutParms | BlueprintCallable)
};

