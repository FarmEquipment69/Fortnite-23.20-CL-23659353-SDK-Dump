// Class /Script/FortniteGame.FortItemCollectedParams
// Size: 0x40
class UFortItemCollectedParams : public UFortMissionEventParams
{
	class UFortWorldItemDefinition* CollectedItemDefinition; // 0x28 (0x8)
	class AFortPlayerController* CollectedBy; // 0x30 (0x8)
	int AmountCollected; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortItemCollectedParams.SetParams (Underlying native function: SetParams 0x8b2f044)
	void SetParams(class UFortWorldItemDefinition*& CollectedItemDefinition, class AFortPlayerController*& CollectedBy, int& AmountCollected, class UFortItemCollectedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemCollectedParams.BreakParams (Underlying native function: BreakParams 0x8b2947c)
	void BreakParams(class UFortWorldItemDefinition*& CollectedItemDefinition, class AFortPlayerController*& CollectedBy, int& AmountCollected); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

