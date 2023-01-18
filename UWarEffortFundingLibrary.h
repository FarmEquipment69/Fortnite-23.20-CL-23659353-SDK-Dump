// Class /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary
// Size: 0x28
class UWarEffortFundingLibrary : public UBlueprintFunctionLibrary
{

	/* Functions */

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.WriteTextToBuffer (Underlying native function: WriteTextToBuffer 0x72c0488)
	static struct FString WriteTextToBuffer(struct FText& Text); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption2ChoiceWinner (Underlying native function: IsOption2ChoiceWinner 0x72bf518)
	static bool IsOption2ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int& ChoiceIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsOption1ChoiceWinner (Underlying native function: IsOption1ChoiceWinner 0x72bf26c)
	static bool IsOption1ChoiceWinner(struct FWarEffortFundingMetadata& MetaData, int& ChoiceIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.IsIndexFunded (Underlying native function: IsIndexFunded 0x72bee80)
	static bool IsIndexFunded(struct FWarEffortFundingMetadata& MetaData, int& Index, struct TEnumAsByte<EWarEffortFundingStationType>& StationType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.GetIndexFundedPercent (Underlying native function: GetIndexFundedPercent 0x72bebc0)
	static float GetIndexFundedPercent(struct FWarEffortFundingMetadata& MetaData, int& Index, struct TEnumAsByte<EWarEffortFundingStationType>& StationType); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.DoesChoiceHaveWinner (Underlying native function: DoesChoiceHaveWinner 0x72be808)
	static bool DoesChoiceHaveWinner(struct FWarEffortFundingMetadata& MetaData, int& ChoiceIndex); // (Final | Native | Static | Public | HasOutParms | BlueprintCallable | BlueprintPure)

	// Function /Script/CorruptionGameplayCodeRuntime.WarEffortFundingLibrary.AdjustDonation (Underlying native function: AdjustDonation 0x72be6e8)
	static int AdjustDonation(int& DonationAmount, struct TEnumAsByte<EWarEffortFundingStationType>& StationType); // (Final | Native | Static | Public | BlueprintCallable | BlueprintPure)
};

