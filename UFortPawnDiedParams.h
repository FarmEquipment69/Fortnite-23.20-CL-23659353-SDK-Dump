// Class /Script/FortniteGame.FortPawnDiedParams
// Size: 0x60
class UFortPawnDiedParams : public UFortMissionEventParams
{
	class AFortPawn* KilledPawn; // 0x28 (0x8)
	class AController* KilledController; // 0x30 (0x8)
	class AController* KilledBy; // 0x38 (0x8)
	struct FGameplayTagContainer Tags; // 0x40 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortPawnDiedParams.SetParams (Underlying native function: SetParams 0x8b2f3ec)
	void SetParams(class AFortPawn*& InKilledPawn, class AController*& InKilledController, class AController*& InKilledBy, struct FGameplayTagContainer& InTags, class UFortPawnDiedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPawnDiedParams.BreakParams (Underlying native function: BreakParams 0x8b297b8)
	void BreakParams(class AFortPawn*& OutKilledPawn, class AController*& OutKilledController, class AController*& OutKilledBy, struct FGameplayTagContainer& OutTags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

