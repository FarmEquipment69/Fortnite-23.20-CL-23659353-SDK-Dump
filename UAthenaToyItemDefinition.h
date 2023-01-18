// Class /Script/FortniteGame.AthenaToyItemDefinition
// Size: 0xa80
class UAthenaToyItemDefinition : public UAthenaDanceItemDefinition
{
	struct TWeakObjectPtr<class UClass> ToySpawnAbility; // 0xa08 (0x28)
	struct TWeakObjectPtr<class UClass> ToyActorClass; // 0xa30 (0x28)
	struct TWeakObjectPtr<class UClass> FrontEndPreviewActor; // 0xa58 (0x28)

	/* Functions */

	// Function /Script/FortniteGame.AthenaToyItemDefinition.GetToyActorClass (Underlying native function: GetToyActorClass 0x876107c)
	struct TWeakObjectPtr<class UClass> GetToyActorClass(); // (Final | Native | Public | BlueprintCallable | BlueprintPure | Const)

	// Function /Script/FortniteGame.AthenaToyItemDefinition.BakeLaunchPositions (Underlying native function: BakeLaunchPositions 0x26daa0c)
	void BakeLaunchPositions(); // (Final | Native | Public)
};

