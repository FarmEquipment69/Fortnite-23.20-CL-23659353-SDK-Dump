// Class /Script/TraceUtilities.TraceUtilLibrary
// Size: 0x28
class UTraceUtilLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionStart (Underlying native function: TraceMarkRegionStart 0x7291288)
	static void TraceMarkRegionStart(struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceMarkRegionEnd (Underlying native function: TraceMarkRegionEnd 0x7291288)
	static void TraceMarkRegionEnd(struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.TraceBookmark (Underlying native function: TraceBookmark 0x7291288)
	static void TraceBookmark(struct FString& Name); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.ToggleChannel (Underlying native function: ToggleChannel 0x8090edc)
	static bool ToggleChannel(struct FString& ChannelName, bool& Enabled); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.StopTracing (Underlying native function: StopTracing 0x2486284)
	static bool StopTracing(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceToFile (Underlying native function: StartTraceToFile 0x8090d14)
	static bool StartTraceToFile(struct FString& Filename, struct TArray<struct FString>& Channels); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.StartTraceSendTo (Underlying native function: StartTraceSendTo 0x8090d14)
	static bool StartTraceSendTo(struct FString& Target, struct TArray<struct FString>& Channels); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.ResumeTracing (Underlying native function: ResumeTracing 0x27c9608)
	static bool ResumeTracing(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.PauseTracing (Underlying native function: PauseTracing 0x27c9608)
	static bool PauseTracing(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.IsTracing (Underlying native function: IsTracing 0x2486284)
	static bool IsTracing(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.IsChannelEnabled (Underlying native function: IsChannelEnabled 0x8090bc8)
	static bool IsChannelEnabled(struct FString& ChannelName); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.GetEnabledChannels (Underlying native function: GetEnabledChannels 0x8090b38)
	static struct TArray<struct FString> GetEnabledChannels(); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/TraceUtilities.TraceUtilLibrary.GetAllChannels (Underlying native function: GetAllChannels 0x8090afc)
	static struct TArray<struct FString> GetAllChannels(); // (Final | Native | Static | Public | BlueprintCallable)
};

