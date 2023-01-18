// Class /Script/Engine.KismetGuidLibrary
// Size: 0x28
class UKismetGuidLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/Engine.KismetGuidLibrary.Parse_StringToGuid (Underlying native function: Parse_StringToGuid 0x9e0b324)
	static void ParseStringToGuid(struct FString& GuidString, struct FGuid& OutGuid, bool& Success); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetGuidLibrary.NotEqual_GuidGuid (Underlying native function: NotEqual_GuidGuid 0x9e098a4)
	static bool NotEqualGuidGuid(struct FGuid& A, struct FGuid& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetGuidLibrary.NewGuid (Underlying native function: NewGuid 0x9e08de0)
	static struct FGuid NewGuid(); // (Final | Native | Static | Public | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetGuidLibrary.IsValid_Guid (Underlying native function: IsValid_Guid 0x9dfaaa4)
	static bool IsValidGuid(struct FGuid& InGuid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetGuidLibrary.Invalidate_Guid (Underlying native function: Invalidate_Guid 0x9df9340)
	static void InvalidateGuid(struct FGuid& InGuid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable)

	// Function /Script/Engine.KismetGuidLibrary.EqualEqual_GuidGuid (Underlying native function: EqualEqual_GuidGuid 0x9ded968)
	static bool EqualEqualGuidGuid(struct FGuid& A, struct FGuid& B); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)

	// Function /Script/Engine.KismetGuidLibrary.Conv_GuidToString (Underlying native function: Conv_GuidToString 0x9de511c)
	static struct FString ConvGuidToString(struct FGuid& InGuid); // (Final | Native | Static | Public | HasOutParms | HasDefaults | BlueprintCallable | BlueprintPure)
};

