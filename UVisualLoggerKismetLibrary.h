// Class /Script/Engine.VisualLoggerKismetLibrary
// Size: 0x28
class UVisualLoggerKismetLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.VisualLoggerKismetLibrary.RedirectVislog (Underlying native function: RedirectVislog 0x70dc290)
	static void RedirectVislog(class UObject*& SourceOwner, class UObject*& DestinationOwner); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.VisualLoggerKismetLibrary.LogText (Underlying native function: LogText 0x9fc6ae4)
	static void LogText(class UObject*& WorldContextObject, struct FString& Text, struct FName& LogCategory, bool& bAddToMessageLog); // (Final | Native | Static | Public | BlueprintCallable)

	// Function /Script/Engine.VisualLoggerKismetLibrary.LogSegment (Underlying native function: LogSegment 0x9fc67c4)
	static void LogSegment(class UObject*& WorldContextObject, struct FVector& SegmentStart, struct FVector& SegmentEnd, struct FString& Text, struct FLinearColor& ObjectColor, float& Thickness, struct FName& CategoryName, bool& bAddToMessageLog); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.VisualLoggerKismetLibrary.LogLocation (Underlying native function: LogLocation 0x9fc64dc)
	static void LogLocation(class UObject*& WorldContextObject, struct FVector& Location, struct FString& Text, struct FLinearColor& ObjectColor, float& Radius, struct FName& LogCategory, bool& bAddToMessageLog); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.VisualLoggerKismetLibrary.LogBox (Underlying native function: LogBox 0x9fc6224)
	static void LogBox(class UObject*& WorldContextObject, struct FBox& BoxShape, struct FString& Text, struct FLinearColor& ObjectColor, struct FName& LogCategory, bool& bAddToMessageLog); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.VisualLoggerKismetLibrary.EnableRecording (Underlying native function: EnableRecording 0x71a6cc4)
	static void EnableRecording(bool& bEnabled); // (Final | Native | Static | Public | BlueprintCallable)
};

