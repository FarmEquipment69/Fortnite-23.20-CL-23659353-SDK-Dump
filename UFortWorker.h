// Class /Script/FortniteGame.FortWorker
// Size: 0x1d0
class UFortWorker : public UFortCharacter
{
	struct FString slottedbuildingid; // 0x120 (0x10)
	int buildingslotused; // 0x130 (0x4)
	int Gender; // 0x134 (0x4)
	struct FString personality; // 0x138 (0x10)
	struct FString setbonus; // 0x148 (0x10)
	struct FString Portrait; // 0x158 (0x10)
	struct FGameplayTagContainer PersonalityTag; // 0x168 (0x20)
	struct FGameplayTagContainer SetBonusTag; // 0x188 (0x20)
	struct TWeakObjectPtr<class UFortItemIconDefinition> IconDefinition; // 0x1a8 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.FortWorker.GetWorkerTypeBP (Underlying native function: GetWorkerTypeBP 0x8ed1eb0)
	class UFortWorkerType* GetWorkerTypeBP(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)
};

