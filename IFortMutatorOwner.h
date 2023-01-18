// Class /Script/FortniteGame.FortMutatorOwner
// Size: 0x28
class IFortMutatorOwner : public IInterface
{

	/* Functions */

	// Function /Script/FortniteGame.FortMutatorOwner.RemoveMutatorFromList (Underlying native function: RemoveMutatorFromList 0x80a63a0)
	void RemoveMutatorFromList(class AFortGameplayMutator*& Mutator); // (Native | Public)

	// Function /Script/FortniteGame.FortMutatorOwner.GetMutatorRelevantPlayers (Underlying native function: GetMutatorRelevantPlayers 0x8391860)
	void GetMutatorRelevantPlayers(struct TArray<class APlayerState*>& OutPlayers); // (Native | Public | HasOutParms | Const)

	// Function /Script/FortniteGame.FortMutatorOwner.AddMutatorToList (Underlying native function: AddMutatorToList 0x83913f0)
	void AddMutatorToList(class AFortGameplayMutator*& Mutator); // (Native | Public)
};

