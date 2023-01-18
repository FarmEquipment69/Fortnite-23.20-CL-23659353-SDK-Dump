// Class /Script/FortniteGame.FortControllerComponent_EndMatchPersistence
// Size: 0xe8
class UFortControllerComponent_EndMatchPersistence : public UActorComponent
{
	unsigned char unreflected_e8[0xe8]; 

	/* Functions */

	// Function /Script/FortniteGame.FortControllerComponent_EndMatchPersistence.GetFromPlayerController (Underlying native function: GetFromPlayerController 0x8287f68)
	static class UFortControllerComponent_EndMatchPersistence* GetFromPlayerController(class AFortPlayerControllerAthena*& PC, bool& bCreateIfNotFound); // (Final | 0x00000002 | Native | Static | Public | BlueprintCallable)

	// Function /Script/FortniteGame.FortControllerComponent_EndMatchPersistence.GetEndOfMatchLoot (Underlying native function: GetEndOfMatchLoot 0x8287f4c)
	struct TArray<struct FFortItemEntry> GetEndOfMatchLoot(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.FortControllerComponent_EndMatchPersistence.AddEndOfMatchLoot (Underlying native function: AddEndOfMatchLoot 0x8286398)
	void AddEndOfMatchLoot(struct TArray<struct FFortItemEntry>& LootList, bool& bAddToExisting); // (Final | 0x00000002 | Native | Public | HasOutParms | BlueprintCallable)
};

