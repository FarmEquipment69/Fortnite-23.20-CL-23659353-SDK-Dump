// Class /Script/FortniteGame.FortItemDroppedParams
// Size: 0x40
class UFortItemDroppedParams : public UFortMissionEventParams
{
	class UFortWorldItemDefinition* DroppedItemDefinition; // 0x28 (0x8)
	class AFortPlayerController* DroppedBy; // 0x30 (0x8)
	int AmountDropped; // 0x38 (0x4)
	unsigned char padding_3c[0x4]; // 0x3c (0x4)

	/* Functions */

	// Function /Script/FortniteGame.FortItemDroppedParams.SetParams (Underlying native function: SetParams 0x8b2f044)
	void SetParams(class UFortWorldItemDefinition*& DroppedItemDefinition, class AFortPlayerController*& DroppedBy, int& AmountCollected, class UFortItemDroppedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortItemDroppedParams.BreakParams (Underlying native function: BreakParams 0x8b2947c)
	void BreakParams(class UFortWorldItemDefinition*& DroppedItemDefinition, class AFortPlayerController*& DroppedBy, int& AmountCollected); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

