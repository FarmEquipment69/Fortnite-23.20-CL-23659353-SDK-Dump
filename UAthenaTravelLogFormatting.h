// Class /Script/FortniteUI.AthenaTravelLogFormatting
// Size: 0x28
class UAthenaTravelLogFormatting : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.ShouldDisplayText (Underlying native function: ShouldDisplayText 0xa4b0d24)
	static bool ShouldDisplayText(struct FAthenaTravelLogEntry& Entry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.IsTravelLogTextDisplayEnabled (Underlying native function: IsTravelLogTextDisplayEnabled 0xa4b0018)
	static bool IsTravelLogTextDisplayEnabled(); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)

	// Function /Script/FortniteUI.AthenaTravelLogFormatting.FormatTravelLogEntry (Underlying native function: FormatTravelLogEntry 0xa4af3f4)
	static struct FText FormatTravelLogEntry(class UObject*& WorldContextObject, struct FAthenaTravelLogEntry& Entry); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

