// Class /Script/TimeManagement.TimeManagementBlueprintLibrary
// Size: 0x28
class UTimeManagementBlueprintLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.TransformTime (Underlying native function: TransformTime 0x993f0ac)
	static struct FFrameTime* TransformTime(struct FFrameTime*& SourceTime, struct FFrameRate*& SourceRate, struct FFrameRate*& DestinationRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberInteger (Underlying native function: Subtract_FrameNumberInteger 0x993eff0)
	static struct FFrameNumber SubtractFrameNumberInteger(struct FFrameNumber& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Subtract_FrameNumberFrameNumber (Underlying native function: Subtract_FrameNumberFrameNumber 0x993ef34)
	static struct FFrameNumber SubtractFrameNumberFrameNumber(struct FFrameNumber& A, struct FFrameNumber& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.SnapFrameTimeToRate (Underlying native function: SnapFrameTimeToRate 0x993ede4)
	static struct FFrameTime* SnapFrameTimeToRate(struct FFrameTime*& SourceTime, struct FFrameRate*& SourceRate, struct FFrameRate*& SnapToRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_SecondsFrameRate (Underlying native function: Multiply_SecondsFrameRate 0x993ed04)
	static struct FFrameTime* MultiplySecondsFrameRate(float& TimeInSeconds, struct FFrameRate*& FrameRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Multiply_FrameNumberInteger (Underlying native function: Multiply_FrameNumberInteger 0x993ec48)
	static struct FFrameNumber MultiplyFrameNumberInteger(struct FFrameNumber& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_MultipleOf (Underlying native function: IsValid_MultipleOf 0x993eb54)
	static bool IsValidMultipleOf(struct FFrameRate*& InFrameRate, struct FFrameRate*& OtherFramerate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.IsValid_Framerate (Underlying native function: IsValid_Framerate 0x993eac4)
	static bool IsValidFramerate(struct FFrameRate*& InFrameRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecodeFrameRate (Underlying native function: GetTimecodeFrameRate 0x993ea9c)
	static struct FFrameRate* GetTimecodeFrameRate(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.GetTimecode (Underlying native function: GetTimecode 0x993ea64)
	static struct FTimecode GetTimecode(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Divide_FrameNumberInteger (Underlying native function: Divide_FrameNumberInteger 0x993e9a8)
	static struct FFrameNumber DivideFrameNumberInteger(struct FFrameNumber& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_TimecodeToString (Underlying native function: Conv_TimecodeToString 0x993e7c8)
	static struct FString ConvTimecodeToString(struct FTimecode& InTimecode, bool& bForceSignDisplay); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_QualifiedFrameTimeToSeconds (Underlying native function: Conv_QualifiedFrameTimeToSeconds 0x993e6e0)
	static float ConvQualifiedFrameTimeToSeconds(struct FQualifiedFrameTime& InFrameTime); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameRateToSeconds (Underlying native function: Conv_FrameRateToSeconds 0x993e634)
	static float ConvFrameRateToSeconds(struct FFrameRate*& InFrameRate); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Conv_FrameNumberToInteger (Underlying native function: Conv_FrameNumberToInteger 0x7df4524)
	static int ConvFrameNumberToInteger(struct FFrameNumber& InFrameNumber); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberInteger (Underlying native function: Add_FrameNumberInteger 0x993e578)
	static struct FFrameNumber AddFrameNumberInteger(struct FFrameNumber& A, int& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/TimeManagement.TimeManagementBlueprintLibrary.Add_FrameNumberFrameNumber (Underlying native function: Add_FrameNumberFrameNumber 0x993e4bc)
	static struct FFrameNumber AddFrameNumberFrameNumber(struct FFrameNumber& A, struct FFrameNumber& B); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)
};

