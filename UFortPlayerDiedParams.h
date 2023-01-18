// Class /Script/FortniteGame.FortPlayerDiedParams
// Size: 0x60
class UFortPlayerDiedParams : public UFortMissionEventParams
{
	class AFortPlayerPawn* KilledPlayer; // 0x28 (0x8)
	class AController* KilledPlayerController; // 0x30 (0x8)
	class AController* KilledBy; // 0x38 (0x8)
	struct FGameplayTagContainer Tags; // 0x40 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortPlayerDiedParams.SetParams (Underlying native function: SetParams 0x8b2f3ec)
	void SetParams(class AFortPlayerPawn*& KilledPlayer, class AController*& KilledPlayerController, class AController*& KilledBy, struct FGameplayTagContainer& Tags, class UFortPlayerDiedParams*& ThisParam); // (Final | Native | Public | HasOutParms | BlueprintCallable)

	// Function /Script/FortniteGame.FortPlayerDiedParams.BreakParams (Underlying native function: BreakParams 0x8b297b8)
	void BreakParams(class AFortPlayerPawn*& KilledPlayer, class AController*& KilledPlayerController, class AController*& KilledBy, struct FGameplayTagContainer& Tags); // (Final | Native | Public | HasOutParms | BlueprintCallable | BlueprintPure)
};

