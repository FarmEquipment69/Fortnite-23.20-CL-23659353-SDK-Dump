// Class /Script/FortniteGame.FortPlayerDBNORevivedParams
// Size: 0x38
class UFortPlayerDBNORevivedParams : public UFortMissionEventParams
{
	class AFortPlayerPawn* RevivedPlayer; // 0x28 (0x8)
	class AController* RevivedBy; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerDBNORevivedParams.SetParams (Underlying native function: SetParams 0x8b2e698)
	void SetParams(class AFortPlayerPawn*& RevivedPlayer, class AController*& RevivedBy, class UFortPlayerDBNORevivedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerDBNORevivedParams.BreakParams (Underlying native function: BreakParams 0x8b28bf4)
	void BreakParams(class AFortPlayerPawn*& RevivedPlayer, class AController*& RevivedBy); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

