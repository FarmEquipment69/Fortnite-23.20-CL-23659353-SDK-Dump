// Class /Script/FortniteGame.FortDateTimeLibrary
// Size: 0x28
class UFortDateTimeLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeTillEventTagEnds (Underlying native function: GetTimeTillEventTagEnds 0x8843898)
	static struct FTimespan* GetTimeTillEventTagEnds(class AFortPlayerController*& FortPC, struct FString& EventTag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimespanAsText (Underlying native function: GetTimespanAsText 0x2774550)
	static struct FText GetTimespanAsText(struct FTimespan*& Timespan, bool& bShowSeconds, enum ETimespanAsTextFormat& FormatType, enum ETimespanUnitDisplayFormat& UnitDisplayType); // (Final | 0x00000002 | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeSinceEventTagStart (Underlying native function: GetTimeSinceEventTagStart 0x88436e0)
	static struct FTimespan* GetTimeSinceEventTagStart(class AFortPlayerController*& FortPC, struct FString& EventTag); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetTimeSinceAthenaSeasonStart (Underlying native function: GetTimeSinceAthenaSeasonStart 0x8843644)
	static struct FTimespan* GetTimeSinceAthenaSeasonStart(class AFortPlayerController*& FortPC); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteGame.FortDateTimeLibrary.GetMcpRelativeUtcNow (Underlying native function: GetMcpRelativeUtcNow 0x8843428)
	static struct FDateTime* GetMcpRelativeUtcNow(class AFortPlayerController*& FortPC); // (Final | 0x00000002 | Native | Static | Public | HasDefaults | BlueprintCallable)
};

