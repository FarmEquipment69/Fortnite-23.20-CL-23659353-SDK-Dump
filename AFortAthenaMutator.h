// Class /Script/FortniteGame.FortAthenaMutator
// Size: 0x330
class AFortAthenaMutator : public AFortGameplayMutator
{
	unsigned char bMutatesGameMode; // 0x2c0 (0x1)
	unsigned char bMutatesGameState; // 0x2c0 (0x1)
	unsigned char unreflected_2c1[0x7]; // 0x2c1 (0x7) 
	class AFortGameModeAthena* CachedGameMode; // 0x2c8 (0x8)
	class AFortGameStateAthena* CachedGameState; // 0x2d0 (0x8)
	struct TSet<struct TWeakObjectPtr<class APlayerController>> InitializedPlayerControllers; // 0x2d8 (0x50)
	unsigned char unreflected_328[0x4]; // 0x328 (0x4) 
	enum EFortMutatorOverridePriority OverridePriority; // 0x32c (0x1)
	unsigned char padding_32d[0x3]; // 0x32d (0x3)

	/* Functions */

	// Function /Script/FortniteGame.FortAthenaMutator.GetGameplayMutatorByClass (Underlying native function: GetGameplayMutatorByClass 0x845dc9c)
	static class AFortGameplayMutator* GetGameplayMutatorByClass(class UObject*& ContextObject, class UClass*& MutatorClass); // (Final | Native | Static | Public | BlueprintCallable)
};

