// Class /Script/FortniteGame.CreativeProfilingHelper
// Size: 0x28
class UCreativeProfilingHelper : public UObject
{

	/* Functions */

	// Function /Script/FortniteGame.CreativeProfilingHelper.PrintThermometerCaptureToLog (Underlying native function: PrintThermometerCaptureToLog 0x8e0048c)
	static void PrintThermometerCaptureToLog(struct FCreativePerfCost*& InCapture, struct FString& CaptureName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProfilingHelper.PrintThermometerCaptureToCsv (Underlying native function: PrintThermometerCaptureToCsv 0x8e001dc)
	static void PrintThermometerCaptureToCsv(struct FCreativePerfCost*& InCapture, struct FString& InFilename, struct FString& OptionalCaptureName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProfilingHelper.CaptureOverallThermometerValue (Underlying native function: CaptureOverallThermometerValue 0x8dfc584)
	static struct FCreativePerfCost* CaptureOverallThermometerValue(float& InPrevCapture, float& OutComparison, enum EFortBudgetCategory& category); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.CreativeProfilingHelper.CaptureActorThermometerValue (Underlying native function: CaptureActorThermometerValue 0x8dfc064)
	static struct FCreativePerfCost* CaptureActorThermometerValue(class AActor*& InActor, enum EFortBudgetCategory& category); // (Final | Native | Static | Public | BlueprintCallable)
};

