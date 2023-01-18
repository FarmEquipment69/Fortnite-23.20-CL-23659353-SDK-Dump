// Class /Script/FortniteGame.FortPlayerDBNOInterrogatedParams
// Size: 0x38
class UFortPlayerDBNOInterrogatedParams : public UFortMissionEventParams
{
	class AFortPlayerPawn* InterrogatedPlayer; // 0x28 (0x8)
	class AController* InterrogatedBy; // 0x30 (0x8)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerDBNOInterrogatedParams.SetParams (Underlying native function: SetParams 0x8b2e698)
	void SetParams(class AFortPlayerPawn*& InInterrogatedPlayer, class AController*& InInterrogatedBy, class UFortPlayerDBNOInterrogatedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerDBNOInterrogatedParams.BreakParams (Underlying native function: BreakParams 0x8b28bf4)
	void BreakParams(class AFortPlayerPawn*& OutInterrogatedPlayer, class AController*& OutInterrogatedBy); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure | Const)
};

