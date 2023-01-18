// Class /Script/FortniteGame.FortSquadStart
// Size: 0x2b8
class AFortSquadStart : public AActor
{
	struct TArray<class USceneComponent*> PlayerStarts; // 0x288 (0x10)
	struct FGameplayTagContainer GameplayTags; // 0x298 (0x20)

	/* Functions */

	// Function /Script/FortniteGame.FortSquadStart.GetSquadStartGameplayTags (Underlying native function: GetSquadStartGameplayTags 0x85459b8)
	struct FGameplayTagContainer GetSquadStartGameplayTags(); // (Final | 0x00000002 | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortSquadStart.GetPlayerStartTransform (Underlying native function: GetPlayerStartTransform 0x85456dc)
	struct FTransform GetPlayerStartTransform(int& Index); // (Final | 0x00000002 | Native | Public | HasDefaults | BlueprintCallable | BlueprintPure | Const)
};

